1)timer
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication14.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            outside:<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
            <asp:ScriptManager ID="ScriptManager1" runat="server"></asp:ScriptManager>
            <asp:UpdatePanel ID="UpdatePanel1" runat="server">
                <ContentTemplate>
                    <asp:Timer ID="Timer1" runat="server" Interval="4000" OnTick="Timer1_Tick"></asp:Timer>
                    inside:<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
                </ContentTemplate>
            </asp:UpdatePanel>
            <asp:UpdateProgress ID="UpdateProgress1" runat="server">
                <ProgressTemplate>
                    plsss......wait
                </ProgressTemplate>
            </asp:UpdateProgress>
        </div>
    </form>
</body>
</html>




2)accordion
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication14.WebForm1" %>
<%@ Register Assembly="AjaxControlToolkit" Namespace="AjaxControlToolkit" TagPrefix="ajaxToolkit" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            outside:<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
            <ajaxToolkit:Accordion ID="Accordion1" runat="server">
                <Panes>
                    <ajaxToolkit:AccordionPane ID="AccordionPane1" runat="server">
                        <Header>
                            sem5
                        </Header>
                        <Content>
                            awd
                            spd
                            iot
                            et
                            ai
                        </Content>
                    </ajaxToolkit:AccordionPane>
                    <ajaxToolkit:AccordionPane ID="AccordionPane2" runat="server">
                        <Header>
                            sem6
                        </Header>
                        <Content>
                            bi
                            gis
                            sqa
                            cl
                        </Content>
                    </ajaxToolkit:AccordionPane>
                </Panes>
            </ajaxToolkit:Accordion>
            <asp:ScriptManager ID="ScriptManager1" runat="server"></asp:ScriptManager>
            <asp:UpdatePanel ID="UpdatePanel1" runat="server">
                <ContentTemplate>
                    <asp:Timer ID="Timer1" runat="server" Interval="4000" OnTick="Timer1_Tick"></asp:Timer>
                    inside:<asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
                </ContentTemplate>
            </asp:UpdatePanel>
            <asp:UpdateProgress ID="UpdateProgress1" runat="server">
                <ProgressTemplate>
                    plsss......wait
                </ProgressTemplate>
            </asp:UpdateProgress>
        </div>
    </form>
</body>
</html>



webform1.cs

using System;
using System.Web.UI;

namespace WebApplication14
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Label1.Text = DateTime.Now.ToLongTimeString();
        }

        protected void Timer1_Tick(object sender, EventArgs e)
        {
            System.Threading.Thread.Sleep(2000);
            Label2.Text = DateTime.Now.ToLongTimeString();
        }
    }
}




3)AUTOCONTROL
WEBFORM1.ASPX
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="WebApplication40.WebForm1" %>
<%@ Register assembly="AjaxControlToolkit" namespace="AjaxControlToolkit" tagprefix="ajaxToolkit" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:ScriptManager ID="ScriptManager1" runat="server"></asp:ScriptManager>
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            <ajaxToolkit:AutoCompleteExtender ID="TextBox1_AutoCompleteExtender" runat="server" MinimumPrefixLength="1" BehaviorID="TextBox1_AutoCompleteExtender" DelimiterCharacters="" ServicePath="" ServiceMethod="getinfo" TargetControlID="TextBox1">
            </ajaxToolkit:AutoCompleteExtender>
        </div>
    </form>
</body>
</html>



WEBFORM1.CS
using System;
using System.Linq;
using System.Web.UI;

namespace WebApplication40
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }
        [System.Web.Script.Services.ScriptMethod()]
        [System.Web.Services.WebMethod()]
        public static string[] getinfo(string prefixText)
        {
            string[] s1 = { "ant", "apple", "bat", "ball", "cat", "cup", "can" };
            var a = from t in s1 where t.ToLower().StartsWith(prefixText) select t;
            return a.ToArray();
        }
    }
}
