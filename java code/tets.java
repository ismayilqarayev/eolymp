import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main {
    static List<String> adlar = new ArrayList<>();
    static List<Integer> yaslar = new ArrayList<>();
    static List<Person> people = new ArrayList<>();
    static int say;

    public static void main(String[] args) {
        melumatlariDaxilEt1();
        melumatlariDaxilEt2();

        for (int i = 0; i < say; i++) {
            people.add(new Person(adlar.get(i), yaslar.get(i)));
        }

        for (Person person : people) {
            person.print();
        }
    }

    public static void melumatlariDaxilEt1() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Neçə nəfərin məlumatını daxil edəcəksiniz?");
        while (!sc.hasNextInt() || (say = sc.nextInt()) <= 0) {
            System.out.println("Zəhmət olmasa düzgün bir ədəd daxil edin:");
            sc.nextLine(); // Girişdən qalan artıq simvolları təmizlə
        }
        sc.nextLine(); // Line break-i təmizləyir
    }

    public static void melumatlariDaxilEt2() {
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < say; i++) {
            System.out.println("Ad daxil edin:");
            String ad = sc.nextLine();
            adlar.add(ad);

            System.out.println("Yaş daxil edin:");
            int yas;
            while (!sc.hasNextInt() || (yas = sc.nextInt()) <= 0) {
                System.out.println("Zəhmət olmasa düzgün bir yaş daxil edin:");
                sc.nextLine(); // Girişdən qalan artıq simvolları təmizlə
            }
            yaslar.add(yas);
            sc.nextLine(); // Line break-i təmizləyir
        }
    }

    static class Person {
        private String ad;
        private int yas;

        public Person(String ad, int yas) {
            this.ad = ad;
            this.yas = yas;
        }

        public void print() {
            System.out.println("Ad: " + ad + ", Yaş: " + yas);
        }
    }
}