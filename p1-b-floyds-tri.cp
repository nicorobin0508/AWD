using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
    int x=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
             Console.Write (x+" ");
             x++;
        }
         Console.WriteLine();
    }
    
    }
}
