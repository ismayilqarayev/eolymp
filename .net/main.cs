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
    static List<string> emaillar = new List<string>();
    static List<int> yaslar = new List<int>();
    static List<long> telefonlar = new List<long>(); // Telefonlar üçün `long` istifadə etdik.

    static string ad;
    static string ataAdi;
    static string email;
    static long telefon;
    static int yas;

    static int say;

    static void Main(string[] args)
    {
        Neceneferindaxiledilmesi();
        Melumatlarindaxiledilmesi();

        Konstruktor konstruktor = new Konstruktor(adlar, ataAdlari, emaillar, telefonlar, yaslar);
        konstruktor.Print();

        
    }

    static int Neceneferindaxiledilmesi()
    {
        Console.WriteLine("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.WriteLine("Yenidən düzgün bir ədəd daxil edin: ");
        }
        return say;
    }

    static void Melumatlarindaxiledilmesi()
    {
        for (int i = 0; i < say; i++)
        {
            while (true)
            {
                Console.WriteLine("Ad daxil edin: ");
                ad = Console.ReadLine();

                if (!string.IsNullOrEmpty(ad) && char.IsLetter(ad[0]))
                {
                    adlar.Add(ad);
                    break;
                }
                else
                {
                    Console.WriteLine("Məlumatı düzgün daxil edin: ");
                }
            }

            //------------------------------------

            while (true)
            {
                Console.WriteLine("Ata adını daxil edin: ");
                ataAdi = Console.ReadLine();

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

            //------------------------------------

            while (true)
            {
                Console.WriteLine("E-poçt ünvanını daxil edin: ");
                email = Console.ReadLine();

                if (email.Contains("@") && email.Contains("."))
                {
                    emaillar.Add(email);
                    break;
                }
                else
                {
                    Console.WriteLine("Yenidən düzgün bir e-poçt ünvanı daxil edin:");
                }
            }

            //------------------------------------

            while (true)
            {
                Console.WriteLine("Telefon nomresini daxil edin: ");
                var number = Console.ReadLine();

                if (number.Length == 10 && long.TryParse(number, out telefon))
                {
                    telefonlar.Add(telefon); // **Burada olmalıdır**
                    break;
                }
                else
                {
                    Console.WriteLine("Melumati duzgun daxil edin: ");
                }
            }
            //-------------------------------------

            while (true)
            {
                Console.WriteLine("Yaşı daxil edin: ");
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

    struct Konstruktor
    {
        private readonly List<string> adlar;
        private readonly List<string> ataAdlari;
        private readonly List<string> emaillar;
        private readonly List<long> telefonlar;
        private readonly List<int> yaslar;

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

        public void Print()
        {
            for (int i = 0; i < adlar.Count; i++)
            {
                Console.WriteLine($"Ad: {adlar[i]}, Ata adı: {ataAdlari[i]}, Telefon: {telefonlar[i]}, Email: {emaillar[i]}, Yaş: {yaslar[i]}");
            }
        }
    }
}

//---------------------------------------------------------------

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


//---------------------------------------------------------------


using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        Console.Write("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
        int say;
        
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.Write("Düzgün bir ədəd daxil edin: ");
        }

        List<Istifadeci> istifadeciler = new List<Istifadeci>();

        for (int i = 0; i < say; i++)
        {
            Console.WriteLine($"\n{i + 1}-ci şəxsin məlumatlarını daxil edin:");

            string ad = AdiDaxilEt("Ad daxil edin: ");
            string email = EmailDaxilEt("E-poçt ünvanını daxil edin: ");
            long telefon = TelefonDaxilEt("Telefon nömrəsini daxil edin: ");
            int yas = YasiDaxilEt("Yaşı daxil edin: ");

            istifadeciler.Add(new Istifadeci(ad, ataAdi, email, telefon, yas));
        }

        Console.WriteLine("\nDaxil edilmiş məlumatlar:");
        foreach (var istifadeci in istifadeciler)
        {
            istifadeci.CapiGoster();
        }
    }

    private static string AdiDaxilEt(string mesaj)
    {
        string daxilEdilen;
        while (true)
        {
            Console.Write(mesaj);
            daxilEdilen = Console.ReadLine();
            if (!string.IsNullOrWhiteSpace(daxilEdilen) && char.IsLetter(daxilEdilen[0]))
            {
                return daxilEdilen;
            }
            Console.WriteLine("Düzgün məlumat daxil edin!");
        }
    }

    private static string EmailDaxilEt(string mesaj)
    {
        string email;
        while (true)
        {
            Console.Write(mesaj);
            email = Console.ReadLine();
            if (email.Contains("@") && email.Contains("."))
            {
                return email;
            }
            Console.WriteLine("Düzgün e-poçt ünvanı daxil edin!");
        }
    }

    private static long TelefonDaxilEt(string mesaj)
    {
        string daxilEdilen;
        while (true)
        {
            Console.Write(mesaj);
            daxilEdilen = Console.ReadLine();
            if (long.TryParse(daxilEdilen, out long telefon) && daxilEdilen.Length == 10)
            {
                return telefon;
            }
            Console.WriteLine("Düzgün telefon nömrəsi daxil edin! (10 rəqəm)");
        }
    }

    private static int YasiDaxilEt(string mesaj)
    {
        int yas;
        while (true)
        {
            Console.Write(mesaj);
            if (int.TryParse(Console.ReadLine(), out yas) && yas > 0)
            {
                return yas;
            }
            Console.WriteLine("Düzgün yaş daxil edin!");
        }
    }
}

class Istifadeci
{
    public string Ad { get; }
    public string Email { get; }
    public long Telefon { get; }
    public int Yas { get; }

    public Istifadeci(string ad, string email, long telefon, int yas)
    {
        Ad = ad;
        Email = email;
        Telefon = telefon;
        Yas = yas;
    }

    public void CapiGoster()
    {
        Console.WriteLine($"Ad: {Ad}, Telefon: {Telefon}, Email: {Email}, Yaş: {Yas}");
    }
}


//-------------------------------------------------------------
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

//------------------


using System;
using System.Collections.Generic;

// User sinfi - İstifadəçi məlumatlarını saxlamaq üçün
class User
{
    public string Ad { get; }
    public string AtaAdi { get; }
    public string Email { get; }
    public long Telefon { get; }
    public int Yas { get; }

    // Konstruktor - Dəyərləri təyin edir
    public User(string ad, string ataAdi, string email, long telefon, int yas)
    {
        Ad = ad;
        AtaAdi = ataAdi;
        Email = email;
        Telefon = telefon;
        Yas = yas;
    }

    // Məlumatları ekrana çap edən metod
    public void Print()
    {
        Console.WriteLine($"Ad: {Ad}, Ata adı: {AtaAdi}, Telefon: {Telefon}, Email: {Email}, Yaş: {Yas}");
    }
}

class Program
{
    static List<User> users = new List<User>();
    static int say = 0;

    public static void Main(string[] args)
    {
        // 1. İstifadəçidən neçə nəfər məlumat daxil edəcəyini soruşuruq
        Neceneferindaxiledilmesi();

        // 2. Həmin sayda şəxsin məlumatlarını daxil edirik
        Melumatlarindaxiledilmesi();

        // 3. Bütün məlumatları çap edirik
        Console.WriteLine("\nDaxil edilən istifadəçilər:");
        foreach (var user in users)
        {
            user.Print();
        }
    }

    static void Neceneferindaxiledilmesi()
    {
        Console.Write("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
        while (!int.TryParse(Console.ReadLine(), out say) || say <= 0)
        {
            Console.Write("Yenidən düzgün bir ədəd daxil edin: ");
        }
    }

    static void Melumatlarindaxiledilmesi()
    {
        for (int i = 0; i < say; i++)
        {
            string ad = DaxilEt("Ad", input => !string.IsNullOrEmpty(input) && char.IsLetter(input[0]));
            string ataAdi = DaxilEt("Ata adı", input => !string.IsNullOrEmpty(input) && char.IsLetter(input[0]));
            string email = DaxilEt("E-poçt ünvanı", input => input.Contains("@") && input.Contains("."));
            long telefon = long.Parse(DaxilEt("Telefon nömrəsi", input => long.TryParse(input, out _) && input.Length == 10));
            int yas = int.Parse(DaxilEt("Yaş", input => int.TryParse(input, out int age) && age > 0));

            users.Add(new User(ad, ataAdi, email, telefon, yas));
        }
    }

    static string DaxilEt(string mesaj, Func<string, bool> yoxlama)
    {
        string daxilEdilen;
        do
        {
            Console.Write($"{mesaj} daxil edin: ");
            daxilEdilen = Console.ReadLine();
        } while (!yoxlama(daxilEdilen));
        return daxilEdilen;
    }
}

