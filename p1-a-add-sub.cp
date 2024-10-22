using System;
public class practical1A
{
public static void Main(string[] args)
{
Console.Write(&quot;Enter the first number: &quot;);
double num1 = Convert.ToDouble(Console.ReadLine());
Console.Write(&quot;Enter the second number: &quot;);
double num2 = Convert.ToDouble(Console.ReadLine());
Console.WriteLine(&quot;\nResults:&quot;);
Console.WriteLine($&quot;{num1} + {num2} = {num1+num2}&quot;);
Console.WriteLine($&quot;{num1} - {num2} = {num1-num2}&quot;);
Console.WriteLine($&quot;{num1} * {num2} = {num1*num2}&quot;);
Console.WriteLine($&quot;{num1} / {num2} = {num1/num2}&quot;);
}
}
