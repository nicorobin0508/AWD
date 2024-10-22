Site1.master
&lt;%@ Master Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;Site1.master.cs&quot;
Inherits=&quot;WebApplication5.Site1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:Menu ID=&quot;Menu1&quot; runat=&quot;server&quot;&gt;
&lt;Items&gt;
&lt;asp:MenuItem Text=&quot;TYIT&quot;&gt;
&lt;asp:MenuItem Text=&quot;sem 5&quot;&gt;
&lt;asp:MenuItem Text=&quot;ET&quot;
NavigateUrl=&quot;~/WebForm2.aspx&quot;&gt;&lt;/asp:MenuItem&gt;
&lt;asp:MenuItem Text=&quot;AWD&quot;
NavigateUrl=&quot;~/WebForm3.aspx&quot;&gt;&lt;/asp:MenuItem&gt;
&lt;/asp:MenuItem&gt;
&lt;/asp:MenuItem&gt;
&lt;/Items&gt;
&lt;/asp:Menu&gt;
&lt;asp:Table ID=&quot;Table1&quot; runat=&quot;server&quot;&gt;
&lt;asp:TableRow&gt;
&lt;asp:TableCell&gt;
&lt;asp:SiteMapPath ID=&quot;SiteMapPath1&quot; runat=&quot;server&quot; PathSeparator=&quot;#&quot;
CurrentNodeStyle-BackColor=&quot;Yellow&quot;&gt;&lt;/asp:SiteMapPath&gt;
&lt;asp:TreeView ID=&quot;TreeView1&quot; runat=&quot;server&quot;&gt;
&lt;Nodes&gt;
&lt;asp:TreeNode Text=&quot;sem4&quot;&gt;
&lt;asp:TreeNode Text=&quot;java&quot;
NavigateUrl=&quot;~/WebForm4.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;asp:TreeNode Text=&quot;es&quot;
NavigateUrl=&quot;~/WebForm5.aspx&quot;&gt;&lt;/asp:TreeNode&gt;
&lt;/asp:TreeNode&gt;
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


WebForm2.aspx
&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm2.aspx.cs&quot;
Inherits=&quot;WebApplication5.WebForm2&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
ET
&lt;/asp:Content&gt;


WebForm3.aspx
&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm3.aspx.cs&quot;
Inherits=&quot;WebApplication5.WebForm3&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
AWD
&lt;/asp:Content&gt;


WebForm4.aspx
&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm4.aspx.cs&quot;
Inherits=&quot;WebApplication5.WebForm4&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
java
&lt;/asp:Content&gt;


WebForm5.aspx
&lt;%@ Page Title=&quot;&quot; Language=&quot;C#&quot; MasterPageFile=&quot;~/Site1.Master&quot;
AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm5.aspx.cs&quot;
Inherits=&quot;WebApplication5.WebForm5&quot; %&gt;
&lt;asp:Content ID=&quot;Content1&quot; ContentPlaceHolderID=&quot;ContentPlaceHolder1&quot; runat=&quot;server&quot;&gt;
ES
&lt;/asp:Content&gt;


web.sitemap

&lt;?xml version=&quot;1.0&quot; encoding=&quot;utf-8&quot; ?&gt;
&lt;siteMap xmlns=&quot;http://schemas.microsoft.com/AspNet/SiteMap-File-1.0&quot;&gt;
&lt;siteMapNode title=&quot;sem4&quot;&gt;
&lt;siteMapNode url=&quot;WebForm4.aspx&quot; title=&quot;java&quot; /&gt;
&lt;siteMapNode url=&quot;WebForm5.aspx&quot; title=&quot;es&quot; /&gt;
&lt;/siteMapNode&gt;
&lt;/siteMap&gt;
