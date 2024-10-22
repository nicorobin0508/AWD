webform1.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="CustomApp.WebPage1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Custom Dropdown & Checkbox Form</title>
</head>
<body>
    <form id="customForm" runat="server">
        <div>
            <asp:DropDownList ID="LocationDropdown" AutoPostBack="true" runat="server" OnSelectedIndexChanged="LocationDropdown_SelectionChanged">
                <asp:ListItem Value="500100">CityA</asp:ListItem>
                <asp:ListItem Value="500101">CityB</asp:ListItem>
                <asp:ListItem Value="500102">CityC</asp:ListItem>
            </asp:DropDownList>
            <asp:Label ID="OutputLabel" runat="server" Text="Output will appear here"></asp:Label>

            <asp:RadioButtonList ID="ColorRadioButtonList" AutoPostBack="true" runat="server" OnSelectedIndexChanged="ColorRadioButtonList_SelectionChanged">
                <asp:ListItem Text="Green" Value="Green"></asp:ListItem>
                <asp:ListItem Text="Yellow" Value="Yellow"></asp:ListItem>
                <asp:ListItem Text="Orange" Value="Orange"></asp:ListItem>
            </asp:RadioButtonList>

            <asp:RadioButtonList ID="FontRadioButtonList" runat="server" AutoPostBack="true" OnSelectedIndexChanged="FontRadioButtonList_SelectionChanged">
                <asp:ListItem>Verdana</asp:ListItem>
                <asp:ListItem>Comic Sans</asp:ListItem>
                <asp:ListItem>Georgia</asp:ListItem>
            </asp:RadioButtonList>

            <asp:RadioButtonList ID="SizeRadioButtonList" runat="server" AutoPostBack="true" OnSelectedIndexChanged="SizeRadioButtonList_SelectionChanged">
                <asp:ListItem>Extra Small</asp:ListItem>
                <asp:ListItem>Normal</asp:ListItem>
                <asp:ListItem>Extra Large</asp:ListItem>
            </asp:RadioButtonList>

            <asp:CheckBox ID="BoldCheckBox" Text="Bold Text" AutoPostBack="true" OnCheckedChanged="BoldCheckBox_Checked" runat="server" />
            <asp:CheckBox ID="UnderlineCheckBox" Text="Underline Text" AutoPostBack="true" OnCheckedChanged="UnderlineCheckBox_Checked" runat="server" />
            <asp:CheckBox ID="ItalicCheckBox" Text="Italic Text" AutoPostBack="true" OnCheckedChanged="ItalicCheckBox_Checked" runat="server" />
        </div>
    </form>
</body>
</html>



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
