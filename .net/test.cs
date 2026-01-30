
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

//--------------------------------------------------------

//26.01.2026

using System;
using System.Collections.Generic;

class Program
{
    static List<string> adlar = new List<string>();
    static List<string> ataAdlari = new List<string>();
    static List<string> emaillar = new List<string>();
    static List<int> yaslar = new List<int>();
    static List<long> telefonlar = new List<long>();

    static string ad;
    static string ataAdi;
    static string email;
    static long telefon;
    static int yas;

    static int say;

    static void Main(string[] args)
    {
        while (true)
        {
            Console.WriteLine("\n1. Əlavə et");
            Console.WriteLine("2. Siyahıya bax");
            Console.WriteLine("3. Axtar");
            Console.WriteLine("4. Sil");
            Console.WriteLine("5. Redaktə et");
            Console.WriteLine("0. Çıxış");

            Console.Write("Seçim: ");
            string secim = Console.ReadLine();

            switch (secim)
            {
                case "1":
                    Neceneferindaxiledilmesi();
                    Melumatlarindaxiledilmesi();
                    break;

                case "2":
                    new Konstruktor(adlar, ataAdlari, emaillar, telefonlar, yaslar).Print();
                    break;

                case "3":
                    Axtar();
                    break;

                case "4":
                    Sil();
                    break;

                case "5":
                    Redakte();
                    break;

                case "0":
                    return;

                default:
                    Console.WriteLine("Səhv seçim!");
                    break;
            }
        }
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

            while (true)
            {
                Console.WriteLine("Telefon nomresini daxil edin: ");
                var number = Console.ReadLine();

                if (number.Length == 10 && long.TryParse(number, out telefon))
                {
                    telefonlar.Add(telefon);
                    break;
                }
                else
                {
                    Console.WriteLine("Melumati duzgun daxil edin: ");
                }
            }

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

    static void Axtar()
    {
        Console.Write("Ad daxil edin: ");
        string a = Console.ReadLine();

        for (int i = 0; i < adlar.Count; i++)
        {
            if (adlar[i].ToLower() == a.ToLower())
            {
                Console.WriteLine($"Ad: {adlar[i]}, Ata adı: {ataAdlari[i]}, Telefon: {telefonlar[i]}, Email: {emaillar[i]}, Yaş: {yaslar[i]}");
                return;
            }
        }
        Console.WriteLine("Tapılmadı!");
    }

    static void Sil()
    {
        Console.Write("Silinəcək ad: ");
        string a = Console.ReadLine();

        for (int i = 0; i < adlar.Count; i++)
        {
            if (adlar[i].ToLower() == a.ToLower())
            {
                adlar.RemoveAt(i);
                ataAdlari.RemoveAt(i);
                emaillar.RemoveAt(i);
                telefonlar.RemoveAt(i);
                yaslar.RemoveAt(i);
                Console.WriteLine("Silindi!");
                return;
            }
        }
        Console.WriteLine("Tapılmadı!");
    }

    static void Redakte()
    {
        Console.Write("Redaktə ediləcək ad: ");
        string a = Console.ReadLine();

        for (int i = 0; i < adlar.Count; i++)
        {
            if (adlar[i].ToLower() == a.ToLower())
            {
                Console.Write("Yeni ad: ");
                adlar[i] = Console.ReadLine();

                Console.Write("Yeni ata adı: ");
                ataAdlari[i] = Console.ReadLine();

                Console.Write("Yeni email: ");
                emaillar[i] = Console.ReadLine();

                Console.Write("Yeni telefon: ");
                telefonlar[i] = long.Parse(Console.ReadLine());

                Console.Write("Yeni yaş: ");
                yaslar[i] = int.Parse(Console.ReadLine());

                Console.WriteLine("Yeniləndi!");
                return;
            }
        }
        Console.WriteLine("Tapılmadı!");
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
            List<int> yaslar)
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


//-----------------------------------------------

using System;
using System.Collections.Generic;

namespace OOPContactSystem
{
    // ================= PERSON CLASS =================
    class Person
    {
        public string Ad { get; set; }
        public string AtaAdi { get; set; }
        public string Email { get; set; }
        public long Telefon { get; set; }
        public int Yas { get; set; }

        public void Print()
        {
            Console.WriteLine($"Ad: {Ad}, Ata adı: {AtaAdi}, Telefon: {Telefon}, Email: {Email}, Yaş: {Yas}");
        }
    }

    // ================= MANAGER CLASS =================
    class PersonManager
    {
        private List<Person> persons = new List<Person>();

        public void AddPerson(Person p)
        {
            persons.Add(p);
        }

        public void ShowAll()
        {
            if (persons.Count == 0)
            {
                Console.WriteLine("Siyahı boşdur.");
                return;
            }

            foreach (var p in persons)
                p.Print();
        }

        public void Search(string ad)
        {
            foreach (var p in persons)
            {
                if (p.Ad.Equals(ad, StringComparison.OrdinalIgnoreCase))
                {
                    p.Print();
                    return;
                }
            }
            Console.WriteLine("Tapılmadı!");
        }

        public void Delete(string ad)
        {
            for (int i = 0; i < persons.Count; i++)
            {
                if (persons[i].Ad.Equals(ad, StringComparison.OrdinalIgnoreCase))
                {
                    persons.RemoveAt(i);
                    Console.WriteLine("Silindi!");
                    return;
                }
            }
            Console.WriteLine("Tapılmadı!");
        }

        public void Update(string ad)
        {
            foreach (var p in persons)
            {
                if (p.Ad.Equals(ad, StringComparison.OrdinalIgnoreCase))
                {
                    Console.Write("Yeni ad: ");
                    p.Ad = Console.ReadLine();

                    Console.Write("Yeni ata adı: ");
                    p.AtaAdi = Console.ReadLine();

                    Console.Write("Yeni email: ");
                    p.Email = Console.ReadLine();

                    Console.Write("Yeni telefon: ");
                    p.Telefon = long.Parse(Console.ReadLine());

                    Console.Write("Yeni yaş: ");
                    p.Yas = int.Parse(Console.ReadLine());

                    Console.WriteLine("Yeniləndi!");
                    return;
                }
            }
            Console.WriteLine("Tapılmadı!");
        }
    }

    // ================= MAIN PROGRAM =================
    class Program
    {
        static void Main()
        {
            PersonManager manager = new PersonManager();

            while (true)
            {
                Console.WriteLine("\n1. Əlavə et");
                Console.WriteLine("2. Siyahıya bax");
                Console.WriteLine("3. Axtar");
                Console.WriteLine("4. Sil");
                Console.WriteLine("5. Redaktə et");
                Console.WriteLine("0. Çıxış");

                Console.Write("Seçim: ");
                string choice = Console.ReadLine();

                switch (choice)
                {
                    case "1":
                        AddPersonUI(manager);
                        break;

                    case "2":
                        manager.ShowAll();
                        break;

                    case "3":
                        Console.Write("Ad daxil edin: ");
                        manager.Search(Console.ReadLine());
                        break;

                    case "4":
                        Console.Write("Silinəcək ad: ");
                        manager.Delete(Console.ReadLine());
                        break;

                    case "5":
                        Console.Write("Redaktə ediləcək ad: ");
                        manager.Update(Console.ReadLine());
                        break;

                    case "0":
                        return;

                    default:
                        Console.WriteLine("Səhv seçim!");
                        break;
                }
            }
        }

        static void AddPersonUI(PersonManager manager)
        {
            Person p = new Person();

            Console.Write("Ad: ");
            p.Ad = Console.ReadLine();

            Console.Write("Ata adı: ");
            p.AtaAdi = Console.ReadLine();

            Console.Write("Email: ");
            p.Email = Console.ReadLine();

            Console.Write("Telefon: ");
            p.Telefon = long.Parse(Console.ReadLine());

            Console.Write("Yaş: ");
            p.Yas = int.Parse(Console.ReadLine());

            manager.AddPerson(p);
            Console.WriteLine("Əlavə edildi!");
        }
    }
}
