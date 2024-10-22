<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication37.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:DetailsView ID="DetailsView1" runat="server" Height="50px" Width="125px" AllowPaging="True" AutoGenerateRows="False" DataKeyNames="Id" DataSourceID="SqlDataSource1">
                <Fields>
                    <asp:BoundField DataField="Id" HeaderText="Id" ReadOnly="True" SortExpression="Id" />
                    <asp:BoundField DataField="ename" HeaderText="ename" SortExpression="ename" />
                    <asp:BoundField DataField="project" HeaderText="project" SortExpression="project" />
                    <asp:BoundField DataField="sal" HeaderText="sal" SortExpression="sal" />
                    <asp:BoundField DataField="address" HeaderText="address" SortExpression="address" />
                    <asp:CommandField ShowDeleteButton="True" ShowEditButton="True" ShowInsertButton="True" />
                </Fields>
            </asp:DetailsView>
            <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="Data Source=SQL;Initial Catalog=tyit2425;User ID=user1;Password=user1" DeleteCommand="DELETE FROM [employee] WHERE [Id] = @Id" InsertCommand="INSERT INTO [employee] ([Id], [ename], [project], [sal], [address]) VALUES (@Id, @ename, @project, @sal, @address)" ProviderName="<%$ ConnectionStrings:tyit2425ConnectionString2.ProviderName %>" SelectCommand="SELECT * FROM [employee]" UpdateCommand="UPDATE [employee] SET [ename] = @ename, [project] = @project, [sal] = @sal, [address] = @address WHERE [Id] = @Id">
                <DeleteParameters>
                    <asp:Parameter Name="Id" Type="Int32" />
                </DeleteParameters>
                <InsertParameters>
                    <asp:Parameter Name="Id" Type="Int32" />
                    <asp:Parameter Name="ename" Type="String" />
                    <asp:Parameter Name="project" Type="String" />
                    <asp:Parameter Name="sal" Type="String" />
                    <asp:Parameter Name="address" Type="String" />
                </InsertParameters>
                <UpdateParameters>
                    <asp:Parameter Name="ename" Type="String" />
                    <asp:Parameter Name="project" Type="String" />
                    <asp:Parameter Name="sal" Type="String" />
                    <asp:Parameter Name="address" Type="String" />
                    <asp:Parameter Name="Id" Type="Int32" />
                </UpdateParameters>
            </asp:SqlDataSource>
        </div>
    </form>
</body>
</html>
