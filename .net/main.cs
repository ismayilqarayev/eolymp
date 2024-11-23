using System;
using System.Collections.Generic;

internal class Program
{
    static List<Mysctruct> mysctructs = new List<Mysctruct>();
    static int say = 0;

    public static void Main(string[] args)
    {
        for(int i = 0; i < say; i++)
        {
            Mysctruct person = new Mysctruct();
            mysctructs.Add(person);
        }
       
        Neceneferindaxiledilmesi(ref say);
  
    }

    public static void Neceneferindaxiledilmesi(ref int say)
    {
        Console.WriteLine("Nece neferin melumatini daxil edeceksiniz: ");
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("yeniden duzgun bir eded daxil et: ");
        }
    }

    public static Mysctruct Melumatlarindaxiledilmesi()
    {
        
    }

    public struct MyStruct
    {
        public string Ad { get; }
        public string Soyad { get; }
        public string AtaAdi { get; }
        public int Telefon { get; }

        public MyStruct(string ad, string soyad, string ataadi, int telefon)
        {
            this.Ad = ad;
            this.Soyad = soyad;
            this.AtaAdi = ataadi;
            this.Telefon = telefon;
        }

        public static void Print()
        {
            Console.WriteLine($" Ad: {Ad}, Soyad: {Soyad}, Ata adi: {AtaAdi}, Telefon: {Telefon}");
        }
        
    }
}