import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

// İstifadəçi sinfi – istifadəçi məlumatlarını saxlamaq üçün
class Istifadeci {

    private final String ad;
    private final String ataAdi;
    private final String email;
    private final long telefon;
    private final int yas;

    public Istifadeci(String ad, String ataAdi, String email, long telefon, int yas) {
        this.ad = ad;
        this.ataAdi = ataAdi;
        this.email = email;
        this.telefon = telefon;
        this.yas = yas;
    }

    public String getAd() {
        return ad;
    }

    public String getAtaAdi() {
        return ataAdi;
    }

    public String getEmail() {
        return email;
    }

    public long getTelefon() {
        return telefon;
    }

    public int getYas() {
        return yas;
    }

    @Override
    public String toString() {
        return "Ad: " + ad +
               ", Ata adı: " + ataAdi +
               ", Telefon: " + telefon +
               ", Email: " + email +
               ", Yaş: " + yas;
    }
}

public class Main {

    private static final List<Istifadeci> istifadeciler = new ArrayList<>();
    private static final BufferedReader oxucu =
            new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int say = istifadeciSayiniOxu();
        istifadecileriDaxilEt(say);

        System.out.println("\nDaxil edilən istifadəçilər:");
        for (Istifadeci istifadeci : istifadeciler) {
            System.out.println(istifadeci);
        }
    }

    // Neçə nəfər məlumat daxil edəcəyini soruşur
    private static int istifadeciSayiniOxu() throws IOException {
        int say;

        while (true) {
            System.out.print("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
            try {
                say = Integer.parseInt(oxucu.readLine());
                if (say > 0) {
                    return say;
                }
            } catch (NumberFormatException ignored) {
            }
            System.out.println("Düzgün müsbət ədəd daxil edin.");
        }
    }

    // İstifadəçilərin məlumatlarını oxuyur
    private static void istifadecileriDaxilEt(int say) throws IOException {
        for (int i = 0; i < say; i++) {

            String ad = metinOxu("Ad");
            String ataAdi = metinOxu("Ata adı");
            String email = emailOxu();
            long telefon = telefonOxu();
            int yas = yasOxu();

            istifadeciler.add(new Istifadeci(ad, ataAdi, email, telefon, yas));
        }
    }

    // Boş olmayan mətn oxuyur
    private static String metinOxu(String sahə) throws IOException {
        while (true) {
            System.out.print(sahə + " daxil edin: ");
            String daxilEdilen = oxucu.readLine();
            if (!daxilEdilen.isBlank() && Character.isLetter(daxilEdilen.charAt(0))) {
                return daxilEdilen;
            }
        }
    }

    // Email yoxlayır
    private static String emailOxu() throws IOException {
        while (true) {
            System.out.print("E-poçt ünvanı daxil edin: ");
            String email = oxucu.readLine();
            if (email.contains("@") && email.contains(".")) {
                return email;
            }
        }
    }

    // Telefon nömrəsini yoxlayır (10 rəqəm)
    private static long telefonOxu() throws IOException {
        while (true) {
            System.out.print("Telefon nömrəsi daxil edin: ");
            String daxilEdilen = oxucu.readLine();
            if (daxilEdilen.matches("\\d{10}")) {
                return Long.parseLong(daxilEdilen);
            }
        }
    }

    // Yaşı yoxlayır
    private static int yasOxu() throws IOException {
        while (true) {
            System.out.print("Yaş daxil edin: ");
            try {
                int yas = Integer.parseInt(oxucu.readLine());
                if (yas > 0) {
                    return yas;
                }
            } catch (NumberFormatException ignored) {
            }
        }
    }
}
