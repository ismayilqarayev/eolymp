import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    private static Scanner sc = new Scanner(System.in);
    private static List<User> users = new ArrayList<>();
    private static int say;

    public static void main(String[] args) {
        daxilEdilecekSayiAl();
        melumatlariDaxilEt();
        capEt();
    }

    private static void daxilEdilecekSayiAl() {
        while (true) {
            System.out.print("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
            try {
                say = Integer.parseInt(sc.nextLine());
                if (say > 0) {
                    break;
                }
                System.out.println("Ədəd 0-dan böyük olmalıdır.");
            } catch (NumberFormatException e) {
                System.out.println("Zəhmət olmasa düzgün ədəd daxil edin.");
            }
        }
    }

    private static void melumatlariDaxilEt() {
        for (int i = 0; i < say; i++) {
            System.out.println("\n" + (i + 1) + "-ci istifadəçi:");

            String ad = adAl();
            String ataAdi = adAl("Ata adi");
            String email = emailAl();
            String telefon = telefonAl();
            int yas = yasAl();

            users.add(new User(ad, ataAdi, email, telefon, yas));
        }
    }

    private static String adAl() {
        return adAl("Ad");
    }

    private static String adAl(String mesaj) {
        while (true) {
            System.out.print(mesaj + " daxil edin: ");
            String input = sc.nextLine();
            if (input.matches("[a-zA-ZəğıöşçƏĞİÖŞÇ]+")) {
                return input;
            }
            System.out.println("Yalnız hərflərdən ibarət olmalıdır.");
        }
    }

    private static String emailAl() {
        while (true) {
            System.out.print("Email daxil edin: ");
            String input = sc.nextLine();
            if (input.contains("@") && input.contains(".")) {
                return input;
            }
            System.out.println("Email düzgün deyil.");
        }
    }

    private static String telefonAl() {
        while (true) {
            System.out.print("Telefon nömrəsi daxil edin (10 rəqəm): ");
            String input = sc.nextLine();
            if (input.matches("\\d{10}")) {
                return input;
            }
            System.out.println("Telefon nömrəsi düzgün deyil.");
        }
    }

    private static int yasAl() {
        while (true) {
            System.out.print("Yaş daxil edin: ");
            try {
                int yas = Integer.parseInt(sc.nextLine());
                if (yas > 0) {
                    return yas;
                }
                System.out.println("Yaş 0-dan böyük olmalıdır.");
            } catch (NumberFormatException e) {
                System.out.println("Düzgün yaş daxil edin.");
            }
        }
    }

    private static void capEt() {
        System.out.println("\nDaxil edilən istifadəçilər:");
        for (User user : users) {
            user.printInfo();
        }
    }
}
