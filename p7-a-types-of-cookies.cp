Non Persistent cookies
webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication54.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
name:&lt;asp:TextBox ID=&quot;TextBox1&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;
class:&lt;asp:TextBox ID=&quot;TextBox2&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;
&lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;submit&quot; OnClick=&quot;Button1_Click&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


Webform2.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication54.WebForm2&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
name:&lt;asp:Label ID=&quot;Label1&quot; runat=&quot;server&quot; Text=&quot;Label&quot;&gt;&lt;/asp:Label&gt;
class:&lt;asp:Label ID=&quot;Label2&quot; runat=&quot;server&quot; Text=&quot;Label&quot;&gt;&lt;/asp:Label&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


webform.1.aspx.cs
using System;
using System.Web;
public partial class WebForm1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void Button1_Click(object sender, EventArgs e)
{
HttpCookie cookie = new HttpCookie(&quot;studinfo&quot;);
cookie[&quot;name&quot;] = TextBox1.Text;
cookie[&quot;class&quot;] = TextBox2.Text;
cookie.Expires = DateTime.Now.AddDays(10);
Response.Cookies.Add(cookie);
Response.Redirect(&quot;WebForm2.aspx&quot;);
}
}


webform.2.aspx.cs
using System;
using System.Web;
public partial class WebForm2 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
HttpCookie cookie = Request.Cookies[&quot;studinfo&quot;];
if (cookie != null)
{
Label1.Text = cookie[&quot;name&quot;];
Label2.Text = cookie[&quot;class&quot;];
}
}
}





Persistant
Webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication54.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
name:&lt;asp:TextBox ID=&quot;TextBox1&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;
class:&lt;asp:TextBox ID=&quot;TextBox2&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;
&lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;submit&quot; OnClick=&quot;Button1_Click&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


Webform2.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication54.WebForm2&quot; %&gt;
&lt;!DOCTYPE html&gt;

&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
name:&lt;asp:Label ID=&quot;Label1&quot; runat=&quot;server&quot; Text=&quot;Label&quot;&gt;&lt;/asp:Label&gt;
class:&lt;asp:Label ID=&quot;Label2&quot; runat=&quot;server&quot; Text=&quot;Label&quot;&gt;&lt;/asp:Label&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


webform.1.aspx.cs
using System;
using System.Web;
namespace WebApplication54
{
public partial class WebForm1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void Button1_Click(object sender, EventArgs e)
{
HttpCookie cookie = new HttpCookie(&quot;studinfo&quot;);
cookie[&quot;name&quot;] = TextBox1.Text;
cookie[&quot;class&quot;] = TextBox2.Text;
cookie.Expires = DateTime.Now.AddDays(10); // Cookie will persist for 10 days
Response.Cookies.Add(cookie);
Response.Redirect(&quot;WebForm2.aspx&quot;);
}
}
}


webform.2.aspx.cs
using System;
using System.Web;
namespace WebApplication54
{
public partial class WebForm2 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

HttpCookie cookie = Request.Cookies[&quot;studinfo&quot;];
if (cookie != null)
{
Label1.Text = cookie[&quot;name&quot;];
Label2.Text = cookie[&quot;class&quot;];
}
}
}
}
