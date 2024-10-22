
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
     
     for(int i=2;i<10;i++)
     {
         n3=n1+n2;
         n1=n2;
         n2=n3;
         Console.WriteLine(n3);
     }
    }
}


ii. Test for prime numbers. 
using System;

class PrimeChecker
{
    static void Main(string[] args)
    {
        Console.WriteLine("Please enter a number:");
        int number = Convert.ToInt32(Console.ReadLine());
        bool isPrime = true;

        for (int divisor = 2; divisor <= number / 2; divisor++)
        {
            if (number % divisor == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime && number > 1)
            Console.WriteLine("The number is prime.");
        else
            Console.WriteLine("The number is not prime.");
    }
}

