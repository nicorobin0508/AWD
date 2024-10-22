webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;CustomApp.WebPage1&quot; %&gt;
&lt;!DOCTYPE html&gt;

&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;Custom Dropdown &amp; Checkbox Form&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;customForm&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:DropDownList ID=&quot;LocationDropdown&quot; AutoPostBack=&quot;true&quot; runat=&quot;server&quot;
OnSelectedIndexChanged=&quot;LocationDropdown_SelectionChanged&quot;&gt;
&lt;asp:ListItem Value=&quot;500100&quot;&gt;CityA&lt;/asp:ListItem&gt;
&lt;asp:ListItem Value=&quot;500101&quot;&gt;CityB&lt;/asp:ListItem&gt;
&lt;asp:ListItem Value=&quot;500102&quot;&gt;CityC&lt;/asp:ListItem&gt;
&lt;/asp:DropDownList&gt;
&lt;asp:Label ID=&quot;OutputLabel&quot; runat=&quot;server&quot; Text=&quot;Output will appear
here&quot;&gt;&lt;/asp:Label&gt;
&lt;asp:RadioButtonList ID=&quot;ColorRadioButtonList&quot; AutoPostBack=&quot;true&quot;
runat=&quot;server&quot; OnSelectedIndexChanged=&quot;ColorRadioButtonList_SelectionChanged&quot;&gt;
&lt;asp:ListItem Text=&quot;Green&quot; Value=&quot;Green&quot;&gt;&lt;/asp:ListItem&gt;
&lt;asp:ListItem Text=&quot;Yellow&quot; Value=&quot;Yellow&quot;&gt;&lt;/asp:ListItem&gt;
&lt;asp:ListItem Text=&quot;Orange&quot; Value=&quot;Orange&quot;&gt;&lt;/asp:ListItem&gt;
&lt;/asp:RadioButtonList&gt;
&lt;asp:RadioButtonList ID=&quot;FontRadioButtonList&quot; runat=&quot;server&quot; AutoPostBack=&quot;true&quot;
OnSelectedIndexChanged=&quot;FontRadioButtonList_SelectionChanged&quot;&gt;
&lt;asp:ListItem&gt;Verdana&lt;/asp:ListItem&gt;
&lt;asp:ListItem&gt;Comic Sans&lt;/asp:ListItem&gt;
&lt;asp:ListItem&gt;Georgia&lt;/asp:ListItem&gt;
&lt;/asp:RadioButtonList&gt;
&lt;asp:RadioButtonList ID=&quot;SizeRadioButtonList&quot; runat=&quot;server&quot; AutoPostBack=&quot;true&quot;
OnSelectedIndexChanged=&quot;SizeRadioButtonList_SelectionChanged&quot;&gt;
&lt;asp:ListItem&gt;Extra Small&lt;/asp:ListItem&gt;
&lt;asp:ListItem&gt;Normal&lt;/asp:ListItem&gt;
&lt;asp:ListItem&gt;Extra Large&lt;/asp:ListItem&gt;
&lt;/asp:RadioButtonList&gt;
&lt;asp:CheckBox ID=&quot;BoldCheckBox&quot; Text=&quot;Bold Text&quot; AutoPostBack=&quot;true&quot;
OnCheckedChanged=&quot;BoldCheckBox_Checked&quot; runat=&quot;server&quot; /&gt;
&lt;asp:CheckBox ID=&quot;UnderlineCheckBox&quot; Text=&quot;Underline Text&quot;
AutoPostBack=&quot;true&quot; OnCheckedChanged=&quot;UnderlineCheckBox_Checked&quot; runat=&quot;server&quot;
/&gt;
&lt;asp:CheckBox ID=&quot;ItalicCheckBox&quot; Text=&quot;Italic Text&quot; AutoPostBack=&quot;true&quot;
OnCheckedChanged=&quot;ItalicCheckBox_Checked&quot; runat=&quot;server&quot; /&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;

webform1.cs
using System;
using System.Web.UI;
using System.Web.UI.WebControls;
namespace CustomApp
{
public partial class WebPage1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e) { }
protected void LocationDropdown_SelectionChanged(object sender, EventArgs e)
{
OutputLabel.Text = LocationDropdown.SelectedValue;
}
protected void ColorRadioButtonList_SelectionChanged(object sender, EventArgs e)
{
if (ColorRadioButtonList.SelectedIndex == 0)
OutputLabel.ForeColor = System.Drawing.Color.Green;
if (ColorRadioButtonList.SelectedIndex == 1)
OutputLabel.ForeColor = System.Drawing.Color.Yellow;
if (ColorRadioButtonList.SelectedIndex == 2)
OutputLabel.ForeColor = System.Drawing.Color.Orange;
}
protected void FontRadioButtonList_SelectionChanged(object sender, EventArgs e)
{
OutputLabel.Font.Name = FontRadioButtonList.SelectedValue;
}
protected void SizeRadioButtonList_SelectionChanged(object sender, EventArgs e)
{
if (SizeRadioButtonList.SelectedIndex == 0)
OutputLabel.Font.Size = FontUnit.XSmall;
if (SizeRadioButtonList.SelectedIndex == 1)
OutputLabel.Font.Size = FontUnit.Medium;
if (SizeRadioButtonList.SelectedIndex == 2)
OutputLabel.Font.Size = FontUnit.XLarge;
}
protected void BoldCheckBox_Checked(object sender, EventArgs e)
{
OutputLabel.Font.Bold = BoldCheckBox.Checked;
}

protected void UnderlineCheckBox_Checked(object sender, EventArgs e)
{
OutputLabel.Font.Underline = UnderlineCheckBox.Checked;
}
protected void ItalicCheckBox_Checked(object sender, EventArgs e)
{
OutputLabel.Font.Italic = ItalicCheckBox.Checked;
}
}
}
