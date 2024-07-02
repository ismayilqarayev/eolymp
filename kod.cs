
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


//---------------------------------------------------------------


using System;
using System.Collections.Generic;


class Program
{
    static long Fun1(long x, long y)
    {
        List<int> num1 = new List<int> { 1, 2, 3, 4 };
        num1.Insert(0, 1);
        return 0;
    }


    static void Fun2()
    {
        List<int> num2 = new List<int> { 1, 2, 3, 4, 5 };
        List<int> num3 = new List<int> { 10, 20, 30, 40, 50, 60, 70 };

        num2.InsertRange(1, num3.GetRange(0, 3));

        foreach (int num4 in num2)
        {
            Console.WriteLine(num4);
        }
    }



    static void Fun3()
    {
        Console.Write("input name");
        int number = Convert.ToInt32(Console.ReadLine());
    }



    static void Main(string[] args)
    {
        long x = 0;
        long y = 0;

        long z = Fun1(x, y);

        Fun2();
        Fun3();
    }
}
