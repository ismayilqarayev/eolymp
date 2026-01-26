
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

//---------------------------------------------

using System;
using System.Collections.Generic;

class Program
{
    // ===============================
    // AD və SOYADLAR ÜÇÜN LİSTLƏR
    // ===============================

    static List<string> adlar = new List<string>();     // Adları saxlayan list
    static List<string> soyadlar = new List<string>(); // Soyadları saxlayan list

    // Müvəqqəti dəyişənlər
    static string ad;
    static string soyad;

    // Neçə nəfərin məlumatı daxil ediləcək
    static int index = 0;

    public static void Main(string[] args)
    {
        // İstifadəçidən neçə nəfər məlumat daxil edəcəyini soruşur
        Neceneferindaxiledilmesi();

        // Həmin sayda şəxsin məlumatlarını daxil etdirir
        Melumatlarindaxiledilmesi();

        // UserInfo strukturundan obyekt yaradılır
        User.UserInfo info = new User.UserInfo(adlar, soyadlar);

        // Daxil edilən məlumatlar ekrana çıxarılır
        info.Print();
    }

    // ===============================
    // NEÇƏ NƏFƏR DAXİL EDİLƏCƏYİNİ SORUŞAN FUNKSİYA
    // ===============================
    static int Neceneferindaxiledilmesi()
    {
        Console.Write("Nece nefer elave etmek isteyirsiniz?: ");

        // Düzgün ədəd daxil edilənə qədər soruşur
        while (!int.TryParse(Console.ReadLine(), out index) || index <= 0)
        {
            Console.Write("Zehmet olmasa duzgun reqem daxil edin: ");
        }

        return index;
    }

    // ===============================
    // AD və SOYADLARI DAXİL ETDİRƏN FUNKSİYA
    // ===============================
    static void Melumatlarindaxiledilmesi()
    {
        for (int i = 0; i < index; i++)
        {
            // ---------- AD ----------
            while (true)
            {
                Console.Write("Ad daxil edin: ");
                ad = Console.ReadLine();

                // Ad boş olmamalıdır və hərflə başlamalıdır
                if (!string.IsNullOrEmpty(ad) && char.IsLetter(ad[0]))
                {
                    adlar.Add(ad);
                    break;
                }
                else
                {
                    Console.WriteLine("Melumati duzgun daxil edin!");
                }
            }

            // ---------- SOYAD ----------
            while (true)
            {
                Console.Write("Soyadini daxil edin: ");
                soyad = Console.ReadLine();

                // Soyad boş olmamalıdır və hərflə başlamalıdır
                if (!string.IsNullOrEmpty(soyad) && char.IsLetter(soyad[0]))
                {
                    soyadlar.Add(soyad);
                    break;
                }
                else
                {
                    Console.WriteLine("Melumati duzgun daxil edin!");
                }
            }
        }
    }
}

// ===============================
// USER SINIFI
// ===============================
class User
{
    // ===============================
    // USERINFO STRUKTURU
    // ===============================
    public struct UserInfo
    {
        // PRIVATE FIELD-lər (gizli dəyişənlər)
        private List<string> _adlar;
        private List<string> _soyadlar;

        // ===============================
        // GET / SET PROPERTY-lər
        // ===============================

        // Adlar üçün property
        public List<string> Adlar
        {
            get { return _adlar; }   // Dəyəri qaytarır
            set { _adlar = value; }  // Dəyəri təyin edir
        }

        // Soyadlar üçün property
        public List<string> Soyadlar
        {
            get { return _soyadlar; }
            set { _soyadlar = value; }
        }

        // ===============================
        // KONSTRUKTOR
        // ===============================
        public UserInfo(List<string> adlar, List<string> soyadlar)
        {
            _adlar = adlar;
            _soyadlar = soyadlar;
        }

        // ===============================
        // MƏLUMATLARI ÇAP EDƏN FUNKSİYA
        // ===============================
        public void Print()
        {
            for (int i = 0; i < Adlar.Count; i++)
            {
                Console.WriteLine($"Ad: {Adlar[i]}, Soyad: {Soyadlar[i]}");
            }
        }
    }
}

