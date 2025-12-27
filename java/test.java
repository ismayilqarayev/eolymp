class User {
    private String ad;
    private String ataAdi;
    private String email;
    private long telefon;
    private int yas;

    public User(String ad, String ataAdi, String email, long telefon, int yas){
        this.ad = ad;
        this.ataAdi = ataAdi;
        this.email = email;
        this.telefon = telefon;
        this.yas = yas;
    }

    public void print(){
        System.out.println(
             "Ad: " + ad +
            ", Ata adı: " + ataAdi +
            ", Telefon: " + telefon +
            ", Email: " + email +
            ", Yaş: " + yas
        )
    }
}

public class Main{
    static List<User> users = new ArrayList<>();
    static int say = 0;
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args){
        neceneferinDaxilEdilmesi();
        melumatlarinDaxilEdilmesi();
    }

    static void neceneferinDaxilEdilmesi(){
        System.out.print("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ")
        while(true){
            try{
                say = Integer.parseInt(scanner.nextLine());
                if (say > 0) break;
            }
        }
    }

    static void melumatlarinDaxilEdilmesi(){

    }

    static String daxilEt(){

    }
}
