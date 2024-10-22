JsonDemo.aspx

<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="JsonDemo.aspx.cs" Inherits="JsonDemoApp.JsonDemo" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>JSON Demo with Newtonsoft.Json</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <h2>JSON Demo</h2>
            <asp:Button ID="btnSerialize" runat="server" Text="Serialize Object" OnClick="btnSerialize_Click" />
            <asp:Label ID="lblResult" runat="server" Text="Result will be displayed here." />
        </div>
    </form>
</body>
</html>


JsonDemo.aspx.cs

using Newtonsoft.Json;
using System;
using System.Web.UI;

namespace JsonDemoApp
{
    public partial class JsonDemo : Page
    {
        protected void btnSerialize_Click(object sender, EventArgs e)
        {
            // Create a sample object
            var person = new Person
            {
                Name = "sanjay",
                Age = 20,
                Email = "sanjay@example.com"
            };

            // Serialize the object to JSON
            string jsonResult = JsonConvert.SerializeObject(person);
            
            // Display the result in the label
            lblResult.Text = jsonResult;
        }
    }

    // Sample class to demonstrate serialization
    public class Person
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public string Email { get; set; }
    }
}
