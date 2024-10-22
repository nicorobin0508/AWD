
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
