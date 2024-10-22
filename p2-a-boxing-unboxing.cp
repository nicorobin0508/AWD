using System;

class BoxingUnboxingExample
{
    static void Main(string[] args)
    {
        int a = 10;
        object boxedValue = a;  
        a = 30;  // Changing the original value

        Console.WriteLine("Updated variable value: " + a);
        Console.WriteLine("Boxed value (object): " + boxedValue);

        int unboxedValue = (int)boxedValue; 
        Console.WriteLine("Unboxed value: " + unboxedValue);
    }
}
