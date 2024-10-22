Webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication10.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;Student Information&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
ID: &lt;asp:TextBox ID=&quot;TextBox1&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;br /&gt;
Name: &lt;asp:TextBox ID=&quot;TextBox2&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;br /&gt;
Class: &lt;asp:TextBox ID=&quot;TextBox3&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;br /&gt;
&lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;Insert&quot; OnClick=&quot;Button1_Click&quot; /&gt;
&lt;asp:Button ID=&quot;Button2&quot; runat=&quot;server&quot; Text=&quot;Delete&quot; OnClick=&quot;Button2_Click&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


webform1.cs
using System;
using System.Data.SqlClient;
using System.Web.UI;
namespace WebApplication10
{
public partial class WebForm1 : System.Web.UI.Page

{
protected void Page_Load(object sender, EventArgs e)
{
// No specific action needed on page load for this form.
}
protected void Button1_Click(object sender, EventArgs e)
{
// Insert record into the database
using (SqlConnection con = new SqlConnection(&quot;Data Source=SQL;Initial
Catalog=Muskan;User ID=user1;Password=user1&quot;))
{
SqlCommand cmd = new SqlCommand(&quot;INSERT INTO studinfo (Id, Name, Class)
VALUES (@Id, @Name, @Class)&quot;, con);
cmd.Parameters.AddWithValue(&quot;@Id&quot;, TextBox1.Text);
cmd.Parameters.AddWithValue(&quot;@Name&quot;, TextBox2.Text);
cmd.Parameters.AddWithValue(&quot;@Class&quot;, TextBox3.Text);
con.Open();
int rowsAffected = cmd.ExecuteNonQuery();
con.Close();
if (rowsAffected &gt; 0)
{
Response.Write(&quot;Data inserted successfully.&quot;);
}
else
{
Response.Write(&quot;Failed to insert data.&quot;);
}
}
}
protected void Button2_Click(object sender, EventArgs e)
{
// Delete record from the database
using (SqlConnection con = new SqlConnection(&quot;Data Source=SQL;Initial
Catalog=Muskan;User ID=user1;Password=user1&quot;))
{
SqlCommand cmd = new SqlCommand(&quot;DELETE FROM studinfo WHERE
Id=@Id&quot;, con);
cmd.Parameters.AddWithValue(&quot;@Id&quot;, TextBox1.Text);
con.Open();
int rowsAffected = cmd.ExecuteNonQuery();
con.Close();
if (rowsAffected &gt; 0)

{
Response.Write(&quot;Data deleted successfully.&quot;);
}
else
{
Response.Write(&quot;No record found with the specified ID.&quot;);
}
}
}
}
}
