using System;
using System.Collections.Generic;

class Program
{
    static List<string> melumatlar_text = new List<string>();
    static List<int> melumatlar_number = new List<int>();
    static int say = 0;
    
    public static void Main(string[] args)
    {
        Melumatlarindaxiledilmesi(melumatlar_text, melumatlar_number, say);
        Melumatlarindaxiledilmesi2(melumatlar_text, melumatlar_number, say);
    }

    public static void Melumatlarindaxiledilmesi(List<string> melumatlar_text, List<int> melumatlar_number, int say)
    {
        Console.WriteLine("Neçə nəfərin məlumatını daxil edəcəksiniz?");
        while(!int.TryParse(Console.ReadLine(), out int say) || say < 0)
        {
            Console.WriteLine("Yanlış daxil etdiniz. Lutfən yenidən daxil edin.");
        }

        //--------------------------------------------------------------

        Console.WriteLine("Neçə nəfərin məlumatını daxil edəcəksiniz?")
        int n = int.Parse(Console.ReadLine());

        for(int i = 0; i < n; i++)
        {
            Console.WriteLine("Məlumatınızı daxil edin: ");
            string melumat = Console.ReadLine();
            melumatlar_text.Add(melumat);
        }
    }

    public static void Melumatlarindaxiledilmesi2(List<string> melumatlar_text, List<int> melumatlar_number, int say)
    {
        for(int )
        {

        }
    }
}