&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication13.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;Age Validation&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
Enter Age: &lt;asp:TextBox ID=&quot;TextBox1&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;
&lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;Validate&quot; OnClick=&quot;Button1_Click&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;

using System;
using System.Web.UI;
namespace WebApplication13
{
class AgeException : Exception
{

public AgeException(string message) : base(message) { }
}
public partial class WebForm1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e) { }
protected void Button1_Click(object sender, EventArgs e)
{
int age = Convert.ToInt32(TextBox1.Text);
try
{
if (age &gt; 80)
{
throw new AgeException(&quot;Invalid age&quot;);
}
Response.Write(&quot;Age is valid.&quot;);
}
catch (AgeException ex)
{
Response.Write(ex.Message);
}
finally
{
Response.Write(&quot;&lt;br&gt; Finally block executed.&quot;);
}
}
}
}
