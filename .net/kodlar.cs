

using System;
using System.Collections.Generic;


class Program
{
    static List<string> adlar = new List<string>();
    static List<int> yaslar = new List<int>();
    static List<MyStruct> myStructs = new List<MyStruct>();
    static int say = 0;
    
    public static void Main(string[] args)
    {
        Melumatlaridaxilet1(ref adlar, ref yaslar, ref say);
        Melumatlaridaxilet2(adlar, yaslar, say);
        //Melumatlaricixart(adlar, yaslar, say);

        for (int i = 0; i < say; i++)
        {
            myStructs.Add(new MyStruct(adlar[i], yaslar[i]));
        }

        foreach (var item in myStructs)
        {
            item.Print();
        }
    }
    
    public static void Melumatlaridaxilet1(ref List<string> adlar, ref List<int> yaslar, ref int say)
    {
        Console.WriteLine("Neçə nəfərin məlumatını daxil edəcəksiniz?");
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Zəhmət olmasa düzgün bir ədəd daxil edin");
        }
    }
    
    public static void Melumatlaridaxilet2(List<string> adlar, List<int> yaslar, int say)
    {
        for (int i = 0; i < say; i++)
        {
            Console.WriteLine("Ad daxil edin");
            string ad = Console.ReadLine();
            adlar.Add(ad);
            
            
            int yas;
            Console.WriteLine("Yas daxil edin");
            while (!int.TryParse(Console.ReadLine(), out yas) || yas <= 0)
            {
                Console.WriteLine("Zəhmət olmasa düzgün bir ədəd daxil edin");
            }
            yaslar.Add(yas);
        }
    }

    struct MyStruct
    {
        public string Ad { get; }
        public int Yas { get; }

        public MyStruct(string ad, int yas)
        {
            this.Ad = ad;
            this.Yas = yas;
        }
        
        public void Print()
        {
            Console.WriteLine($"{Ad}, {Yas}");
        }
    }

    //public static void Melumatlaricixart(List<string> adlar, List<int> yaslar, int say)
    //{
    //    for (int i = 0; i < adlar.Count; i++)
    //    {
    //        Console.WriteLine($"{adlar[i]} {yaslar[i]}");
    //    }
    //}
}

//-----------------------------------------------------------------------------------


using System;
using System.Collections.Generic;

class Program
{
    public static void Main(string[] args)
    {
        List<string> adlar = new List<string>();
        List<int> yaslar = new List<int>();
        
        int say = 0;
        
        Melumatlaridaxilet(ref adlar, ref yaslar, ref say);
        Melumatlaridaxilet2(adlar, yaslar, say);
    }

    public static void Melumatlaridaxilet(ref List<string> adlar, ref List<int> yaslar, ref int say)
    {
        Console.WriteLine("Neçə nəfərin məlumatını daxil edəcəksiniz?");
        
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Zəhmət olmasa düzgün bir ədəd daxil edin: ");
        }
    }

    public static void Melumatlaridaxilet2(List<string> adlar, List<int> yaslar, int say)
    {
        for (int i = 0; i < say; i++)
        {
            Console.WriteLine("Ad daxil edin: ");
            string ad = Console.ReadLine();
            adlar.Add(ad);
            
            Console.WriteLine("Yaş daxil edin: ");
            int yas;
            while (!int.TryParse(Console.ReadLine(), out yas) || yas <= 0)
            {
                Console.WriteLine("Zəhmət olmasa düzgün bir ədəd daxil edin: ");
            }
            yaslar.Add(yas);
        }
        
        Console.WriteLine("\nDaxil edilən məlumatlar:");
        for (int i = 0; i < adlar.Count; i++)
        {
            Console.WriteLine($"Ad: {adlar[i]}, Yaş: {yaslar[i]}");
        }
    }
}


//--------------------------------------------------------------------------------------------
using System;
using System.Collections.Generic;

class Program
{
    public static void Main(string[] args)
    {
        List<string> adlar = new List<string>(); 
        List<int> yaslar = new List<int>();
        
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");
        int say;

        // İstifadəçinin düzgün ədəd daxil edib-etmədiyini yoxlayırıq
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Zəhmət olmasa düzgün bir ədəd daxil edin:");
        }
        
