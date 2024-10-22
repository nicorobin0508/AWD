webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication43.WebForm1&quot; %&gt;
&lt;%@ Register Src=&quot;~/WebUserControl1.ascx&quot; TagPrefix=&quot;uc1&quot;
TagName=&quot;WebUserControl1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;

&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
DOB: &lt;uc1:WebUserControl1 runat=&quot;server&quot; id=&quot;WebUserControl1&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;



Webform2.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication43.WebForm2&quot; %&gt;
&lt;%@ Register Src=&quot;~/WebUserControl1.ascx&quot; TagPrefix=&quot;uc1&quot;
TagName=&quot;WebUserControl1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
DOJ:&lt;uc1:WebUserControl1 runat=&quot;server&quot; id=&quot;WebUserControl1&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;



Webform 3.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm3.aspx.cs&quot;
Inherits=&quot;WebApplication43.WebForm3&quot; %&gt;
&lt;%@ Register Src=&quot;~/WebUserControl1.ascx&quot; TagPrefix=&quot;uc1&quot;
TagName=&quot;WebUserControl1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
DOP:&lt;uc1:WebUserControl1 runat=&quot;server&quot; id=&quot;WebUserControl1&quot; /&gt;
&lt;/div&gt;

&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;
WebUserControl1.ascx
&lt;%@ Control Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot;
CodeBehind=&quot;WebUserControl1.ascx.cs&quot; Inherits=&quot;WebApplication43.WebUserControl1&quot;
%&gt;
&lt;asp:Calendar ID=&quot;Calendar1&quot; runat=&quot;server&quot;
OnSelectionChanged=&quot;Calendar1_SelectionChanged&quot;&gt;&lt;/asp:Calendar&gt;
&lt;asp:Label ID=&quot;Label1&quot; runat=&quot;server&quot; Text=&quot;Label&quot;&gt;&lt;/asp:Label&gt;



WebUserControl1.ascx.cs
namespace WebApplication43
{
public partial class WebUserControl1 : System.Web.UI.UserControl
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void Calendar1_SelectionChanged(object sender, EventArgs e)
{
Label1.Text = Calendar1.SelectedDate.ToLongDateString();
}
}
}
