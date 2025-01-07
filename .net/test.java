import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Program {

    static List<String> adlar = new ArrayList<>();
    static List<Integer> yaslar = new ArrayList<>();
    static int say = 0;

    public static void main(String[] args) {
        Neceneferindaxiledilmesi(adlar, yaslar);
        MelumatlariDaxilet(adlar, yaslar, say);

        Konstruktor konstruktor = new Konstruktor(adlar, yaslar);
        konstruktor.print();
    }

    public static void Neceneferindaxiledilmesi(List<String> adlar, List<Integer> yaslar) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");

        while (true) {
            if (scanner.hasNextInt()) {
                say = scanner.nextInt();
                if (say > 0) {
                    break;
                }
            } else {
                scanner.next(); // Clear the invalid input
            }
            System.out.println("Zəhmət olmasa düzgün bir ədəd daxil edin:");
        }
    }

    public static void MelumatlariDaxilet(List<String> adlar, List<Integer> yaslar, int say) {
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < say; i++) {
            System.out.println("Ad daxil etin: ");
            String ad;
            while (true) {
                ad = scanner.nextLine();
                if (!ad.isEmpty() && Character.isLetter(ad.charAt(0))) {
                    break;
                }
                System.out.println("Zəhmət olmasa düzgün bir ad daxil edin: ");
            }
            adlar.add(ad);

            System.out.println("Yaş daxil etin: ");
            int yas;
            while (true) {
                if (scanner.hasNextInt()) {
                    yas = scanner.nextInt();
                    if (yas > 0) {
                        break;
                    }
                } else {
                    scanner.next(); // Clear the invalid input
                }
                System.out.println("Zəhmət olmasa düzgün bir yaş daxil edin: ");
            }
            yaslar.add(yas);
        }
    }

    static class Konstruktor {
        private List<String> adlar;
        private List<Integer> yaslar;

        public Konstruktor(List<String> adlar, List<Integer> yaslar) {
            this.adlar = adlar;
            this.yaslar = yaslar;
        }

        public void print() {
            for (int i = 0; i < adlar.size(); i++) {
                System.out.println(adlar.get(i) + ", Yaş: " + yaslar.get(i));
            }
        }
    }
}
