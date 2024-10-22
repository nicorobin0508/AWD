<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication13.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Age Validation</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            Enter Age: <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            <asp:Button ID="Button1" runat="server" Text="Validate" OnClick="Button1_Click" />
        </div>
    </form>
</body>
</html>



using System;
using System.Web.UI;

namespace WebApplication13
{
    class AgeException : Exception
    {
        public AgeException(string message) : base(message) { }
    }

    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e) { }

        protected void Button1_Click(object sender, EventArgs e)
        {
            int age = Convert.ToInt32(TextBox1.Text);
            try
            {
                if (age > 80)
                {
                    throw new AgeException("Invalid age");
                }
                Response.Write("Age is valid.");
            }
            catch (AgeException ex)
            {
                Response.Write(ex.Message);
            }
            finally
            {
                Response.Write("<br> Finally block executed.");
            }
        }
    }
}
