webform1.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication25.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:AdRotator ID="AdRotator1" runat="server" AdvertisementFile="~/adv.xml" Target="_blank"/> 
        </div>
    </form>
</body>
</html>


adv.xml
<?xml version="1.0" encoding="utf-8" ?>
<Advertisements> 
    <Ad>
        <ImageUrl>google.png</ImageUrl>
        <NavigateUrl>https://google.com</NavigateUrl>
        <AlternateText>google</AlternateText>
        <Keyword>google</Keyword>
        <Impressions>20</Impressions>
    </Ad>
    <Ad>
        <ImageUrl>gmail.png</ImageUrl>
        <NavigateUrl>https://gmail.com</NavigateUrl>
        <AlternateText>gmail</AlternateText>
        <Keyword>google</Keyword>
        <Impressions>10</Impressions>
    </Ad>
    <Ad>
        <ImageUrl>yahoo.png</ImageUrl>
        <NavigateUrl>https://yahoo.com</NavigateUrl>
        <AlternateText>yahoo</AlternateText>
        <Keyword>google</Keyword>
        <Impressions>30</Impressions>
    </Ad>
</Advertisements>
