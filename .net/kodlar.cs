

using System;

class Program
{
    static void Main(string[] args)
    {
        int number_1 = 0;
        int number_2 = 0;
        int result;

       

        // Dəyərləri dəyişmədən ötürmək üçün `in` istifadə olunur.
        fun1(number_1, number_2);
        fun2(in number_1, in number_2, out result);
    }

    // Funksiya sadəcə dəyərləri oxuyur və dəyişdirmir.
    public static void fun1(int num_1, int num_2)
    {
        // number_1 və number_2 dəyərlərini təyin etmək üçün Main funksiyasında oxuyuruq.
        Console.WriteLine("Enter first number: ");
        num_1 = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter second number: ");
        num_2 = int.Parse(Console.ReadLine());
    }

    // Funksiya toplanma əməliyyatı aparır.
    public static void fun2(in int x , in int y, out int result)
    {
        result = (x + y) * 2;
        Console.WriteLine("The result is: " + result);
    }
}


//--------------------------------------------------
using System;

class Program
{
    static void Main(string[] args)
    {
        int number_1 = 0, number_2 = 0;
        int number_5 = 0, number_6 = 0;
        int result_1, result_2;
        

        fun1(ref number_1, ref number_2);   // Get input and display
        fun2(ref number_1, ref number_2);   // Increment and display
        
        MyClass myClass = new MyClass();
        myClass.fun3(number_5, number_6, out result_1, out result_2);
        //myClass.fun4();

        // Print the final modified values
        Console.WriteLine("Final number_1: " + number_1);
        Console.WriteLine("Final number_2: " + number_2); 
    }

    // Function to get inputs for two numbers
    static void fun1(ref int num_1, ref int num_2)
    {
        Console.WriteLine("Enter number 1: ");
        num_1 = int.Parse(Console.ReadLine());
        Console.WriteLine("You entered: " + num_1);

        Console.WriteLine("Enter number 2: ");
        num_2 = int.Parse(Console.ReadLine());
        Console.WriteLine("You entered: " + num_2);
    }

    // Function to increment the numbers and display the result
    static void fun2(ref int num_1, ref int num_2)
    {
        num_1++;
        num_2++;
        Console.WriteLine("Incremented values: " + num_1 + " " + num_2);
    }
}

class MyClass
{
    public void fun4(int num_5, int num_6)
    {
        Console.WriteLine("Enter number 3: ");
        num_5 = int.Parse(Console.ReadLine());
        
        Console.WriteLine("Enter number 4: ");
        num_6 = int.Parse(Console.ReadLine());
        
    }
    public void fun3(int num_5, int num_6, out int result_1, out int result_2)
    {
        result_1 = num_5 + num_6;
        result_2 = num_5 - num_6;
        Console.WriteLine("Result: " + result_1);
    }
}

//-------------------------------------------------------
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