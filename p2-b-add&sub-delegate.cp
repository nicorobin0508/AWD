public class Calculator
{
    public delegate void MathOperation(int x, int y);
    
    public static void Main(string[] args)
    {
        Console.Write("Input the first value: ");
        int value1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input the second value: ");
        int value2 = Convert.ToInt32(Console.ReadLine());

        MathOperation addition = PerformAddition;
        MathOperation subtraction = PerformSubtraction;
        addition(value1, value2);
        subtraction(value1, value2);
    }
    
    public static void PerformAddition(int x, int y)
    {
        Console.WriteLine("Sum: " + (x + y));
    }

    public static void PerformSubtraction(int x, int y)
    {
        Console.WriteLine("Difference: " + (x - y));
    }
}
