Webform1.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication10.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Student Information</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            ID: <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox><br />
            Name: <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox><br />
            Class: <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox><br />
            <asp:Button ID="Button1" runat="server" Text="Insert" OnClick="Button1_Click" />
            <asp:Button ID="Button2" runat="server" Text="Delete" OnClick="Button2_Click" />
        </div>
    </form>
</body>
</html>

webform1.cs
using System;
using System.Data.SqlClient;
using System.Web.UI;

namespace WebApplication10
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            // No specific action needed on page load for this form.
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            // Insert record into the database
            using (SqlConnection con = new SqlConnection("Data Source=SQL;Initial Catalog=Muskan;User ID=user1;Password=user1"))
            {
                SqlCommand cmd = new SqlCommand("INSERT INTO studinfo (Id, Name, Class) VALUES (@Id, @Name, @Class)", con);
                cmd.Parameters.AddWithValue("@Id", TextBox1.Text);
                cmd.Parameters.AddWithValue("@Name", TextBox2.Text);
                cmd.Parameters.AddWithValue("@Class", TextBox3.Text);
                
                con.Open();
                int rowsAffected = cmd.ExecuteNonQuery();
                con.Close();

                if (rowsAffected > 0)
                {
                    Response.Write("Data inserted successfully.");
                }
                else
                {
                    Response.Write("Failed to insert data.");
                }
            }
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            // Delete record from the database
            using (SqlConnection con = new SqlConnection("Data Source=SQL;Initial Catalog=Muskan;User ID=user1;Password=user1"))
            {
                SqlCommand cmd = new SqlCommand("DELETE FROM studinfo WHERE Id=@Id", con);
                cmd.Parameters.AddWithValue("@Id", TextBox1.Text);

                con.Open();
                int rowsAffected = cmd.ExecuteNonQuery();
                con.Close();

                if (rowsAffected > 0)
                {
                    Response.Write("Data deleted successfully.");
                }
                else
                {
                    Response.Write("No record found with the specified ID.");
                }
            }
        }
    }
}
