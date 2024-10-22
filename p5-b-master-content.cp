Master page
&lt;%@ Master Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;Site1.master.cs&quot;
Inherits=&quot;WebApplication8.Site1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;TYIT Master Page&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:Table ID=&quot;Table1&quot; runat=&quot;server&quot; GridLines=&quot;Both&quot; Height=&quot;452px&quot;
Width=&quot;1129px&quot;&gt;
&lt;asp:TableRow&gt;
&lt;asp:TableCell ColumnSpan=&quot;2&quot; Style=&quot;text-align:center;&quot;&gt;TYIT
Master&lt;/asp:TableCell&gt;
&lt;/asp:TableRow&gt;
&lt;asp:TableRow&gt;
&lt;asp:TableCell&gt;
&lt;asp:TreeView ID=&quot;TreeView1&quot; runat=&quot;server&quot;&gt;
&lt;Nodes&gt;
&lt;asp:TreeNode Text=&quot;SEM5&quot;&gt;

&lt;asp:TreeNode Text=&quot;Awp&quot;
NavigateUrl=&quot;~/WebForm7.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;/asp:TreeNode&gt;
&lt;asp:TreeNode Text=&quot;SEM6&quot;&gt;
&lt;asp:TreeNode Text=&quot;et&quot;
NavigateUrl=&quot;~/WebForm8.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;/asp:TreeNode&gt;
&lt;/Nodes&gt;
&lt;/asp:TreeView&gt;
&lt;asp:Menu ID=&quot;Menu1&quot; runat=&quot;server&quot;&gt;
&lt;Items&gt;
&lt;asp:MenuItem Text=&quot;sem5&quot;&gt;
&lt;asp:MenuItem Text=&quot;awp&quot;
NavigateUrl=&quot;~/WebForm7.aspx&quot;&gt;&lt;/asp:MenuItem&gt;
&lt;/asp:MenuItem&gt;
&lt;asp:MenuItem Text=&quot;sem6&quot;&gt;
&lt;asp:MenuItem Text=&quot;et&quot;
NavigateUrl=&quot;~/WebForm8.aspx&quot;&gt;&lt;/asp:MenuItem&gt;
&lt;/asp:MenuItem&gt;
&lt;/Items&gt;
&lt;/asp:Menu&gt;
&lt;/asp:TableCell&gt;
&lt;asp:TableCell&gt;
&lt;asp:ContentPlaceHolder ID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
&lt;/asp:ContentPlaceHolder&gt;
&lt;/asp:TableCell&gt;
&lt;/asp:TableRow&gt;
&lt;asp:TableRow&gt;
&lt;asp:TableCell ColumnSpan=&quot;2&quot; Style=&quot;text-align:center;&quot;&gt;&amp;copy;
Copyright&lt;/asp:TableCell&gt;
&lt;/asp:TableRow&gt;
&lt;/asp:Table&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;
Content page
&lt;%@ Page Title=&quot;AWP Page&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm7.aspx.cs&quot;
Inherits=&quot;WebApplication8.WebForm7&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
&lt;h2&gt;Awp&lt;/h2&gt;
&lt;/asp:Content&gt;



Content page
&lt;%@ Page Title=&quot;ET Page&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm8.aspx.cs&quot;
Inherits=&quot;WebApplication8.WebForm8&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
&lt;h2&gt;ET&lt;/h2&gt;
&lt;/asp:Content&gt;
