Site1.master

<%@ Master Language="C#" AutoEventWireup="true" CodeBehind="Site1.master.cs" Inherits="WebApplication5.Site1" %>

<!DOCTYPE html>

<html>
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:Menu ID="Menu1" runat="server">
                <Items>
                    <asp:MenuItem Text="TYIT">
                        <asp:MenuItem Text="sem 5">
                            <asp:MenuItem Text="ET" NavigateUrl="~/WebForm2.aspx"></asp:MenuItem>
                            <asp:MenuItem Text="AWD" NavigateUrl="~/WebForm3.aspx"></asp:MenuItem>
                        </asp:MenuItem>
                    </asp:MenuItem>
                </Items>
            </asp:Menu>
            <asp:Table ID="Table1" runat="server">
                <asp:TableRow>
                    <asp:TableCell>
                        <asp:SiteMapPath ID="SiteMapPath1" runat="server" PathSeparator="#" CurrentNodeStyle-BackColor="Yellow"></asp:SiteMapPath>
                        <asp:TreeView ID="TreeView1" runat="server">
                            <Nodes>
                                <asp:TreeNode Text="sem4">
                                    <asp:TreeNode Text="java" NavigateUrl="~/WebForm4.aspx"></asp:TreeNode>
                                    <asp:TreeNode Text="es" NavigateUrl="~/WebForm5.aspx"></asp:TreeNode>
                                </asp:TreeNode>
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


WebForm2.aspx

<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="WebApplication5.WebForm2" %>
<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    ET
</asp:Content>


WebForm3.aspx

<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm3.aspx.cs" Inherits="WebApplication5.WebForm3" %>
<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    AWD
</asp:Content>

WebForm4.aspx

<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm4.aspx.cs" Inherits="WebApplication5.WebForm4" %>
<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    java
</asp:Content>


WebForm5.aspx

<%@ Page Title="" Language="C#" MasterPageFile="~/Site1.Master" AutoEventWireup="true" CodeBehind="WebForm5.aspx.cs" Inherits="WebApplication5.WebForm5" %>
<asp:Content ID="Content1" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    ES
</asp:Content>


web.sitemap

<?xml version="1.0" encoding="utf-8" ?>
<siteMap xmlns="http://schemas.microsoft.com/AspNet/SiteMap-File-1.0">
  <siteMapNode title="sem4">
    <siteMapNode url="WebForm4.aspx" title="java" />
    <siteMapNode url="WebForm5.aspx" title="es" />
  </siteMapNode>
</siteMap>
