using System;
public class practical1A
{
    public static void Main(string[] args)
    {
        Console.Write("Enter the first number: ");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter the second number: ");
        double num2 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("\nResults:");
        Console.WriteLine($"{num1} + {num2} = {num1+num2}");
        Console.WriteLine($"{num1} - {num2} = {num1-num2}");
        Console.WriteLine($"{num1} * {num2} = {num1*num2}");
        Console.WriteLine($"{num1} / {num2} = {num1/num2}");
    }
}
