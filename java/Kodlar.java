import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.function.Predicate;

// User sinfi - İstifadəçi məlumatlarını saxlamaq üçün
class User {
    private String ad;
    private String ataAdi;
    private String email;
    private long telefon;
    private int yas;

    // Konstruktor
    public User(String ad, String ataAdi, String email, long telefon, int yas) {
        this.ad = ad;
        this.ataAdi = ataAdi;
        this.email = email;
        this.telefon = telefon;
        this.yas = yas;
    }

    // Məlumatları çap edən metod
    public void print() {
        System.out.println(
            "Ad: " + ad +
            ", Ata adı: " + ataAdi +
            ", Telefon: " + telefon +
            ", Email: " + email +
            ", Yaş: " + yas
        );
    }
}

public class Main {
    static List<User> users = new ArrayList<>();
    static int say = 0;
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        // 1. Neçə nəfər məlumat daxil ediləcəyini soruşuruq
        neceneferinDaxilEdilmesi();

        // 2. Məlumatları daxil edirik
        melumatlarinDaxilEdilmesi();

        // 3. Çap edirik
        System.out.println("\nDaxil edilən istifadəçilər:");
        for (User user : users) {
            user.print();
        }
    }

    static void neceneferinDaxilEdilmesi() {
        System.out.print("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
        while (true) {
            try {
                say = Integer.parseInt(scanner.nextLine());
                if (say > 0) break;
            } catch (NumberFormatException e) {
                // ignore
            }
            System.out.print("Yenidən düzgün bir ədəd daxil edin: ");
        }
    }

    static void melumatlarinDaxilEdilmesi() {
        for (int i = 0; i < say; i++) {
            String ad = daxilEt("Ad",
                    input -> !input.isEmpty() && Character.isLetter(input.charAt(0)));

            String ataAdi = daxilEt("Ata adı",
                    input -> !input.isEmpty() && Character.isLetter(input.charAt(0)));

            String email = daxilEt("E-poçt ünvanı",
                    input -> input.contains("@") && input.contains("."));

            long telefon = Long.parseLong(
                    daxilEt("Telefon nömrəsi",
                            input -> input.matches("\\d{10}"))
            );

            int yas = Integer.parseInt(
                    daxilEt("Yaş",
                            input -> input.matches("\\d+") && Integer.parseInt(input) > 0)
            );

            users.add(new User(ad, ataAdi, email, telefon, yas));
        }
    }

    static String daxilEt(String mesaj, Predicate<String> yoxlama) {
        String daxilEdilen;
        do {
            System.out.print(mesaj + " daxil edin: ");
            daxilEdilen = scanner.nextLine();
        } while (!yoxlama.test(daxilEdilen));
        return daxilEdilen;
    }
}
