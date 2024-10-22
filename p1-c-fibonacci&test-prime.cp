using System;
public class A
{
public static void Main(string[] args)
{
int n1,n2,n3;
n1=0;
n2=1;
Console.WriteLine(n1);
Console.WriteLine(n2);
for(int i=2;i&lt;10;i++)
{
n3=n1+n2;
n1=n2;
n2=n3;
Console.WriteLine(n3);
}
}
}

# test-prime number

using System;
class PrimeChecker
{
static void Main(string[] args)
{
Console.WriteLine(&quot;Please enter a number:&quot;);
int number = Convert.ToInt32(Console.ReadLine());
bool isPrime = true;
for (int divisor = 2; divisor &lt;= number / 2; divisor++)
{
if (number % divisor == 0)
{
isPrime = false;
break;
}
}
if (isPrime &amp;&amp; number &gt; 1)
Console.WriteLine(&quot;The number is prime.&quot;);
else
Console.WriteLine(&quot;The number is not prime.&quot;);
}
}
