webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;WebApplication25.WebForm1&quot; %&gt;
&lt;!DOCTYPE html&gt;
&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;form1&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:AdRotator ID=&quot;AdRotator1&quot; runat=&quot;server&quot; AdvertisementFile=&quot;~/adv.xml&quot;
Target=&quot;_blank&quot;/&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


adv.xml
&lt;?xml version=&quot;1.0&quot; encoding=&quot;utf-8&quot; ?&gt;
&lt;Advertisements&gt;
&lt;Ad&gt;
&lt;ImageUrl&gt;google.png&lt;/ImageUrl&gt;

&lt;NavigateUrl&gt;https://google.com&lt;/NavigateUrl&gt;
&lt;AlternateText&gt;google&lt;/AlternateText&gt;
&lt;Keyword&gt;google&lt;/Keyword&gt;
&lt;Impressions&gt;20&lt;/Impressions&gt;
&lt;/Ad&gt;
&lt;Ad&gt;
&lt;ImageUrl&gt;gmail.png&lt;/ImageUrl&gt;
&lt;NavigateUrl&gt;https://gmail.com&lt;/NavigateUrl&gt;
&lt;AlternateText&gt;gmail&lt;/AlternateText&gt;
&lt;Keyword&gt;google&lt;/Keyword&gt;
&lt;Impressions&gt;10&lt;/Impressions&gt;
&lt;/Ad&gt;
&lt;Ad&gt;
&lt;ImageUrl&gt;yahoo.png&lt;/ImageUrl&gt;
&lt;NavigateUrl&gt;https://yahoo.com&lt;/NavigateUrl&gt;
&lt;AlternateText&gt;yahoo&lt;/AlternateText&gt;
&lt;Keyword&gt;google&lt;/Keyword&gt;
&lt;Impressions&gt;30&lt;/Impressions&gt;
&lt;/Ad&gt;
&lt;/Advertisements&gt;
