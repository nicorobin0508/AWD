webform1.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="WebApplication25.WebForm2" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
             <br/> enter name:<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox><asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="enter name"></asp:RequiredFieldValidator>
             <br/> enter age:<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox><asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox2" ErrorMessage="enter valid age" MinimumValue="18" MaximumValue="60" Type="Integer"></asp:RangeValidator>
             <br/> enter email id:<asp:TextBox ID="TextBox3" runat="server"></asp:TextBox><asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox3" ErrorMessage="enter valid mail" ValidationExpression="\S+\@\S+\.\S+"></asp:RegularExpressionValidator>
             <br/> enter pswd:<asp:TextBox ID="TextBox4" runat="server" TextMode="Password"></asp:TextBox><asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox4" ErrorMessage="enterpass"></asp:RequiredFieldValidator>
             <br/> reenter pswd:<asp:TextBox ID="TextBox5" runat="server" TextMode="Password"></asp:TextBox><asp:CompareValidator ID="CompareValidator1" runat="server" ControlToValidate="TextBox5" ControlToCompare="TextBox4" Operator="Equal" ErrorMessage="wrongpass"></asp:CompareValidator>
             <br/> enter mobile no:<asp:TextBox ID="TextBox6" runat="server"></asp:TextBox><asp:CustomValidator ID="CustomValidator1" runat="server" ControlToValidate="TextBox6" ErrorMessage="enter mob no" OnServerValidate="CustomValidator1_ServerValidate"></asp:CustomValidator>
             <br/> <asp:Button ID="Button1" runat="server" Text="Button" OnClick="Button1_Click" />
        </div>
    </form>
</body>
</html>

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

        protected void CustomValidator1_ServerValidate(object source, ServerValidateEventArgs args)
        {
            if (args.Value.Length == 10)
                args.IsValid = true;
            else
                args.IsValid = false;
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (Page.IsValid)
                Response.Write("data validated");
        }
    }
}
