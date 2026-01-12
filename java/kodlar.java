import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.function.Predicate;

/*
 ============================================================================
 User sinfi
 ----------------------------------------------------------------------------
 Bu sinif bir istifadəçiyə aid olan bütün məlumatları saxlayır.
 Hər bir User obyekti real həyatda bir nəfəri təmsil edir.
 ============================================================================
 */
class User {

    // İstifadəçinin adı (məs: Ravan)
    private String ad;

    // İstifadəçinin ata adı (məs: Elçin)
    private String ataAdi;

    // İstifadəçinin e-poçt ünvanı
    private String email;

    // İstifadəçinin telefon nömrəsi (10 rəqəm)
    private long telefon;

    // İstifadəçinin yaşı
    private int yas;

    /*
     ------------------------------------------------------------------------
     Konstruktor
     ------------------------------------------------------------------------
     Bu metod obyekt yaradılarkən avtomatik işləyir.
     new User(...) yazıldıqda bu konstruktor çağırılır.
     Daxil edilən dəyərlər sinfin field-larına mənimsədilir.
     ------------------------------------------------------------------------
     */
    public User(String ad, String ataAdi, String email, long telefon, int yas) {
        this.ad = ad;
        this.ataAdi = ataAdi;
        this.email = email;
        this.telefon = telefon;
        this.yas = yas;
    }

    /*
     ------------------------------------------------------------------------
     printInfo metodu
     ------------------------------------------------------------------------
     İstifadəçiyə aid bütün məlumatları konsola çıxarır.
     ------------------------------------------------------------------------
     */
    public void printInfo() {
        System.out.println(
                "Ad: " + ad +
                ", Ata adı: " + ataAdi +
                ", Telefon: " + telefon +
                ", Email: " + email +
                ", Yaş: " + yas
        );
    }
}

/*
 ============================================================================
 Main sinfi
 ----------------------------------------------------------------------------
 Proqramın işlədiyi əsas sinifdir.
 Java proqramı məhz buradan başlayır.
 ============================================================================
 */
public class Main {

    /*
     Scanner obyekti
     Klaviaturadan məlumat oxumaq üçün istifadə olunur
     */
    private static final Scanner scanner = new Scanner(System.in);

    /*
     Bütün istifadəçiləri saxlamaq üçün siyahı
     ArrayList dinamik ölçülüdür (istədiyimiz qədər artıb-azala bilər)
     */
    private static final List<User> users = new ArrayList<>();

    /*
     Neçə istifadəçi daxil ediləcəyini saxlayan dəyişən
     */
    private static int count;

    /*
     ------------------------------------------------------------------------
     main metodu
     ------------------------------------------------------------------------
     Java proqramının başlanğıc nöqtəsidir.
     Program işə düşən kimi ilk bu metod çağırılır.
     ------------------------------------------------------------------------
     */
    public static void main(String[] args) {

        // İstifadəçidən neçə nəfər məlumat daxil ediləcəyini soruşuruq
        readUserCount();

        // Həmin sayda istifadəçinin məlumatlarını daxil edirik
        readUsers();

        // Daxil edilən bütün istifadəçiləri ekrana çıxarırıq
        printUsers();
    }

    /*
     ------------------------------------------------------------------------
     readUserCount metodu
     ------------------------------------------------------------------------
     İstifadəçidən müsbət tam ədəd tələb edir.
     Səhv daxil edilərsə, yenidən soruşur.
     ------------------------------------------------------------------------
     */
    private static void readUserCount() {

        while (true) {
            System.out.print("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");

            try {
                // String olaraq oxuyub int-ə çeviririk
                count = Integer.parseInt(scanner.nextLine());

                // Əgər müsbət ədəddirsə, metodu bitir
                if (count > 0) {
                    return;
                }

            } catch (NumberFormatException e) {
                // Əgər hərf və ya səhv format daxil edilərsə
            }

            System.out.println("Xəta! Zəhmət olmasa müsbət bir tam ədəd daxil edin.");
        }
    }

    /*
     ------------------------------------------------------------------------
     readUsers metodu
     ------------------------------------------------------------------------
     Daxil edilən say qədər istifadəçi məlumatlarını oxuyur.
     Hər dövrdə yeni User obyekti yaradılır.
     ------------------------------------------------------------------------
     */
    private static void readUsers() {

        for (int i = 0; i < count; i++) {

            System.out.println("\n" + (i + 1) + "-ci istifadəçi məlumatları:");

            // Ad oxunur və yoxlanılır
            String ad = readInput(
                    "Ad",
                    input -> !input.isBlank() && Character.isLetter(input.charAt(0))
            );

            // Ata adı oxunur və yoxlanılır
            String ataAdi = readInput(
                    "Ata adı",
                    input -> !input.isBlank() && Character.isLetter(input.charAt(0))
            );

            // Email yoxlanır (@ və . olmalıdır)
            String email = readInput(
                    "E-poçt",
                    input -> input.contains("@") && input.contains(".")
            );

            // Telefon yalnız 10 rəqəmdən ibarət olmalıdır
            long telefon = Long.parseLong(
                    readInput(
                            "Telefon (10 rəqəm)",
                            input -> input.matches("\\d{10}")
                    )
            );

            // Yaş müsbət ədəd olmalıdır
            int yas = Integer.parseInt(
                    readInput(
                            "Yaş",
                            input -> input.matches("\\d+") && Integer.parseInt(input) > 0
                    )
            );

            // Yeni istifadəçi obyekti yaradılır və siyahıya əlavə edilir
            users.add(new User(ad, ataAdi, email, telefon, yas));
        }
    }

    /*
     ------------------------------------------------------------------------
     printUsers metodu
     ------------------------------------------------------------------------
     Siyahıdakı bütün istifadəçiləri ekrana çıxarır.
     ------------------------------------------------------------------------
     */
    private static void printUsers() {

        System.out.println("\nDaxil edilən istifadəçilər:");

        for (User user : users) {
            user.printInfo();
        }
    }

    /*
     ------------------------------------------------------------------------
     readInput metodu
     ------------------------------------------------------------------------
     Universal input oxuma metodudur.
     Predicate vasitəsilə daxil edilən məlumat yoxlanılır.
     Düzgün deyilsə, yenidən soruşulur.
     ------------------------------------------------------------------------
     */
    private static String readInput(String message, Predicate<String> validator) {

        String input;

        do {
            System.out.print(message + " daxil edin: ");
            input = scanner.nextLine();
        }
        while (!validator.test(input)); // şərt ödənməsə, təkrar soruşulur

        return input;
    }
}
