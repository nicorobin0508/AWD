webform1.apsx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication50.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;ViewState Example&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:TextBox ID=&quot;TextBox1&quot; runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;
&lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;Increment&quot; OnClick=&quot;Button1_Click&quot;
/&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;



webform1.cs
namespace WebApplication50

{
public partial class WebForm1 : System.Web.UI.Page
{
int x = 1;
protected void Page_Load(object sender, EventArgs e)
{
if (!IsPostBack)
{
TextBox1.Text = &quot;0&quot;;
}
}
protected void Button1_Click(object sender, EventArgs e)
{
if (ViewState[&quot;a&quot;] != null)
{
x = Convert.ToInt32(ViewState[&quot;a&quot;]) + 1;
}
TextBox1.Text = x.ToString();
ViewState[&quot;a&quot;] = x; }
}
}

1)viewstate session




2)Session
namespace WebApplication50
{
public partial class WebForm1 : System.Web.UI.Page
{
int x = 1;
protected void Page_Load(object sender, EventArgs e)
{
if (!IsPostBack)
{
TextBox1.Text = &quot;0&quot;; }
}

protected void Button1_Click(object sender, EventArgs e)
{
if (Session[&quot;a&quot;] != null)
{
x = Convert.ToInt32(Session[&quot;a&quot;]) + 1;
}
TextBox1.Text = x.ToString();
Session[&quot;a&quot;] = x;
}
}
}



3)Application
namespace WebApplication50
{
public partial class WebForm1 : System.Web.UI.Page
{
int x = 1;
protected void Page_Load(object sender, EventArgs e)
{
if (!IsPostBack)
{
TextBox1.Text = &quot;0&quot;; // Initialize TextBox on first load

}
}
protected void Button1_Click(object sender, EventArgs e)
{
if (Application[&quot;a&quot;] != null)
{
x = Convert.ToInt32(Application[&quot;a&quot;]) + 1; // Increment the value from Application
}
TextBox1.Text = x.ToString();
Application[&quot;a&quot;] = x; // Store updated value in Application
}
}
}
