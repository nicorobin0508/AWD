sample prompt:
tell me step by step on how to "create a web form to demonstrate wesite navigating control", in visual studio 2022. tell me everything from step by step from start
here's the code:
_____________________________________________________________________________________________________________________________________________

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
