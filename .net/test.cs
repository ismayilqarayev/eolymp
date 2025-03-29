//023.03.2025 7:25
using System;
using System.Collections.Generic; // List və digər kolleksiya tiplərindən istifadə üçün

class Program
{
    // **Məlumatların saxlanması üçün listlər**
    // Burada müxtəlif məlumat növlərini saxlamaq üçün beş ayrı list yaradılıb
    static List<string> adlar = new List<string>();       // Şəxslərin adları
    static List<string> ataAdlari = new List<string>();   // Ata adları
    static List<string> emaillar = new List<string>();    // E-poçt ünvanları
    static List<int> yaslar = new List<int>();           // Yaşlar
    static List<long> telefonlar = new List<long>();      // Telefon nömrələri

    // **Müvəqqəti dəyişənlər**
    // Hər şəxsin məlumatını daxil edərkən istifadə edilən dəyişənlər
    static string ad;
    static string ataAdi;
    static string email;
    static long telefon;
    static int yas;

    // **Daxil ediləcək şəxslərin sayı**
    static int say = 0; 

    public static void Main(string[] args)
    {
        // **1. İstifadəçidən neçə nəfər məlumat daxil edəcəyini soruşuruq**
        Neceneferindaxiledilmesi();

        // **2. Həmin sayda şəxsin məlumatlarını daxil edirik**
        Melumatlarindaxiledilmesi();
    }

    // **İstifadəçidən neçə nəfərin məlumatını daxil etmək istədiyini soruşan funksiya**
    static int Neceneferindaxiledilmesi()
    {
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");

        // **İstifadəçidən düzgün rəqəm daxil etməsini tələb edirik**
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yenidən düzgün bir ədəd daxil edin: ");
        }
        return say;
    }

    // **İstifadəçidən şəxsi məlumatları daxil edən funksiya**
    static void Melumatlarindaxiledilmesi()
    {
        for (int i = 0; i < say; i++)
        {
            // **Ad daxil etmə**
            while (true)
            {
                Console.WriteLine("Ad daxil edin: ");
                ad = Console.ReadLine();

                // **Ad boş olmamalıdır və ilk simvol hərf olmalıdır**
                if (!string.IsNullOrEmpty(ad) && char.IsLetter(ad[0]))
                {
                    adlar.Add(ad);
                    break; // **Düzgün məlumat daxil edilibsə, döngüdən çıxırıq**
                }
                else
                {
                    Console.WriteLine("Melumati duzgun daxil edin: ");
                }
            }

            // **Ata adı daxil etmə**
            while (true)
            {
                Console.WriteLine("Ata adini daxil edin: ");
                ataAdi = Console.ReadLine();

                // **Ata adı boş olmamalıdır və ilk simvol hərf olmalıdır**
                if (!string.IsNullOrEmpty(ataAdi) && char.IsLetter(ataAdi[0]))
                {
                    ataAdlari.Add(ataAdi);
                    break;
                }
                else
                {
                    Console.WriteLine("Məlumatı düzgün daxil edin: ");
                }
            }

            // **E-poçt ünvanı daxil etmə**
            while (true)
            {
                Console.WriteLine("E-poçt ünvanını daxil edin: ");
                email = Console.ReadLine();

                // **E-poçt ünvanında "@" və "." olmalıdır**
                if (email.Contains("@") && email.Contains("."))
                {
                    emaillar.Add(email);
                    break;
                }
                else
                {
                    Console.WriteLine("Yenidən düzgün bir e-poçt ünvanı daxil edin: ");
                }
            }

            // **Telefon nömrəsi daxil etmə**
            while (true)
            {
                Console.WriteLine("Telefon nomresini daxil edin: ");
                var number = Console.ReadLine();

                // **Telefon nömrəsi yalnız rəqəmlərdən ibarət olmalı və 10 simvoldan ibarət olmalıdır**
                if (long.TryParse(number, out telefon) && number.Length == 10)
                {
                    telefonlar.Add(telefon);
                    break;
                }
                else
                {
                    Console.WriteLine("Melumati duzgun daxil edin: ");
                }
            }

            // **Yaş daxil etmə**
            while (true)
            {
                Console.WriteLine("Yaşı daxil edin: ");

                // **Yaş yalnız müsbət ədəd olmalıdır**
                if (int.TryParse(Console.ReadLine(), out yas) && yas > 0)
                {
                    yaslar.Add(yas);
                    break;
                }
                else
                {
                    Console.WriteLine("Yaşı düzgün daxil edin:");
                }
            }
        }
    }
}

// **İstifadəçi məlumatlarını saxlamaq üçün struktur**
class User
{
    struct Konstruktor
    {
        // **Məlumatları saxlamaq üçün listlər**
        private readonly List<string> adlar;
        private readonly List<string> ataAdlari;
        private readonly List<string> emaillar;
        private readonly List<long> telefonlar;
        private readonly List<int> yaslar;

        // **Struktur konstruktorda listlər ötürülür və saxlanılır**
        public Konstruktor(
            List<string> adlar,
            List<string> ataAdlari,
            List<string> emaillar,
            List<long> telefonlar,
            List<int> yaslar
        )
        {
            this.adlar = adlar;
            this.ataAdlari = ataAdlari;
            this.emaillar = emaillar;
            this.telefonlar = telefonlar;
            this.yaslar = yaslar;
        }

        // **Məlumatların ekrana çıxarılması üçün funksiya (hazırda boşdur)**
        public void Print()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"Ad: {adlar[i]}, Ata adı: {ataAdlari[i]}, Telefon: {telefonlar[i]}, Email: {emaillar[i]}, Yaş: {yaslar[i]}"); 
                // **Burada məlumatların çap edilməsi nəzərdə tutulub**
            }
        }
    }
}