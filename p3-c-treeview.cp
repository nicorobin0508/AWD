Master page
&lt;%@ Master Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;Site1.master.cs&quot;
Inherits=&quot;WebApplication49.Site1&quot; %&gt;
&lt;!DOCTYPE html&gt;

&lt;html&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;asp:ContentPlaceHolder ID=&quot;head&quot; runat=&quot;server&quot;&gt;
&lt;/asp:ContentPlaceHolder&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:Table ID=&quot;Table1&quot; runat=&quot;server&quot;&gt;
&lt;asp:TableRow&gt;
&lt;asp:TableCell&gt;
&lt;asp:TreeView ID=&quot;TreeView1&quot; runat=&quot;server&quot;&gt;
&lt;Nodes&gt;
&lt;asp:TreeNode Text=&quot;awp&quot;
NavigateUrl=&quot;~/WebForm2.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;asp:TreeNode Text=&quot;spm&quot;
NavigateUrl=&quot;~/WebForm3.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;asp:TreeNode Text=&quot;et&quot;
NavigateUrl=&quot;~/WebForm4.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;/Nodes&gt;
&lt;/asp:TreeView&gt;
&lt;/asp:TableCell&gt;
&lt;/asp:TableRow&gt;
&lt;/asp:Table&gt;
&lt;asp:ContentPlaceHolder ID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
&lt;/asp:ContentPlaceHolder&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;



Content page
&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication49.WebForm2&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;head&quot; runat=&quot;server&quot;&gt;
AWP
&lt;/asp:Content&gt;
&lt;asp:Content ID=&quot;Content2&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
C#,.NET FRAMEWORK
&lt;/asp:Content&gt;



Content page

&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm3.aspx.cs&quot;
Inherits=&quot;WebApplication49.WebForm3&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;head&quot; runat=&quot;server&quot;&gt;
SPD
&lt;/asp:Content&gt;
&lt;asp:Content ID=&quot;Content2&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
PROJECT MANAGMENT
&lt;/asp:Content&gt;



Content page
&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm4.aspx.cs&quot;
Inherits=&quot;WebApplication49.WebForm4&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;head&quot; runat=&quot;server&quot;&gt;
ET
&lt;/asp:Content&gt;
&lt;asp:Content ID=&quot;Content2&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
NEW GENERATION TECHNOLOGY
&lt;/asp:Content&gt;
