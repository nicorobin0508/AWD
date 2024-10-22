webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication25.WebForm2&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;br/&gt; enter name:&lt;asp:TextBox ID=&quot;TextBox1&quot;
runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;asp:RequiredFieldValidator ID=&quot;RequiredFieldValidator1&quot;
runat=&quot;server&quot; ControlToValidate=&quot;TextBox1&quot; ErrorMessage=&quot;enter
name&quot;&gt;&lt;/asp:RequiredFieldValidator&gt;
&lt;br/&gt; enter age:&lt;asp:TextBox ID=&quot;TextBox2&quot;
runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;asp:RangeValidator ID=&quot;RangeValidator1&quot; runat=&quot;server&quot;
ControlToValidate=&quot;TextBox2&quot; ErrorMessage=&quot;enter valid age&quot; MinimumValue=&quot;18&quot;
MaximumValue=&quot;60&quot; Type=&quot;Integer&quot;&gt;&lt;/asp:RangeValidator&gt;
&lt;br/&gt; enter email id:&lt;asp:TextBox ID=&quot;TextBox3&quot;
runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;asp:RegularExpressionValidator
ID=&quot;RegularExpressionValidator1&quot; runat=&quot;server&quot; ControlToValidate=&quot;TextBox3&quot;
ErrorMessage=&quot;enter valid mail&quot;
ValidationExpression=&quot;\S+\@\S+\.\S+&quot;&gt;&lt;/asp:RegularExpressionValidator&gt;
&lt;br/&gt; enter pswd:&lt;asp:TextBox ID=&quot;TextBox4&quot; runat=&quot;server&quot;
TextMode=&quot;Password&quot;&gt;&lt;/asp:TextBox&gt;&lt;asp:RequiredFieldValidator
ID=&quot;RequiredFieldValidator2&quot; runat=&quot;server&quot; ControlToValidate=&quot;TextBox4&quot;
ErrorMessage=&quot;enterpass&quot;&gt;&lt;/asp:RequiredFieldValidator&gt;
&lt;br/&gt; reenter pswd:&lt;asp:TextBox ID=&quot;TextBox5&quot; runat=&quot;server&quot;
TextMode=&quot;Password&quot;&gt;&lt;/asp:TextBox&gt;&lt;asp:CompareValidator ID=&quot;CompareValidator1&quot;
runat=&quot;server&quot; ControlToValidate=&quot;TextBox5&quot; ControlToCompare=&quot;TextBox4&quot;
Operator=&quot;Equal&quot; ErrorMessage=&quot;wrongpass&quot;&gt;&lt;/asp:CompareValidator&gt;
&lt;br/&gt; enter mobile no:&lt;asp:TextBox ID=&quot;TextBox6&quot;
runat=&quot;server&quot;&gt;&lt;/asp:TextBox&gt;&lt;asp:CustomValidator ID=&quot;CustomValidator1&quot; runat=&quot;server&quot;

ControlToValidate=&quot;TextBox6&quot; ErrorMessage=&quot;enter mob no&quot;
OnServerValidate=&quot;CustomValidator1_ServerValidate&quot;&gt;&lt;/asp:CustomValidator&gt;
&lt;br/&gt; &lt;asp:Button ID=&quot;Button1&quot; runat=&quot;server&quot; Text=&quot;Button&quot;
OnClick=&quot;Button1_Click&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;



webform1.cs
using System;
using System.Collections.Generic;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
namespace WebApplication25
{
public partial class WebForm2 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void CustomValidator1_ServerValidate(object source,
ServerValidateEventArgs args)
{
if (args.Value.Length == 10)
args.IsValid = true;
else
args.IsValid = false;
}
protected void Button1_Click(object sender, EventArgs e)
{
if (Page.IsValid)
Response.Write(&quot;data validated&quot;);
}
}
}
