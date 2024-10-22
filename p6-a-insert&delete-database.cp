&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication37.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;

&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:DetailsView ID=&quot;DetailsView1&quot; runat=&quot;server&quot; Height=&quot;50px&quot; Width=&quot;125px&quot;
AllowPaging=&quot;True&quot; AutoGenerateRows=&quot;False&quot; DataKeyNames=&quot;Id&quot;
DataSourceID=&quot;SqlDataSource1&quot;&gt;
&lt;Fields&gt;
&lt;asp:BoundField DataField=&quot;Id&quot; HeaderText=&quot;Id&quot; ReadOnly=&quot;True&quot;
SortExpression=&quot;Id&quot; /&gt;
&lt;asp:BoundField DataField=&quot;ename&quot; HeaderText=&quot;ename&quot;
SortExpression=&quot;ename&quot; /&gt;
&lt;asp:BoundField DataField=&quot;project&quot; HeaderText=&quot;project&quot;
SortExpression=&quot;project&quot; /&gt;
&lt;asp:BoundField DataField=&quot;sal&quot; HeaderText=&quot;sal&quot; SortExpression=&quot;sal&quot; /&gt;
&lt;asp:BoundField DataField=&quot;address&quot; HeaderText=&quot;address&quot;
SortExpression=&quot;address&quot; /&gt;
&lt;asp:CommandField ShowDeleteButton=&quot;True&quot; ShowEditButton=&quot;True&quot;
ShowInsertButton=&quot;True&quot; /&gt;
&lt;/Fields&gt;
&lt;/asp:DetailsView&gt;
&lt;asp:SqlDataSource ID=&quot;SqlDataSource1&quot; runat=&quot;server&quot; ConnectionString=&quot;Data
Source=SQL;Initial Catalog=tyit2425;User ID=user1;Password=user1&quot;
DeleteCommand=&quot;DELETE FROM [employee] WHERE [Id] = @Id&quot;
InsertCommand=&quot;INSERT INTO [employee] ([Id], [ename], [project], [sal], [address])
VALUES (@Id, @ename, @project, @sal, @address)&quot; ProviderName=&quot;&lt;%$
ConnectionStrings:tyit2425ConnectionString2.ProviderName %&gt;&quot;
SelectCommand=&quot;SELECT * FROM [employee]&quot; UpdateCommand=&quot;UPDATE [employee]
SET [ename] = @ename, [project] = @project, [sal] = @sal, [address] = @address WHERE
[Id] = @Id&quot;&gt;
&lt;DeleteParameters&gt;
&lt;asp:Parameter Name=&quot;Id&quot; Type=&quot;Int32&quot; /&gt;
&lt;/DeleteParameters&gt;
&lt;InsertParameters&gt;
&lt;asp:Parameter Name=&quot;Id&quot; Type=&quot;Int32&quot; /&gt;
&lt;asp:Parameter Name=&quot;ename&quot; Type=&quot;String&quot; /&gt;
&lt;asp:Parameter Name=&quot;project&quot; Type=&quot;String&quot; /&gt;
&lt;asp:Parameter Name=&quot;sal&quot; Type=&quot;String&quot; /&gt;
&lt;asp:Parameter Name=&quot;address&quot; Type=&quot;String&quot; /&gt;
&lt;/InsertParameters&gt;
&lt;UpdateParameters&gt;
&lt;asp:Parameter Name=&quot;ename&quot; Type=&quot;String&quot; /&gt;
&lt;asp:Parameter Name=&quot;project&quot; Type=&quot;String&quot; /&gt;
&lt;asp:Parameter Name=&quot;sal&quot; Type=&quot;String&quot; /&gt;

&lt;asp:Parameter Name=&quot;address&quot; Type=&quot;String&quot; /&gt;
&lt;asp:Parameter Name=&quot;Id&quot; Type=&quot;Int32&quot; /&gt;
&lt;/UpdateParameters&gt;
&lt;/asp:SqlDataSource&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;
