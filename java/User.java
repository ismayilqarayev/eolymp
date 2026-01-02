public class User {
    private String ad;
    private String ataAdi;
    private String email;
    private String telefon;
    private int yas;

    public User(String ad, String ataAdi, String email, String telefon, int yas) {
        this.ad = ad;
        this.ataAdi = ataAdi;
        this.email = email;
        this.telefon = telefon;
        this.yas = yas;
    }

    public void printInfo() {
        System.out.println(
                "Ad: " + ad +
                ", Ata adi: " + ataAdi +
                ", Telefon: " + telefon +
                ", Email: " + email +
                ", Yas: " + yas
        );
    }
}
