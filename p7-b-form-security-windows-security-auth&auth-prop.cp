Webform3.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm3.aspx.cs" Inherits="WebApplication54.WebForm3" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Login</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            User ID: <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox><br />
            Password: <asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox><br />
            <asp:Button ID="Button1" runat="server" Text="Login" OnClick="Button1_Click" />
        </div>
    </form>
</body>
</html>

Webform4.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm4.aspx.cs" Inherits="WebApplication54.WebForm4" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Welcome</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            Welcome to the application!
        </div>
    </form>
</body>
</html>


Web.config
<?xml version="1.0" encoding="utf-8"?>
<configuration>
  <system.web>
      <authentication mode="Forms">
          <forms loginUrl="WebForm3.aspx" defaultUrl="WebForm4.aspx" timeout="20" protection="None">
              <credentials passwordFormat="Clear">
                  <user name="tyit" password="tyit"/>
              </credentials>
          </forms>
      </authentication>

      <authorization>
          <deny users="?"/>
      </authorization>
      
      <compilation debug="true" targetFramework="4.7.2" />
      <httpRuntime targetFramework="4.7.2" />
  </system.web>
</configuration>


	  
webform3.aspx.cs
using System;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Security;

namespace WebApplication54
{
    public partial class WebForm3 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (FormsAuthentication.Authenticate(TextBox1.Text, TextBox2.Text))
            {
                FormsAuthentication.RedirectFromLoginPage(TextBox1.Text, false);
            }
            else
            {
                Response.Write("Invalid credentials. Please try again.");
                TextBox1.Text = "";
                TextBox2.Text = "";
            }
        }
    }
}
