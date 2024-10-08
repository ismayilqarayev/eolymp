using System;
using System.Collections.Generic;

class Program
{
    public static void Main(string[] args)
    {
        List<string> text_1 = new List<string>();
        List<string> text_2 = new List<string>();

        Melumatlarin_text_1_daxiledilmesi(ref text_1);
        Melumatlarin_text_2_daxiledilmesi(ref text_2);

        Melumatlarin_gosterilmesi(ref text_1, ref text_2);
        
        // Konstruktoru çağıraraq obyekt yaradırıq
        konstruktor p = new konstruktor(text_1, text_2);
    }

    // İlk metoddakı məlumat daxil edilməsi
    public static void Melumatlarin_text_1_daxiledilmesi(ref List<string> text_1)
    {
        Console.WriteLine("Text 1 üçün sözləri daxil edin: ");
        string sozlerin_text_1_daxil_edilmesi = Console.ReadLine();

        for (int i = 0; i < sozlerin_text_1_daxil_edilmesi.Length; i++)
        {
            Console.WriteLine("Simvolları daxil edin: ");
            string c = Console.ReadLine();
            text_1.Add(c);
        }
    }

    // İkinci metoddakı məlumat daxil edilməsi
    public static void Melumatlarin_text_2_daxiledilmesi(ref List<string> text_2)
    {
        Console.WriteLine("Text 2 üçün sözləri daxil edin: ");
        string sozlerin_text_2_daxil_edilmesi = Console.ReadLine();

        for (int i = 0; i < sozlerin_text_2_daxil_edilmesi.Length; i++)
        {
            string c = Console.ReadLine();
            text_2.Add(c);
        }
    }

    // Məlumatların göstərilməsi üçün metod
    public static void Melumatlarin_gosterilmesi(ref List<string> text_1, ref List<string> text_2)
    {
        Console.WriteLine("Text 1:");
        foreach (var a in text_1)
        {
            Console.WriteLine(a);
        }

        Console.WriteLine("Text 2:");
        foreach (var b in text_2)
        {
            Console.WriteLine(b);
        }
    }
}

class konstruktor
{
    
    public string Name;
    public int Age;
    
    // Konstruktor
    public konstruktor(string name, int age)
    {
        Name = name;
        Age = age;
        
        
    }

    public konstruktor(List<string> text_1, List<string> text_2)
    {
        // Metodlar
        if (text_1.Count == 0 || text_2.Count == 0)
        {
            Console.WriteLine("ERROR: Siyahılar boşdur.");
        }
        else
        {
            Console.WriteLine("Text 1 və Text 2 uğurla daxil edildi.");
        }
    }
}




//-------------------------------------------------------------
using System;
using System.Collections.Generic;

class Program
{
    public static void Main(string[] args)
    {
        List<int> list_1 = new List<int>();
        List<int> list_2 = new List<int>();

        int cemi_1 = 0;
        int cemi_2 = 0;
        
        Melumatlarin_List1_Daxiledilmesi(ref list_1, ref list_2);
        Melumatlarin_List2_Daxiledilmesi(ref list_1, ref list_2);
        
        Melumatlarin_List1_Cixarilmasi(ref list_1, ref list_2, out cemi_1, out cemi_2);
        
        // Cəmləri ekrana çıxarırıq
        Console.WriteLine($"List 1-in cəmi: {cemi_1}");
        Console.WriteLine($"List 2-in cəmi: {cemi_2}");
    }
    
    public static void Melumatlarin_List1_Daxiledilmesi(ref List<int> l_1, ref List<int> l_2)
    {
        Console.WriteLine("List 1 üçün neçə rəqəm daxil etmək istəyirsiniz?");
        int reqemlerin_list1_daxil_edilmesi = int.Parse(Console.ReadLine());

        for (int i = 0; i < reqemlerin_list1_daxil_edilmesi; i++)
        {
            Console.WriteLine("List 1 üçün rəqəmi daxil edin:");
            int c = int.Parse(Console.ReadLine());
            l_1.Add(c);
        }
    }

    public static void Melumatlarin_List2_Daxiledilmesi(ref List<int> l_1, ref List<int> l_2)
    {
        Console.WriteLine("List 2 üçün neçə rəqəm daxil etmək istəyirsiniz?");
        int reqemlerin_list2_daxil_edilmesi = int.Parse(Console.ReadLine());

        for (int i = 0; i < reqemlerin_list2_daxil_edilmesi; i++)
        {
            Console.WriteLine("List 2 üçün rəqəmi daxil edin:");
            int c = int.Parse(Console.ReadLine());
            l_2.Add(c);
        }
    }

    public static void Melumatlarin_List1_Cixarilmasi(ref List<int> l_1, ref List<int> l_2, out int cemi_1, out int cemi_2)
    {
        cemi_1 = 1;
        cemi_2 = 1;
        
        for (int i = 0; i < l_1.Count; i++)
        {
            cemi_1 += l_1[i]; // List 1-dəki bütün elementləri toplamaq
        }
        
        for (int i = 0; i < l_2.Count; i++)
        {
            cemi_2 += l_2[i]; // List 2-dəki bütün elementləri toplamaq
        }
    }
}




//-----------------------------------------------------

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