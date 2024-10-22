Master page
<%@ Master Language="C#" AutoEventWireup="true" CodeBehind="Site1.master.cs" Inherits="WebApplication49.Site1" %>

<!DOCTYPE html>

<html>
<head runat="server">
    <title></title>
    <asp:ContentPlaceHolder ID="head" runat="server">
    </asp:ContentPlaceHolder>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:Table ID="Table1" runat="server">
                <asp:TableRow>
                    <asp:TableCell>
                        <asp:TreeView ID="TreeView1" runat="server">
                            <Nodes>
                                <asp:TreeNode Text="awp" NavigateUrl="~/WebForm2.aspx"></asp:TreeNode>
                                <asp:TreeNode Text="spm" NavigateUrl="~/WebForm3.aspx"></asp:TreeNode>
                                <asp:TreeNode Text="et" NavigateUrl="~/WebForm4.aspx"></asp:TreeNode>
                            </Nodes>
                        </asp:TreeView>
                    </asp:TableCell>
                </asp:TableRow>
            </asp:Table>
            <asp:ContentPlaceHolder ID="ContentPlaceHolder1" runat="server">
            </asp:ContentPlaceHolder>
        </div>
    </form>
</body>
</html>


Content page
<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="WebApplication49.WebForm2" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
    AWP
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    C#,.NET FRAMEWORK
</asp:Content>


Content page
<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm3.aspx.cs" Inherits="WebApplication49.WebForm3" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
    SPD
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    PROJECT MANAGMENT
</asp:Content>

Content page
<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm4.aspx.cs" Inherits="WebApplication49.WebForm4" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
    ET
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    NEW GENERATION TECHNOLOGY
</asp:Content>
