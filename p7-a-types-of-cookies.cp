Non Persistent cookies
webform1.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication54.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            name:<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            class:<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            <asp:Button ID="Button1" runat="server" Text="submit" OnClick="Button1_Click" />
        </div>
    </form>
</body>
</html>


Webform2.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="WebApplication54.WebForm2" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            name:<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
            class:<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
        </div>
    </form>
</body>
</html>


webform.1.aspx.cs
using System;
using System.Web;

public partial class WebForm1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
    }

    protected void Button1_Click(object sender, EventArgs e)
    {
        HttpCookie cookie = new HttpCookie("studinfo");
        cookie["name"] = TextBox1.Text;
        cookie["class"] = TextBox2.Text;
        cookie.Expires = DateTime.Now.AddDays(10);
        Response.Cookies.Add(cookie);
        Response.Redirect("WebForm2.aspx");
    }
}


webform.2.aspx.cs
 using System;
using System.Web;

public partial class WebForm2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        HttpCookie cookie = Request.Cookies["studinfo"];
        if (cookie != null)
        {
            Label1.Text = cookie["name"];
            Label2.Text = cookie["class"];
        }
    }
}







Persistant 
Webform1.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication54.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            name:<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            class:<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            <asp:Button ID="Button1" runat="server" Text="submit" OnClick="Button1_Click" />
        </div>
    </form>
</body>
</html>



Webform2.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="WebApplication54.WebForm2" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            name:<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
            class:<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
        </div>
    </form>
</body>
</html>

webform.1.aspx.cs
using System;
using System.Web;

namespace WebApplication54
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            HttpCookie cookie = new HttpCookie("studinfo");
            cookie["name"] = TextBox1.Text;
            cookie["class"] = TextBox2.Text;
            cookie.Expires = DateTime.Now.AddDays(10); // Cookie will persist for 10 days
            Response.Cookies.Add(cookie);
            Response.Redirect("WebForm2.aspx");
        }
    }
}

webform.2.aspx.cs
using System;
using System.Web;

namespace WebApplication54
{
    public partial class WebForm2 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            HttpCookie cookie = Request.Cookies["studinfo"];
            if (cookie != null)
            {
                Label1.Text = cookie["name"];
                Label2.Text = cookie["class"];
            }
        }
    }
}
