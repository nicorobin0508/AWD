using System;
interface InterfaceOne
{
void Display();
}
interface InterfaceTwo
{
void Display();
}
class Implementation : InterfaceOne, InterfaceTwo
{
void InterfaceOne.Display()
{
Console.WriteLine(&quot;InterfaceOne Display&quot;);
}
void InterfaceTwo.Display()
{
Console.WriteLine(&quot;InterfaceTwo Display&quot;);
}
}
class Test
{
public static void Main()
{
InterfaceOne obj1 = new Implementation();

InterfaceTwo obj2 = new Implementation();
obj1.Display();
obj2.Display();
}
}
