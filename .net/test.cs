
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

