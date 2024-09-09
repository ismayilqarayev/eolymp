using System;
using System.Collections.Generic;

class Program
{
    // Qlobal siyahılar
    static List<string> vec1 = new List<string>();
    static List<string> vec2 = new List<string>();

    static void Main(string[] args)
    {
        // fun1 funksiyasını çağırır və vec1, vec2 siyahılarını ötürür
        Fun1(vec1, vec2);

        // fun2 funksiyasını çağırır və vec1, vec2 siyahılarını ötürür
        Fun2(vec1, vec2);

        // fun3 funksiyasını açır və vec1, vec2 siyahılarını ötürür
        Fun3(vec1, vec2);
    }


    static void Fun1(List<string> v1, List<string> v2)
    {
        // Vektor v1 üçün mətn daxil etmək
        Console.Write("Enter text v1: ");
        string addTextVector = Console.ReadLine();

        // Daxil edilən mətnin hər bir simvolu üçün v1 siyahısına mətn əlavə etmək
        for (int i = 0; i < addTextVector.Length; i++)
        {
            Console.Write("Enter char for v1: ");
            string c = Console.ReadLine();
            v1.Add(c);
        }
    }


    static void Fun2(List<string> v1, List<string> v2)
    {
        // Vektor v2 üçün mətn daxil etmək
        Console.Write("Enter text v2: ");
        string addTextVector = Console.ReadLine();

        // Daxil edilən mətnin hər bir simvolu üçün v2 siyahısına mətn əlavə etmək
        for (int i = 0; i < addTextVector.Length; i++)
        {
            Console.Write("Enter char for v2: ");
            string c = Console.ReadLine();
            v2.Add(c);
        }
    }

    static void Fun3(List<string> v1, List<string> v2)
    {
        var get = v1.Exists(v1 => v1.Length == 3);

        foreach (var item in v1)
        {
            Console.WriteLine(item);
        }
    }
}