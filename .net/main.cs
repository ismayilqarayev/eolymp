using System;
using System.Collections.Generic;

class Program
{
    static List<string> adlar = new List<string>();
    static List<string> ataAdlari = new List<string>();
    static List<string> telefonlar = new List<string>();
    static List<string> emaillar = new List<string>();
    static List<int> yaslar = new List<int>();

    static void Main(string[] args)
    {
        int say = Neceneferindaxiledilmesi();
        MelumatlariDaxilet(say);

        Konstruktor konstruktor = new Konstruktor(adlar, ataAdlari, telefonlar, emaillar, yaslar);
        konstruktor.Print();
    }

    static int Neceneferindaxiledilmesi()
    {
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");
        int say;
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yenidən düzgün bir ədəd daxil edin:");
        }
        return say;
    }

    static void MelumatlariDaxilet(int say)
    {
        for (int i = 0; i < say; i++)
        {
            string ad;
            while (true)
            {
                Console.WriteLine("Ad daxil edin:");
                ad = Console.ReadLine();
                if (!string.IsNullOrEmpty(ad) && char.IsLetter(ad[0]))
                    break;
                Console.WriteLine("Yenidən düzgün bir ad daxil edin:");
            }
            adlar.Add(ad);

            string ataAdi;
            while (true)
            {
                Console.WriteLine("Ata adını daxil edin:");
                ataAdi = Console.ReadLine();
                if (!string.IsNullOrEmpty(ataAdi) && char.IsLetter(ataAdi[0]))
                    break;
                Console.WriteLine("Yenidən düzgün bir ata adı daxil edin:");
            }
            ataAdlari.Add(ataAdi);

            string telefon;
            while (true)
            {
                Console.WriteLine("Telefon nömrəsini daxil edin:");
                telefon = Console.ReadLine();
                if (telefon.Length == 10 && long.TryParse(telefon, out _))
                    break;
                Console.WriteLine("Yenidən düzgün bir telefon nömrəsi daxil edin:");
            }
            telefonlar.Add(telefon);

            string email;
            while (true)
            {
                Console.WriteLine("E-poçt ünvanını daxil edin:");
                email = Console.ReadLine();
                if (email.Contains("@") && email.Contains("."))
                    break;
                Console.WriteLine("Yenidən düzgün bir e-poçt ünvanı daxil edin:");
            }
            emaillar.Add(email);

            int yas;
            while (true)
            {
                Console.WriteLine("Yaş daxil edin:");
                string input = Console.ReadLine();
                if (int.TryParse(input, out yas) && yas > 0)
                    break;
                Console.WriteLine("Yenidən düzgün bir ədəd daxil edin:");
            }
            yaslar.Add(yas);
        }
    }

    static string DaxilEt(string sorqu, string xetaMesaji, Func<string, bool> yoxlama)
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
        private readonly List<string> ataAdlari;
        private readonly List<string> telefonlar;
        private readonly List<string> emaillar;
        private readonly List<int> yaslar;

        public Konstruktor(List<string> adlar, List<string> ataAdlari, List<string> telefonlar, List<string> emaillar, List<int> yaslar)
        {
            this.adlar = adlar;
            this.ataAdlari = ataAdlari;
            this.telefonlar = telefonlar;
            this.emaillar = emaillar;
            this.yaslar = yaslar;
        }

        public void Print()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"Ad: {adlar[i]}, Ata adı: {ataAdlari[i]}, Telefon: {telefonlar[i]}, Email: {emaillar[i]}, Yaş: {yaslar[i]}");
            }
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------

using System;
using System.Collections.Generic;

class Program
{
    static List<string> adlar = new List<string>();
    static List<string> ataAdlari = new List<string>();
    static List<string> telefonlar = new List<string>();
    static List<string> emaillar = new List<string>();
    static List<int> yaslar = new List<int>();

    static void Main(string[] args)
    {
        int say = Neceneferindaxiledilmesi();
        MelumatlariDaxilet(say);

        Konstruktor konstruktor = new Konstruktor(adlar, ataAdlari, telefonlar, emaillar, yaslar);
        konstruktor.Print();
    }

    static int Neceneferindaxiledilmesi()
    {
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");
        int say;
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yenidən düzgün bir ədəd daxil edin:");
        }
        return say;
    }

    static void MelumatlariDaxilet(int say)
    {
        for (int i = 0; i < say; i++)
        {
            string ad;
            while (true)
            {
                Console.WriteLine("Ad daxil edin:");
                ad = Console.ReadLine();
                if (!string.IsNullOrEmpty(ad) && char.IsLetter(ad[0]))
                {
                    break;
                }
                Console.WriteLine("Yenidən düzgün bir ad daxil edin:");
            }
            adlar.Add(ad);

            string ataAdi;
            while (true)
            {
                Console.WriteLine("Ata adını daxil edin:");
                ataAdi = Console.ReadLine();
                if (!string.IsNullOrEmpty(ataAdi) && char.IsLetter(ataAdi[0]))
                {
                    break;
                }
                Console.WriteLine("Yenidən düzgün bir ata adı daxil edin:");
            }
            ataAdlari.Add(ataAdi);

            string telefon;
            while (true)
            {
                Console.WriteLine("Telefon nömrəsini daxil edin:");
                telefon = Console.ReadLine();
                if (telefon.Length == 10 && long.TryParse(telefon, out _))
                {
                    break;
                }
                Console.WriteLine("Yenidən düzgün bir telefon nömrəsi daxil edin:");
            }
            telefonlar.Add(telefon);

            string email;
            while (true)
            {
                Console.WriteLine("E-poçt ünvanını daxil edin:");
                email = Console.ReadLine();
                if (email.Contains("@") && email.Contains("."))
                {
                    break;
                }
                Console.WriteLine("Yenidən düzgün bir e-poçt ünvanı daxil edin:");
            }
            emaillar.Add(email);

            int yas;
            while (true)
            {
                Console.WriteLine("Yaş daxil edin:");
                string input = Console.ReadLine();
                if (int.TryParse(input, out yas) && yas > 0)
                {
                    break;
                }
                Console.WriteLine("Yenidən düzgün bir ədəd daxil edin:");
            }
            yaslar.Add(yas);
        }
    }

    static string DaxilEt(string sorqu, string xetaMesaji, Func<string, bool> yoxlama)
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
        private readonly List<string> ataAdlari;
        private readonly List<string> telefonlar;
        private readonly List<string> emaillar;
        private readonly List<int> yaslar;

        public Konstruktor(List<string> adlar, List<string> ataAdlari, List<string> telefonlar, List<string> emaillar, List<int> yaslar)
        {
            this.adlar = adlar;
            this.ataAdlari = ataAdlari;
            this.telefonlar = telefonlar;
            this.emaillar = emaillar;
            this.yaslar = yaslar;
        }

        public void Print()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"Ad: {adlar[i]}, Ata adı: {ataAdlari[i]}, Telefon: {telefonlar[i]}, Email: {emaillar[i]}, Yaş: {yaslar[i]}");
            }
        }
    }
}

