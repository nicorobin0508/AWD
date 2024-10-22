webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication10.WebForm2&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;

&lt;asp:GridView ID=&quot;GridView1&quot; runat=&quot;server&quot;&gt;&lt;/asp:GridView&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;



Webform1.cs
using System;
using System.Data;
using System.Data.SqlClient;
namespace WebApplication10
{
public partial class WebForm2 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
SqlConnection con = new SqlConnection(&quot;Data Source=SQL;Initial
Catalog=Muskan;User ID=user1;Password=user1&quot;);
SqlDataAdapter ad = new SqlDataAdapter(&quot;select * from studinfo&quot;, con);
DataSet ds = new DataSet();
ad.Fill(ds);
GridView1.DataSource = ds;
GridView1.DataBind();
}
}
}
