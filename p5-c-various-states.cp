webform1.apsx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication50.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>ViewState Example</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            <asp:Button ID="Button1" runat="server" Text="Increment" OnClick="Button1_Click" />
        </div>
    </form>
</body>
</html>

webform1.cs
namespace WebApplication50
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        int x = 1;

        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                TextBox1.Text = "0"; 
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (ViewState["a"] != null)
            {
                x = Convert.ToInt32(ViewState["a"]) + 1; 
            }
            TextBox1.Text = x.ToString();
            ViewState["a"] = x;         }
    }
}

1)viewstate session



2)Session
namespace WebApplication50
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        int x = 1;

        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                TextBox1.Text = "0";             }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (Session["a"] != null)
            {
                x = Convert.ToInt32(Session["a"]) + 1;
            }
            TextBox1.Text = x.ToString();
            Session["a"] = x;
        }
    }
}



3)Application
namespace WebApplication50
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        int x = 1;

        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                TextBox1.Text = "0"; // Initialize TextBox on first load
            }
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (Application["a"] != null)
            {
                x = Convert.ToInt32(Application["a"]) + 1; // Increment the value from Application
            }
            TextBox1.Text = x.ToString();
            Application["a"] = x; // Store updated value in Application
        }
    }
}
