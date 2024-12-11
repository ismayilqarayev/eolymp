using System;
using System.Collections.Generic;

internal class Program
{
    static List<Pers.MyStruct> mystructs = new List<Pers.MyStruct>();
    static int say = 0;


    public static void Main(string[] args)
    {
        Pers pers = new Pers { Ad = "Nigar", Soyad = "Huseynova", AtaAdi = "Nigar", Telefon = 55555555 };
       
        Neceneferindaxiledilmesi(ref say); // Определяем количество людей

        for (int i = 0; i < say; i++) // Вводим данные для каждого человека
        {
            Pers.MyStruct person = Melumatlarindaxiledilmesi();
            mystructs.Add(person); // Добавляем введённые данные в список
        }

        Console.WriteLine("\n--- Список данных ---");
        foreach (var item in mystructs) // Выводим список
        {
            item.Print();
        }
    }


    public static void Neceneferindaxiledilmesi(ref int say)
    {
        Console.WriteLine("Neçə nəfərin məlumatını daxil edəcəksiniz?");
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yenidən düzgün bir ədəd daxil edin:");
        }
    }


    public static  Pers.MyStruct Melumatlarindaxiledilmesi()
    {
        Console.WriteLine("\nAd:");
        string ad = Console.ReadLine();

        Console.WriteLine("Soyad:");
        string soyad = Console.ReadLine();

        Console.WriteLine("Ata adı:");
        string ataAdi = Console.ReadLine();

        Console.WriteLine("Telefon nömrəsi:");
        int telefon;
        while (!int.TryParse(Console.ReadLine(), out telefon) || telefon <= 0) // Исправлено условие
        {
            Console.WriteLine("Yenidən düzgün telefon nömrəsi daxil edin:");
        }

        return new Pers.MyStruct(ad, soyad, ataAdi, telefon); // Создаём экземпляр структуры
    }
}


class Pers
{
    public struct MyStruct
    {
        public string Ad { get; }
        public string Soyad { get; }
        public string AtaAdi { get; }
        public int Telefon { get; }

        public MyStruct(string ad, string soyad, string ataAdi, int telefon)
        {
            Ad = ad;
            Soyad = soyad;
            AtaAdi = ataAdi;
            Telefon = telefon;
        }

        public void Print()
        {
            Console.WriteLine($"Ad: {Ad}, Soyad: {Soyad}, Ata adı: {AtaAdi}, Telefon: {Telefon}");
        }
    }
}





//------------------------------------------------------------------



internal class Program
{
    static List<Mystruct.Struktorlar> mystructs = new List<Mystruct.Struktorlar>();
    static int say = 0;

    private static void Main(string[] args)
    {
        Mystruct mystruct = new Mystruct();
        Neceneferindaxiledilmesi(ref say);

        for (int i = 0; i < say; i++)
        {
            Mystruct.Struktorlar person = Melumatlarindaxiledilmesi();
            mystructs.Add(person);
        }

        foreach (var item in mystructs)
        {
            item.Print();
        }
    }

    public static void Neceneferindaxiledilmesi(ref int say)
    {
        Console.WriteLine("Nece neferin melumatini daxil edeceksiniz: ");
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yeniden duzgun bir eded daxil edin: ");
        }
    }

    public static Mystruct.Struktorlar Melumatlarindaxiledilmesi()
    {
        Console.WriteLine("\nAd: ");
        string ad = Console.ReadLine();

        Console.WriteLine("Soyad: ");
        string soyad = Console.ReadLine();

        Console.WriteLine("Ata adi: ");
        string ataadi = Console.ReadLine();

        Console.WriteLine("Telefon: ");
        string telefon = Console.ReadLine();

        return new Mystruct.Struktorlar(ad, soyad, ataadi, telefon);
    }
}

class Mystruct
{
    public struct Struktorlar
    {
        public string Ad { get; }
        public string Soyad { get; }
        public string AtaAdi { get; }
        public string Telefon { get; }

        public Struktorlar(string ad, string soyad, string ataadi, string telefon)
        {
            this.Ad = ad;
            this.Soyad = soyad;
            this.AtaAdi = ataadi;
            this.Telefon = telefon;
        }

        public void Print()
        {
            Console.WriteLine($"Ad: {Ad}, Soyad: {Soyad}, Ata adi: {AtaAdi}, Telefon: {Telefon}");
        }
    }
}
