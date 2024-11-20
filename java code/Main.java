import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main{
    static List<String> adlar = new ArrayList<>();
    static List<String> soyadlar = new ArrayList<>();
    static List<String> ata_adi = new ArrayList<>();
    static List<Integer> yaslar = new ArrayList<>();
    static List<String> telefon = new ArrayList<>();
    static int say;

    public static void main(String[] args) {
        DaxilEdinlenMelumatlarSayi();
        DaxilEdinlenMelumatlar1();
        DaxilEdinlenMelumatlar2();
        DaxilEdinlenMelumatlar3();
        DaxilEdinlenMelumatlar4();
        DaxilEdinlenMelumatlar5();


        for (int i = 0; i < say; i++){
            Person person = new Person(adlar.get(i), soyadlar.get(i), ata_adi.get(i), yaslar.get(i), telefon.get(i));
            person.print();
        }
    }

    public static void DaxilEdinlenMelumatlarSayi() {
        Scanner sc = new Scanner(System.in);
        System.out.println("nece neferin melumationi Daxil etmek isteyirsiniz: ");
        while(!sc.hasNextInt() || (say = sc.nextInt()) <= 0) {
            System.out.println("duzgun melumat daxil edin");
            sc.nextLine();
        }
    }

    public static void DaxilEdinlenMelumatlar1() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < say; i++){
            System.out.println("Ad: ");
            String ad = sc.nextLine();
            adlar.add(ad);
        }
    }

    public static void DaxilEdinlenMelumatlar2() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < say; i++){
            System.out.println("Soyad: ");
            String soyad = sc.nextLine();
            soyadlar.add(soyad);
        }
    }

    public static void DaxilEdinlenMelumatlar3() {

        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < say; i++){
            System.out.println("Ata adi: ");
            String ata = sc.nextLine();
            ata_adi.add(ata);
        }
    }

    public static void DaxilEdinlenMelumatlar4() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < say; i++){
            System.out.println("Yaş: ");
            int yas = sc.nextInt();
            yaslar.add(yas);
        }
    }

    public static void DaxilEdinlenMelumatlar5() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < say; i++){
            System.out.println("Telefon: ");
            String tel = sc.nextLine();
            telefon.add(tel);
        }
    }

    static class Person{
        private String ad;
        private String soyad;
        private String ata_adi;
        private int yas;
        private String telefon;

        public Person(String ad, String soyad, String ata_adi, Integer yas, String telefon) {
            this.ad = ad;
            this.soyad = soyad;
            this.ata_adi = ata_adi;
            this.yas = yas;
            this.telefon = telefon;
        }

        public void print(){
            System.out.println(ad + " " + soyad + " " + ata_adi + " " + yas + " " + telefon);
        }
    }
}