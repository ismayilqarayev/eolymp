import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main{
    static List<String> adlar = new ArrayList<>();
    static List<String> soyadlar = new ArrayList<>();
    static List<String> ata_adi = new ArrayList<>();
    static List<String> yaslar = new ArrayList<>();
    static List<String> telefon = new ArrayList<>();
    static int say;

    public static void main(String[] args) {
        DaxilEdinlenMelumatlar1(adlar, soyadlar, ata_adi, yaslar, telefon, say);
        DaxilEdinlenMelumatlar2(adlar, soyadlar, ata_adi, yaslar, telefon, say);
        DaxilEdinlenMelumatlar3(adlar, soyadlar, ata_adi, yaslar, telefon, say);
        DaxilEdinlenMelumatlar4(adlar, soyadlar, ata_adi, yaslar, telefon, say);
        DaxilEdinlenMelumatlar5(adlar, soyadlar, ata_adi, yaslar, telefon, say);
        DaxilEdinlenMelumatlarSayi(adlar, soyadlar, ata_adi, yaslar, telefon, say);
        MelumatlariGoster(adlar, soyadlar, ata_adi, yaslar, telefon, say);


    }

    public static void DaxilEdinlenMelumatlarSayi( List<String> adlar,
                                                   List<String> soyadlar,
                                                   List<String> ata_adi,
                                                   List<String> yaslar,
                                                   List<String> telefon,
                                                   int say) {
        Scanner sc = new Scanner(System.in);
        System.out.println("nece neferin melumationi Daxil etmek isteyirsiniz: ");
        while(!sc.hasNextInt() || (say = sc.nextInt()) <= 0) {

        }
    }

    public static void DaxilEdinlenMelumatlar1(List<String> adlar,
                                               List<String> soyadlar,
                                               List<String> ata_adi,
                                               List<String> yaslar,
                                               List<String> telefon,
                                               int say) {


    }

    public static void DaxilEdinlenMelumatlar2(List<String> adlar,
                                               List<String> soyadlar,
                                               List<String> ata_adi,
                                               List<String> yaslar,
                                               List<String> telefon,
                                               int say) {

    }

    public static void DaxilEdinlenMelumatlar3(List<String> adlar,
                                               List<String> soyadlar,
                                               List<String> ata_adi,
                                               List<String> yaslar,
                                               List<String> telefon,
                                               int say) {

    }

    public static void DaxilEdinlenMelumatlar4(List<String> adlar,
                                               List<String> soyadlar,
                                               List<String> ata_adi,
                                               List<String> yaslar,
                                               List<String> telefon,
                                               int say) {

    }

    public static void DaxilEdinlenMelumatlar5(List<String> adlar,
                                               List<String> soyadlar,
                                               List<String> ata_adi,
                                               List<String> yaslar,
                                               List<String> telefon,
                                               int say) {

    }

    public static void MelumatlariGoster(List<String> adlar,
                                         List<String> soyadlar,
                                         List<String> ata_adi,
                                         List<String> yaslar,
                                         List<String> telefon,
                                         int say) {

    }

}