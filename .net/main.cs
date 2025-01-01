using System;
using System.Collections.Generic;

class Program
{
    static List<string> adlar = new List<string>();
    static List<int> yaslar = new List<int>();

    public static void Main(string[] args)
    {
        int say = Neceneferindaxiledilmesi();
        MelumatlariDaxilet(say);

        var konstruktor = new Konstruktor(adlar, yaslar);
        konstruktor.Print();
    }

    public static int Neceneferindaxiledilmesi()
    {
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");
        int say;
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yenidən düzgün bir ədəd daxil edin: ");
        }
        return say;
    }

    public static void MelumatlariDaxilet(int say)
    {
        for (int i = 0; i < say; i++)
        {
            string ad = DaxilEt("Ad daxil edin: ", "Yenidən düzgün bir ad daxil edin: ", input => !string.IsNullOrEmpty(input) && char.IsLetter(input[0]));
            adlar.Add(ad);

            int yas = int.Parse(DaxilEt("Yaş daxil edin: ", "Yenidən düzgün bir ədəd daxil edin: ", input => int.TryParse(input, out int value) && value > 0));
            yaslar.Add(yas);
        }
    }

    public static string DaxilEt(string sorqu, string xetaMesaji, Func<string, bool> yoxlama)
    {
        Console.WriteLine(sorqu);
        string input;
        while (!yoxlama(input = Console.ReadLine()))
        {
            Console.WriteLine(xetaMesaji);
        }
        return input;
    }

    struct Konstruktor
    {
        private readonly List<string> adlar;
        private readonly List<int> yaslar;

        public Konstruktor(List<string> adlar, List<int> yaslar)
        {
            this.adlar = adlar;
            this.yaslar = yaslar;
        }

        public void Print()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"{adlar[i]}, Yaş: {yaslar[i]}");
            }
        }
    }
}
