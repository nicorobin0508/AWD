webform1.aspx
&lt;%@ Page Language=&quot;C#&quot; AutoEventWireup=&quot;true&quot; CodeBehind=&quot;WebForm1.aspx.cs&quot;
Inherits=&quot;CustomApp.WebPage1&quot; %&gt;
&lt;!DOCTYPE html&gt;

&lt;html xmlns=&quot;http://www.w3.org/1999/xhtml&quot;&gt;
&lt;head runat=&quot;server&quot;&gt;
&lt;title&gt;Custom Calendar Page&lt;/title&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;form id=&quot;customForm&quot; runat=&quot;server&quot;&gt;
&lt;div&gt;
&lt;asp:Calendar ID=&quot;CustomCalendar&quot; runat=&quot;server&quot;
OnDayRender=&quot;CustomCalendar_DayRender&quot;
OnSelectionChanged=&quot;CustomCalendar_SelectionChanged&quot;&gt;&lt;/asp:Calendar&gt;
&lt;asp:Label ID=&quot;DaysRemainingLabel&quot; runat=&quot;server&quot; Text=&quot;Days remaining will
appear here&quot;&gt;&lt;/asp:Label&gt;
&lt;/div&gt;
&lt;/form&gt;
&lt;/body&gt;
&lt;/html&gt;


webform1.cs
using System;
using System.Web.UI;
using System.Web.UI.WebControls;
namespace CustomApp
{
public partial class WebPage1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void CustomCalendar_DayRender(object sender, DayRenderEventArgs e)
{
if (e.Day.Date.Day == 15 &amp;&amp; e.Day.Date.Month == 8)
{
Label independenceDayLabel = new Label();
independenceDayLabel.Text = &quot;Independence Day&quot;;
e.Cell.Controls.Add(independenceDayLabel);
}

DateTime startDate = new DateTime(2024, 09, 07);
DateTime endDate = startDate.AddDays(5);
CustomCalendar.SelectedDates.SelectRange(startDate, endDate);

TimeSpan remainingDays = new DateTime(2024, 08, 07) - DateTime.Now;
DaysRemainingLabel.Text = &quot;Number of days remaining until August 7, 2024: &quot; +
remainingDays.Days.ToString();
}
protected void CustomCalendar_SelectionChanged(object sender, EventArgs e)
}
}
