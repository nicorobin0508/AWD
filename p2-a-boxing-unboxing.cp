using System;
class BoxingUnboxingExample
{

static void Main(string[] args)
{
int a = 10;
object boxedValue = a;
a = 30; // Changing the original value
Console.WriteLine(&quot;Updated variable value: &quot; + a);
Console.WriteLine(&quot;Boxed value (object): &quot; + boxedValue);
int unboxedValue = (int)boxedValue;
Console.WriteLine(&quot;Unboxed value: &quot; + unboxedValue);
}
}
