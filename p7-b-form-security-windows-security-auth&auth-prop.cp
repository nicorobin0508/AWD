Webform3.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm3.aspx.cs&quot;
Inherits=&quot;WebApplication54.WebForm3&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;Login&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
User ID: &lt;asp:TextBox ID=&quot;TextBox1&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;br /&gt;
Password: &lt;asp:TextBox ID=&quot;TextBox2&quot; runat=&quot;server&quot;
TextMode=&quot;Password&quot;&gt;&lt;/asp:TextBox&gt;&lt;br /&gt;
&lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;Login&quot; OnClick=&quot;Button1_Click&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


Webform4.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm4.aspx.cs&quot;
Inherits=&quot;WebApplication54.WebForm4&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;Welcome&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
Welcome to the application!

&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


Web.config
&lt;?xml version=&quot;1.0&quot; encoding=&quot;utf-8&quot;?&gt;
&lt;configuration&gt;
&lt;system.web&gt;
&lt;authentication mode=&quot;Forms&quot;&gt;
&lt;forms loginUrl=&quot;WebForm3.aspx&quot; defaultUrl=&quot;WebForm4.aspx&quot; timeout=&quot;20&quot;
protection=&quot;None&quot;&gt;
&lt;credentials passwordFormat=&quot;Clear&quot;&gt;
&lt;user name=&quot;tyit&quot; password=&quot;tyit&quot;/&gt;
&lt;/credentials&gt;
&lt;/forms&gt;
&lt;/authentication&gt;
&lt;authorization&gt;
&lt;deny users=&quot;?&quot;/&gt;
&lt;/authorization&gt;
&lt;compilation debug=&quot;true&quot; targetFramework=&quot;4.7.2&quot; /&gt;
&lt;httpRuntime targetFramework=&quot;4.7.2&quot; /&gt;
&lt;/system.web&gt;
&lt;/configuration&gt;


webform3.aspx.cs
using System;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Security;
namespace WebApplication54
{
public partial class WebForm3 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void Button1_Click(object sender, EventArgs e)
{
if (FormsAuthentication.Authenticate(TextBox1.Text, TextBox2.Text))

{
FormsAuthentication.RedirectFromLoginPage(TextBox1.Text, false);
}
else
{
Response.Write(&quot;Invalid credentials. Please try again.&quot;);
TextBox1.Text = &quot;&quot;;
TextBox2.Text = &quot;&quot;;
}
}
}
}
