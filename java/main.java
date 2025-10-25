import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    static List<String> adlar = new ArrayList<>();
    static List<Integer> yaslar = new ArrayList<>();
    static int say = 0;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        neceneferinDaxilEdilmesi(scanner);
        melumatlariDaxilEt(scanner);

        Konstruktor konstruktor = new Konstruktor(adlar, yaslar);
        konstruktor.print();

        scanner.close();
    }

    public static void neceneferinDaxilEdilmesi(Scanner scanner) {
        System.out.println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz?");

        while (true) {
            try {
                say = Integer.parseInt(scanner.nextLine());
                if (say > 0) break;
                else System.out.println("Yenidən düzgün bir ədəd daxil et:");
            } catch (NumberFormatException e) {
                System.out.println("Yenidən düzgün bir ədəd daxil et:");
            }
        }
    }

    public static void melumatlariDaxilEt(Scanner scanner) {
        for (int i = 0; i < say; i++) {
            System.out.print("Ad daxil edin: ");
            String ad = scanner.nextLine();
            adlar.add(ad);

            System.out.print("Yaş daxil edin: ");
            int yas = Integer.parseInt(scanner.nextLine());
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
                System.out.println(adlar.get(i) + ", Yaş " + yaslar.get(i));
            }
        }
    }
}
