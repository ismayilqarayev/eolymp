
using System;
using System.Collections.Generic;

class Program
{
    static void Fun1()
    {
        List<int> num3 = new List<int> { 1, 2, 3, 4 };
        num3.Insert(4, 5);

        foreach (var run in num3)
        {
            Console.Write(run + " ");
        }
        Console.WriteLine();
    }

    static void Fun2()
    {
        List<int> num4 = new List<int> { 1, 2, 4, 5, 6, 7 };
        num4.InsertRange(2, new int[] { 3, 3 });

        foreach (var run in num4)
        {
            Console.Write(run + " ");
        }
        Console.WriteLine();
    }

    static void Fun3()
    {
        List<int> num5 = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        List<int> num6 = new List<int> { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

        num5.InsertRange(1, num6.GetRange(0, 3));

        foreach (var run in num5)
        {
            Console.Write(run + " ");
        }
        Console.WriteLine();
    }

    static void Fun4()
    {
        List<int> num7 = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8 };
        num7.Insert(num7.Count, 21);

        foreach (var asNum in num7)
        {
            Console.Write(asNum + " ");
        }
        Console.WriteLine();
    }

    static void Main()
    {
        Fun1();
        Fun2();
        Fun3();
        Fun4();
    }
}
