Master page
<%@ Master Language="C#" AutoEventWireup="true" CodeBehind="Site1.master.cs" Inherits="WebApplication8.Site1" %>

<!DOCTYPE html>

<html>
<head runat="server">
    <title>TYIT Master Page</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:Table ID="Table1" runat="server" GridLines="Both" Height="452px" Width="1129px">
                <asp:TableRow>
                    <asp:TableCell ColumnSpan="2" Style="text-align:center;">TYIT Master</asp:TableCell>
                </asp:TableRow>

                <asp:TableRow>
                    <asp:TableCell>
                        <asp:TreeView ID="TreeView1" runat="server">
                            <Nodes>
                                <asp:TreeNode Text="SEM5">
                                    <asp:TreeNode Text="Awp" NavigateUrl="~/WebForm7.aspx"></asp:TreeNode>
                                </asp:TreeNode>
                                <asp:TreeNode Text="SEM6">
                                    <asp:TreeNode Text="et" NavigateUrl="~/WebForm8.aspx"></asp:TreeNode>
                                </asp:TreeNode>
                            </Nodes>
                        </asp:TreeView>

                        <asp:Menu ID="Menu1" runat="server">
                            <Items>
                                <asp:MenuItem Text="sem5">
                                    <asp:MenuItem Text="awp" NavigateUrl="~/WebForm7.aspx"></asp:MenuItem>
                                </asp:MenuItem>
                                <asp:MenuItem Text="sem6">
                                    <asp:MenuItem Text="et" NavigateUrl="~/WebForm8.aspx"></asp:MenuItem>
                                </asp:MenuItem>
                            </Items>
                        </asp:Menu>
                    </asp:TableCell>
                    <asp:TableCell>
                        <asp:ContentPlaceHolder ID="ContentPlaceHolder1" runat="server">
                        </asp:ContentPlaceHolder>
                    </asp:TableCell>
                </asp:TableRow>

                <asp:TableRow>
                    <asp:TableCell ColumnSpan="2" Style="text-align:center;">&copy; Copyright</asp:TableCell>
                </asp:TableRow>
            </asp:Table>
        </div>
    </form>
</body>
</html>

Content page
<%@ Page Title="AWP Page" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm7.aspx.cs" Inherits="WebApplication8.WebForm7" %>
<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <h2>Awp</h2>
</asp:Content>


Content page
<%@ Page Title="ET Page" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm8.aspx.cs" Inherits="WebApplication8.WebForm8" %>
<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <h2>ET</h2>
</asp:Content>