        // Hər bir şəxs üçün məlumatların daxil edilməsi
        MelumatlariDaxilEt(adlar, yaslar, say);
        
        // Daxil edilmiş məlumatları göstərmək üçün strukturdan istifadə edirik
        Konstruktor insanMəlumatları = new Konstruktor(adlar, yaslar);
        insanMəlumatları.Cixar();
    }

    public static void MelumatlariDaxilEt(List<string> adlar, List<int> yaslar, int say)
    {
        for (int i = 0; i < say; i++)
        {
            Console.WriteLine("Ad daxil edin:");
            string ad = Console.ReadLine();
            adlar.Add(ad);
            
            Console.WriteLine("Yaş daxil edin:");
            int yas;
            // Yaşın düzgün daxil olunmasını yoxlayırıq
            while (!int.TryParse(Console.ReadLine(), out yas) || yas < 0)
            {
                Console.WriteLine("Zəhmət olmasa düzgün bir yaş daxil edin:");
            }
            yaslar.Add(yas);
        }
    }

    struct Konstruktor
    {
        private List<string> adlar;
        private List<int> yaslar;

        public Konstruktor(List<string> adlar, List<int> yaslar)
        {
            this.adlar = adlar; // Adların siyahısını saxlayır
            this.yaslar = yaslar; // Yaşların siyahısını saxlayır
        }

        public void Cixar()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"Ad: {adlar[i]}, Yaş: {yaslar[i]}");
            }
        }
    }
}





//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

//konstruktor ile yazılıb
using System;
using System.Collections.Generic;

class Program
{
    public static void Main(string[] args)
    {
        List<string> text_1 = new List<string>(); 
        List<int> number_1 = new List<int>();
        
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");
        int n = int.Parse(Console.ReadLine());
        
        Melumatlarin_text_daxil_edilmesi(text_1, number_1, n);
        
        // Create an instance of the struct with the lists
        Konstruktor konstruktor = new Konstruktor(text_1, number_1);
        konstruktor.Print(); // Corrected method name to 'Print'
    }

    public static void Melumatlarin_text_daxil_edilmesi(List<string> text_1, List<int> number_1, int n)
    {
        for (int i = 0; i < n; i++)
        {
            Console.WriteLine("Text daxil edin:");
            string name = Console.ReadLine();
            text_1.Add(name);
            
            Console.WriteLine("Yaş daxil edin:");
            int age = int.Parse(Console.ReadLine());
            number_1.Add(age);
        }
    }

    struct Konstruktor
    {
        private List<string> names;
        private List<int> ages;

        public Konstruktor(List<string> text_1, List<int> number_1)
        {
            names = text_1; // Store the list of names
            ages = number_1; // Store the list of ages
        }

        public void Print()
        {
            for (int i = 0; i < names.Count; i++)
            {
                Console.WriteLine($"Name: {names[i]}, Age: {ages[i]}");
            }
        }
    }
}


//---------------------------------------------------------------------------------


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

        if (text_1.Count > 0 && text_2.Count > 0)
        {
            // Создание экземпляра структуры с текстами, используя первый элемент каждого списка
            Konstruktor p = new Konstruktor(text_1[0], text_2[0]);
            p.Print();
        }
        else
        {
            Console.WriteLine("Тексты не были введены корректно.");
        }
    }

    // Метод для ввода данных для первого текста
    public static void Melumatlarin_text_1_daxiledilmesi(ref List<string> text_1)
    {
        Console.WriteLine("Text 1 üçün sözləri daxil edin: ");
        string sozlerin_text_1_daxil_edilmesi = Console.ReadLine();
        string[] sozler = sozlerin_text_1_daxil_edilmesi.Split(' ');
        foreach (var soz in sozler)
        {
            if (!string.IsNullOrWhiteSpace(soz))
            {
                text_1.Add(soz);
            }
        }
    }

    // Метод для ввода данных для второго текста
    public static void Melumatlarin_text_2_daxiledilmesi(ref List<string> text_2)
    {
        Console.WriteLine("Text 2 üçün sözləri daxil edin: ");
        string sozlerin_text_2_daxil_edilmesi = Console.ReadLine();
        string[] sozler = sozlerin_text_2_daxil_edilmesi.Split(' ');
        foreach (var soz in sozler)
        {
            if (!string.IsNullOrWhiteSpace(soz))
            {
                text_2.Add(soz);
            }
        }
    }
}

