
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


class Program
{
    static List<string> adlar = new List<string>();
    static List<int> yaslar = new List<int>();

    static int say = 0;

    public static void Main(string[] args)
    {
        Neceneferindaxiledilmesi(adlar, yaslar, ref say);
        MelumatlariDaxilet(adlar, yaslar, say);

        Konstruktor konstruktor = new Konstruktor(adlar, yaslar);
        konstruktor.Print();
    }

    public static void Neceneferindaxiledilmesi(List<string> adlar, List<int> yaslar, ref int say)
    {
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");

        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("yeniden duzgun bir eded daxil et: ");
        }
    }


    public static void MelumatlariDaxilet(List<string> adlar, List<int> yaslar, int say)
    {
        for (int i = 0; i < say; i++)
        {
            Console.WriteLine("Ad daxil etin: ");
            string ad;
            while(string.IsNullOrEmpty(ad = Console.ReadLine()) || !char.IsLetter(ad[0]))
            {
                Console.WriteLine("yeniden duzgun bir ad daxil et: ");
            }
            adlar.Add(ad);

            Console.WriteLine("Yas daxil etin: ");
            int yas;
            while (!int.TryParse(Console.ReadLine(), out yas) || yas <= 0)
            {
                Console.WriteLine("yeniden duzgun bir eded daxil et: ");
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
            this.adlar = adlar;
            this.yaslar = yaslar;
        }

        public void Print()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"{adlar[i]}, Yas {yaslar[i]}");
            }
        }
    }
}