// Определение структуры с конструктором
struct Konstruktor
{
    public string text1 { get; }
    public string text2 { get; }

    // Конструктор с параметрами
    public Konstruktor(string text_1, string text_2)
    {
        this.text1 = text_1;
        this.text2 = text_2;
        Console.WriteLine("Структура инициализирована с параметрами.");
    }

    // Метод для отображения текста
    public void Print()
    {
        Console.WriteLine($"Text_1: {text1}");
        Console.WriteLine($"Text_2: {text2}");
    }
}



//-------------------------------------------------------------------------------


using System;
using System.Collections.Generic;

class Program
{
    public static void Main(string[] args)
    {
        List<string> namelist = new List<string>();
        List<int> agelist = new List<int>();
        
        // İstifadəçidən neçə şəxsin ad və yaşını daxil etmək istədiyini alırıq
        Console.Write("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz? ");
        int personCount = int.Parse(Console.ReadLine());
        
        // Daxil olunan say qədər ad və yaş daxil etməsini istəyirik
        for (int i = 0; i < personCount; i++)
        {
            Console.Write($"Adı daxil edin ({i + 1}): ");
            string name = Console.ReadLine();
            AddPerson(namelist, name);
            
            Console.Write($"Yaşı daxil edin ({i + 1}): ");
            int age = int.Parse(Console.ReadLine());
            AddPerson(agelist, age);
        }

        // Ekrana nəticələri çap edirik
        Console.WriteLine("\nName List:");
        foreach (var name in namelist)
        {
            Console.WriteLine(name);
        }

        Console.WriteLine("\nAge List:");
        foreach (var age in agelist)
        {
            Console.WriteLine(age);
        }
    }

    // Generik metodla həm string, həm də int dəyərlər əlavə edilir
    public static void AddPerson<T>(List<T> list, T item)
    {
        list.Add(item);
    }
    
    struct Person
    {
        public string Name;
        public int Age;
    }
}



//----------------------------------------------------------------------------------


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

        //Melumatlarin_gosterilmesi(ref text_1, ref text_2);
        
        // Создание объекта конструктора с текстами
        konstruktor p = new konstruktor() {text1 = text_1[0], text2 = text_2[0]}; 
        
        //konstruktor p = new konstruktor(text_1[0], text_2[0]);
        p.Print();
    }

    // Метод для ввода данных для первого текста
    public static void Melumatlarin_text_1_daxiledilmesi(ref List<string> text_1)
    {
        Console.WriteLine("Text 1 üçün sözləri daxil edin: ");
        string sozlerin_text_1_daxil_edilmesi = Console.ReadLine();

        string[] sozler = sozlerin_text_1_daxil_edilmesi.Split(' ');
        foreach (var soz in sozler)
        {
            text_1.Add(soz);
        }
    }

    // Метод для ввода данных для второго текста
    public static void Melumatlarin_text_2_daxiledilmesi(ref List<string> text_2)
    {
        Console.WriteLine("Text 2 üçün sözləri daxil edin: ");
        string sozlerin_text_2_daxil_edilmesi = Console.ReadLine();
        
        string[] sozler = sozlerin_text_2_daxil_edilmesi.Split(' ');
        foreach (var soz in sozler)
        {
            text_2.Add(soz);
        }
    }
}

class konstruktor
{
    public string text1 { get; set; }
    public string text2 { get; set; }

    // Конструктор с параметрами
    public konstruktor(string text_1, string text_2)
    {
        this.text1 = text_1;
        this.text2 = text_2;
        Console.WriteLine("Класс конструктора инициализирован с параметрами.");
    }

    // Конструктор по умолчанию
    public konstruktor() : this("bhj", "hj") // Вызов конструктора с параметрами
    {
        Console.WriteLine("Класс конструктора инициализирован по умолчанию.");
    }

    // Метод для отображения текста
    public void Print()
    {
        Console.WriteLine($"Text_1: {text1}");
        Console.WriteLine($"Text_2: {text2}");
    }
}




//------------------------------------------------------------



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