
/////////////////////////////////////
/////////////////////////////////////
package java;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

//public class data {

    // **Məlumatların saxlanması üçün listlər**
    static List<String> adlar = new ArrayList<>();
    static List<String> ataAdlari = new ArrayList<>();
    static List<String> emaillar = new ArrayList<>();
    static List<Integer> yaslar = new ArrayList<>();
    static List<Long> telefonlar = new ArrayList<>();

    // **Müvəqqəti dəyişənlər**
    static String ad;
    static String ataAdi;
    static String email;
    static long telefon;
    static int yas;

    static int say = 0;

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        Neceneferindaxiledilmesi();
        Melumatlarindaxiledilmesi();
    }

    static int Neceneferindaxiledilmesi() {
        System.out.println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");

        while (true) {
            try {
                say = Integer.parseInt(sc.nextLine());
                if (say > 0) break;
            } catch (Exception e) {}

            System.out.println("Yenidən düzgün bir ədəd daxil edin: ");
        }
        return say;
    }

    static void Melumatlarindaxiledilmesi() {

        for (int i = 0; i < say; i++) {

            // Ad
            while (true) {
                System.out.println("Ad daxil edin: ");
                ad = sc.nextLine();

                if (ad != null && !ad.isEmpty() && Character.isLetter(ad.charAt(0))) {
                    adlar.add(ad);
                    break;
                } else {
                    System.out.println("Melumati duzgun daxil edin: ");
                }
            }

            // Ata adı
            while (true) {
                System.out.println("Ata adini daxil edin: ");
                ataAdi = sc.nextLine();

                if (ataAdi != null && !ataAdi.isEmpty() && Character.isLetter(ataAdi.charAt(0))) {
                    ataAdlari.add(ataAdi);
                    break;
                } else {
                    System.out.println("Məlumatı düzgün daxil edin: ");
                }
            }

            // Email
            while (true) {
                System.out.println("E-poçt ünvanını daxil edin: ");
                email = sc.nextLine();

                if (email.contains("@") && email.contains(".")) {
                    emaillar.add(email);
                    break;
                } else {
                    System.out.println("Yenidən düzgün bir e-poçt ünvanı daxil edin: ");
                }
            }

            // Telefon
            while (true) {
                System.out.println("Telefon nomresini daxil edin: ");
                String number = sc.nextLine();

                try {
                    telefon = Long.parseLong(number);
                    if (number.length() == 10) {
                        telefonlar.add(telefon);
                        break;
                    }
                } catch (Exception e) {}

                System.out.println("Melumati duzgun daxil edin: ");
            }

            // Yaş
            while (true) {
                System.out.println("Yaşı daxil edin: ");

                try {
                    yas = Integer.parseInt(sc.nextLine());
                    if (yas > 0) {
                        yaslar.add(yas);
                        break;
                    }
                } catch (Exception e) {}

                System.out.println("Yaşı düzgün daxil edin:");
            }
        }
    }
}

// User class
class User {

    static class Konstruktor {

        private final List<String> adlar;
        private final List<String> ataAdlari;
        private final List<String> emaillar;
        private final List<Long> telefonlar;
        private final List<Integer> yaslar;

        public Konstruktor(
                List<String> adlar,
                List<String> ataAdlari,
                List<String> emaillar,
                List<Long> telefonlar,
                List<Integer> yaslar
        ) {
            this.adlar = adlar;
            this.ataAdlari = ataAdlari;
            this.emaillar = emaillar;
            this.telefonlar = telefonlar;
            this.yaslar = yaslar;
        }

        public void Print() {
            for (int i = 0; i < adlar.size(); i++) {
                System.out.println(
                        "Ad: " + adlar.get(i) +
                                ", Ata adı: " + ataAdlari.get(i) +
                                ", Telefon: " + telefonlar.get(i) +
                                ", Email: " + emaillar.get(i) +
                                ", Yaş: " + yaslar.get(i)
                );
            }
        }
    }
}


//-----------------------------------------

// Student adlı class yaradılır
class Student {

    // Tələbənin adını saxlayan dəyişən
    String name;

    // Tələbənin yaşını saxlayan dəyişən
    int age;

    // Constructor
    // Student obyekti yaradılarkən avtomatik işləyir
    Student(String name, int age) {

        // this.name -> class daxilindəki dəyişəni göstərir
        // sağdakı name isə parametrdir
        this.name = name;

        // class daxilindəki age dəyişəninə parametr kimi gələn age verilir
        this.age = age;
    }
}


// Test adlı class
// Proqramın əsas işləmə hissəsi burada olacaq
class Test {

    // static metod yaradılır
    // Bu metod Student tipli obyekti parametr kimi qəbul edir
    static void printStudent(Student s) {

        // s -> metoda göndərilən Student obyektinin referensidir

        // s.name -> obyektin name dəyişəninə müraciət
        // s.age -> obyektin age dəyişəninə müraciət
        // ekrana tələbənin adı və yaşı çıxarılır
        System.out.println(s.name + " " + s.age);
    }

    // Proqramın başladığı əsas metod
    public static void main(String[] args) {

        // Student tipli obyekt yaradılır
        // new -> yaddaşda yeni obyekt yaradır
        // constructor çağırılır və "Ravan", 12 dəyərləri verilir
        Student st = new Student("Ravan", 12);

        // printStudent metodu çağırılır
        // st obyekti metoda parametr kimi göndərilir
        // metod daxilində bu obyekt s adı ilə istifadə olunur
        printStudent(st);
    }
}

//-----------------------------------------

// Student sinfi: bir tələbə obyekti üçün sahələr və metodlar
class Student {
    private String ad;  // ad sahəsi private, birbaşa xaricdən giriş yoxdur (inkapsulyasiya)

    // Konstruktor: yeni Student obyekti yaratmaq üçün istifadə olunur
    Student(String ad) {
        this.ad = ad;  // sahəni konstruktor parametri ilə doldururuq
    }

    // Getter metodu: ad sahəsini oxumaq üçün
    public String getAd(){
        return ad;
    }

    // Setter metodu: ad sahəsini dəyişmək üçün
    public void setAd(String ad){
        this.ad = ad;
    }
}

public class Main {
    // Metod obyekt qəbul edir və obyektin ad sahəsini dəyişdirir
    static void adDeyis(Student s, String yeniAd) {
        s.setAd(yeniAd);  // student obyektinin ad sahəsini dəyişdiririk
    }

    public static void main(String[] args) {
        // Yeni Student obyekti yaradılır
        Student s1 = new Student("Ravan");  
        System.out.println("Əvvəl: " + s1.getAd()); // Getter vasitəsilə adı ekrana çıxarır

        // Metod vasitəsilə obyektin adını dəyişdiririk
        adDeyis(s1, "Ismayil");  
        System.out.println("Sonra: " + s1.getAd()); // Yenilənmiş ad ekrana çıxarılır
    }
}

//----------------------------------------------------------


// Student sinfi - tələbə obyektini təsvir edir
class Student {

    // Sahə (encapsulation üçün private)
    private String name;

    // Konstruktor - obyekt yaradılarkən adı təyin edir
    public Student(String name){
        this.name = name;
    }

    // Getter - name sahəsini oxumaq üçün
    public String getName(){
        return name;
    }

    // Setter - name sahəsini dəyişmək üçün
    public void setName(String name){
        this.name = name;
    }

    // toString metodu - obyekti çap etmək üçün rahat üsul
    @Override
    public String toString() {
        return "Student name: " + name;
    }
}

public class Main {

    // Student obyektini qəbul edib adını dəyişən metod
    public static void rename(Student student, String newName) {
        student.setName(newName);
    }

    public static void main(String[] args) {

        // Yeni obyekt yaradılır
        Student student1 = new Student("John");

        // Obyekti çap edirik
        System.out.println(student1);

        // Adı dəyişirik
        rename(student1, "Doe");

        // Yenilənmiş obyekti çap edirik
        System.out.println(student1);
    }
}

//-------------------------------------------------


class Student {

    private String name;

    public Student(String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    @Override
    public String toString(){
        return name;
    }
}

public class Main {
    public static void rename(Student student, String newname){
        student.setName(newname);
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the name of the student: ");
        String StudentName = scanner.nextLine();

        Student student = new Student(StudentName);
        System.out.println("Current name: " + student);

        System.out.print("Enter the new name of the student: ");
        String newName = scanner.nextLine();

        rename(student, newName);
        System.out.println("New name: " + student);
    }
}

//------------------------------


class Student {

    private String name;

    public Student(String name){
        this.name = name;
    }

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    @Override
    public String toString(){
        return name;
    }
}

public class Main {

    static List<Student> students = new ArrayList<>();
    static Scanner scanner = new Scanner(System.in);

    // tələbə əlavə etmək
    public static void addStudent(){
        System.out.print("Tələbə adı daxil edin: ");
        String name = scanner.nextLine();

        students.add(new Student(name));
        System.out.println("Tələbə əlavə edildi.");
    }

    // tələbələri göstərmək
    public static void showStudents(){

        if(students.isEmpty()){
            System.out.println("Tələbə yoxdur.");
            return;
        }

        for(int i = 0; i < students.size(); i++){
            System.out.println(i + " - " + students.get(i));
        }
    }

    // ad dəyişmək
    public static void renameStudent(){
        showStudents();

        System.out.print("İndeks daxil edin: ");
        int index = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Yeni ad daxil edin: ");
        String newName = scanner.nextLine();

        students.get(index).setName(newName);
        System.out.println("Ad dəyişdirildi.");
    }

    // tələbə silmək
    public static void removeStudent(){
        showStudents();

        System.out.print("Silinəcək indeks: ");
        int index = scanner.nextInt();
        scanner.nextLine();

        students.remove(index);
        System.out.println("Tələbə silindi.");
    }

    public static void main(String[] args) {

        while(true){

            System.out.println("\n1 - Tələbə əlavə et");
            System.out.println("2 - Tələbələri göstər");
            System.out.println("3 - Ad dəyiş");
            System.out.println("4 - Tələbə sil");
            System.out.println("0 - Çıxış");

            System.out.print("Seçim: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch(choice){

                case 1:
                    addStudent();
                    break;

                case 2:
                    showStudents();
                    break;

                case 3:
                    renameStudent();
                    break;

                case 4:
                    removeStudent();
                    break;

                case 0:
                    System.out.println("Proqram bitdi.");
                    return;

                default:
                    System.out.println("Yanlış seçim.");
            }
        }
    }
}

//------------------------------
// Base class  
class Student {

    private String name;

    public Student(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void showInfo() {
        System.out.println("Student name: " + name);
    }
}

// Derived class
class GraduateStudent extends Student {

    private String university;

    public GraduateStudent(String name, String university) {
        super(name); // parent constructor
        this.university = university;
    }

    public String getUniversity() {
        return university;
    }

    public void setUniversity(String university) {
        this.university = university;
    }

    @Override
    public void showInfo() {
        System.out.println("Student name: " + getName());
        System.out.println("University: " + university);
    }
}

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        System.out.print("Enter university: ");
        String university = scanner.nextLine();

        GraduateStudent student = new GraduateStudent(name, university);

        student.showInfo();

        scanner.close();
    }
}

//Abtract class Student 
// Abstrakt sinif - birbaşa obyekt yaradıla bilməz,
//  yalnız miras almaq üçün istifadə olunur


abstract class Student {

    private String name;

    public Student(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public abstract void showInfo();
}

class GraduateStudent extends Student {

    private String university;

    public GraduateStudent(String name, String university) {
        super(name);
        this.university = university;
    }

    @Override
    public void showInfo() {
        System.out.println("Graduate Student: " + getName());
        System.out.println("University: " + university);
    }
}

class PhDStudent extends Student {

    private String researchField;

    public PhDStudent(String name, String researchField) {
        super(name);
        this.researchField = researchField;
    }

    @Override
    public void showInfo() {
        System.out.println("PhD Student: " + getName());
        System.out.println("Research Field: " + researchField);
    }
}

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        System.out.print("Enter university: ");
        String university = scanner.nextLine();

        Student student = new GraduateStudent(name, university);

        student.showInfo();

        System.out.println();

        Student phd = new PhDStudent("Nigar", "Artificial Intelligence");

        phd.showInfo();

        scanner.close();
    }
}

//-------------------------------------------

abstract class Student {

    private String name;

    public Student(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public abstract void showInfo();
}

class GraduateStudent extends Student {

    private String university;

    public GraduateStudent(String name, String university) {
        super(name);
        this.university = university;
    }

    @Override
    public void showInfo() {
        System.out.println("Graduate Student: " + getName());
        System.out.println("University: " + university);
    }
}

class PhDStudent extends Student {

    private String researchField;

    public PhDStudent(String name, String researchField) {
        super(name);
        this.researchField = researchField;
    }

    @Override
    public void showInfo() {
        System.out.println("PhD Student: " + getName());
        System.out.println("Research Field: " + researchField);
    }
}

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter graduate student name: ");
        String name = scanner.nextLine();

        System.out.print("Enter university: ");
        String university = scanner.nextLine();

        Student student = new GraduateStudent(name, university);

        student.showInfo();

        System.out.println();

        System.out.print("Enter PhD student name: ");
        String phdName = scanner.nextLine();

        System.out.print("Enter research field: ");
        String researchField = scanner.nextLine();

        Student phd = new PhDStudent(phdName, researchField);

        phd.showInfo();

        scanner.close();
    }
}


//--------------------------------------------
// Abstract class Student
// Bu sinif bir tələbənin ümumi xüsusiyyətlərini və davranışlarını təyin edir
// Abstract olduğu üçün birbaşa obyekt yaradıla bilməz
// Bu sinifdən törədilmiş siniflər öz spesifik xüsusiyyətlərini əlavə edə və showInfo metodunu implementasiya edə bilərlər
// Bu, polymorphism və inheritance konseptlərini nümayiş etdirir
// Student sinfi tələbənin adını saxlayır və showInfo metodunu abstrakt olaraq təyin edir
// GraduateStudent sinfi Student sinifindən törədilir və universitet məlumatını əlavə edir
// PhDStudent sinfi GraduateStudent sinifindən törədilir və tədqiqat
// yeni daha spesifik məlumat əlavə edir (tədqiqat mövzusu)
// yeni versiya yazdım daha aydın olsun deyə

package com.example;

import java.util.Scanner;

// Abstrakt sinif (Abstraction)
// Bu sinif birbaşa obyekt yaratmaq üçün deyil,
// digər siniflər üçün baza rolunu oynayır
abstract class Student {

    // Encapsulation (İnkapsulyasiya)
    // name dəyişəni private-dir — yalnız bu sinif daxilində əlçatandır
    private String name;

    // Konstruktor — sinif yaradılarkən name dəyəri mənimsədilir
    public Student(String name) {
        this.name = name;
    }

    // Getter — name dəyərini oxumaq üçün
    public String getName() { 
        return name; 
    }

    // Setter — name dəyərini dəyişmək üçün
    public void setName(String name) {
         this.name = name;
        }

    // Abstrakt metod — hər alt sinif öz implementasiyasını yazmalıdır
    public abstract void showInfo();
}

// Inheritance (İrsiyyət)
// GraduateStudent sinifi Student sinifindən miras alır
class GraduateStudent extends Student {

    // Bu sinifə məxsus sahə — universitetin adı
    private String university;

    // Konstruktor — name Student-ə, university isə bu sinifə mənimsədilir
    public GraduateStudent(String name, String university) {
        super(name); // Student sinifinin konstruktorunu çağırır
        this.university = university;
    }

    // Abstrakt metodun implementasiyası (Polymorphism)
    // Student sinifindəki showInfo() burada konkret şəkildə yazılır
    @Override
    public void showInfo() {
        // name-ə birbaşa yox, getter vasitəsilə müraciət edilir (Encapsulation)
        System.out.println("Name: " + getName());
        System.out.println("University: " + university);
    }
}

// Inheritance (İrsiyyət)
// PhDStudent sinifi GraduateStudent sinifindən miras alır
// Beləliklə Student → GraduateStudent → PhDStudent zənciri yaranır
class PhDStudent extends GraduateStudent {

    // Bu sinifə məxsus sahə — tədqiqat mövzusu
    private String researchTopic;

    // Konstruktor — name və university parent-ə ötürülür,
    // researchTopic isə bu sinifə mənimsədilir
    public PhDStudent(String name, String university, String researchTopic) {
        super(name, university); // GraduateStudent konstruktorunu çağırır
        this.researchTopic = researchTopic;
    }

    // Method Overriding (Polymorphism)
    // GraduateStudent-dəki showInfo() genişləndirilir
    @Override
    public void showInfo() {
        super.showInfo(); // Parent metodunu çağırır (name + university çap olunur)
        System.out.println("Research Topic: " + researchTopic); // əlavə məlumat
    }
}

public class Main {
    public static void main(String[] args) {

        // try-with-resources — Scanner avtomatik bağlanır, manual close lazım deyil
        try (Scanner scanner = new Scanner(System.in)) {

            // ── Graduate Student məlumatlarının daxil edilməsi ──────────────
            System.out.print("Enter the name of the graduate student: ");
            String gsName = scanner.nextLine();

            System.out.print("Enter the university of the graduate student: ");
            String gsUniversity = scanner.nextLine();

            // Polymorphism — Student tipli referensiya GraduateStudent obyektinə işarə edir
            Student graduateStudent = new GraduateStudent(gsName, gsUniversity);

            // showInfo() çağırılır — hansı sinifin metodu olduğu runtime-da müəyyən olunur
            graduateStudent.showInfo();

            // ── PhD Student məlumatlarının daxil edilməsi ───────────────────
            System.out.print("Enter the name of the PhD student: ");
            String phdName = scanner.nextLine();

            System.out.print("Enter the university of the PhD student: ");
            String phdUniversity = scanner.nextLine();

            System.out.print("Enter the research topic of the PhD student: ");
            String phdResearchTopic = scanner.nextLine();

            // Polymorphism — Student tipli referensiya PhDStudent obyektinə işarə edir
            Student phdStudent = new PhDStudent(phdName, phdUniversity, phdResearchTopic);

            // showInfo() çağırılır — PhDStudent-in override edilmiş metodu işləyir
            phdStudent.showInfo();

        } // try bloku bitdikdə Scanner avtomatik bağlanır
    }
}


//-------------------------------------------------------------------------------------------

//Abstract class Student

package com.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

// ══════════════════════════════════════════════
//  ABSTRAKT BAZ SİNİF — Şəxs
// ══════════════════════════════════════════════
abstract class Sexs {
    private String ad;
    private String soyad;
    private int yas;

    public Sexs(String ad, String soyad, int yas) {
        this.ad = ad;
        this.soyad = soyad;
        this.yas = yas;
    }

    public String getAd() { return ad; }
    public String getSoyad() { return soyad; }
    public int getYas() { return yas; }

    public abstract void melumatlariGoster();
}

// ══════════════════════════════════════════════
//  KURS SİNİFİ
// ══════════════════════════════════════════════
class Kurs {
    private String kursAdi;
    private int kreditSaati;
    private String muellim;

    public Kurs(String kursAdi, int kreditSaati, String muellim) {
        this.kursAdi = kursAdi;
        this.kreditSaati = kreditSaati;
        this.muellim = muellim;
    }

    public String getKursAdi() { return kursAdi; }
    public int getKreditSaati() { return kreditSaati; }
    public String getMuellim() { return muellim; }

    public void kursInfosu() {
        System.out.println("  Kurs     : " + kursAdi);
        System.out.println("  Kredit   : " + kreditSaati);
        System.out.println("  Müəllim  : " + muellim);
    }
}

// ══════════════════════════════════════════════
//  İMTAHAN SİNİFİ
// ══════════════════════════════════════════════
class Imtahan {
    private String fenn;
    private double bal;
    private String tarix;

    public Imtahan(String fenn, double bal, String tarix) {
        this.fenn = fenn;
        this.bal = bal;
        this.tarix = tarix;
    }

    public double getBal() { return bal; }

    public void imtahanInfosu() {
        System.out.println("  Fənn   : " + fenn);
        System.out.println("  Bal    : " + bal);
        System.out.println("  Tarix  : " + tarix);
    }
}

// ══════════════════════════════════════════════
//  DİPLOM SİNİFİ
// ══════════════════════════════════════════════
class Diplom {
    private String ixtisas;
    private String tarix;
    private double ortalama;

    public Diplom(String ixtisas, String tarix, double ortalama) {
        this.ixtisas = ixtisas;
        this.tarix = tarix;
        this.ortalama = ortalama;
    }

    public void diplomInfosu() {
        System.out.println("  İxtisas  : " + ixtisas);
        System.out.println("  Tarix    : " + tarix);
        System.out.println("  Ortalama : " + ortalama);
    }
}

// ══════════════════════════════════════════════
//  TƏLƏBƏ — Şəxs-dən miras alır
// ══════════════════════════════════════════════
class Telebe extends Sexs {
    private String fakulte;
    private int kurs;
    private List<Imtahan> imtahanlar;
    private List<Kurs> kursList;

    public Telebe(String ad, String soyad, int yas,
                  String fakulte, int kurs) {
        super(ad, soyad, yas);
        this.fakulte = fakulte;
        this.kurs = kurs;
        this.imtahanlar = new ArrayList<>();
        this.kursList = new ArrayList<>();
    }

    public void imtahanElave(Imtahan imtahan) {
        imtahanlar.add(imtahan);
    }

    public void kursElave(Kurs k) {
        kursList.add(k);
    }

    public double ortalamaHesabla() {
        if (imtahanlar.isEmpty()) return 0;
        double cem = 0;
        for (Imtahan i : imtahanlar) cem += i.getBal();
        return cem / imtahanlar.size();
    }

    public String getFakulte() { return fakulte; }
    public int getKurs() { return kurs; }

    @Override
    public void melumatlariGoster() {
        System.out.println("Ad / Soyad : " + getAd() + " " + getSoyad());
        System.out.println("Yaş        : " + getYas());
        System.out.println("Fakültə    : " + fakulte);
        System.out.println("Kurs       : " + kurs);
        System.out.println("Ortalama   : " + ortalamaHesabla());

        if (!kursList.isEmpty()) {
            System.out.println("--- Kurslar ---");
            for (Kurs k : kursList) k.kursInfosu();
        }

        if (!imtahanlar.isEmpty()) {
            System.out.println("--- İmtahanlar ---");
            for (Imtahan i : imtahanlar) i.imtahanInfosu();
        }
    }
}

// ══════════════════════════════════════════════
//  MAGİSTR — Tələbə-dən miras alır
// ══════════════════════════════════════════════
class Magistr extends Telebe {
    private String teqiqatMovzusu;
    private String elmiRehber;

    public Magistr(String ad, String soyad, int yas,
                   String fakulte, int kurs,
                   String teqiqatMovzusu, String elmiRehber) {
        super(ad, soyad, yas, fakulte, kurs);
        this.teqiqatMovzusu = teqiqatMovzusu;
        this.elmiRehber = elmiRehber;
    }

    @Override
    public void melumatlariGoster() {
        super.melumatlariGoster();
        System.out.println("Tədqiqat   : " + teqiqatMovzusu);
        System.out.println("Elmi rəhbər: " + elmiRehber);
    }
}

// ══════════════════════════════════════════════
//  DOKTORANT — Magistr-dən miras alır
// ══════════════════════════════════════════════
class Doktorant extends Magistr {
    private String dissertasiyaMovzusu;
    private int neşrSayi;
    private Diplom diplom;

    public Doktorant(String ad, String soyad, int yas,
                     String fakulte, int kurs,
                     String teqiqatMovzusu, String elmiRehber,
                     String dissertasiyaMovzusu, int neşrSayi) {
        super(ad, soyad, yas, fakulte, kurs, teqiqatMovzusu, elmiRehber);
        this.dissertasiyaMovzusu = dissertasiyaMovzusu;
        this.neşrSayi = neşrSayi;
    }

    public void diplomTəyin(Diplom diplom) {
        this.diplom = diplom;
    }

    @Override
    public void melumatlariGoster() {
        super.melumatlariGoster();
        System.out.println("Dissertasiya: " + dissertasiyaMovzusu);
        System.out.println("Nəşr sayı   : " + neşrSayi);
        if (diplom != null) {
            System.out.println("--- Diplom ---");
            diplom.diplomInfosu();
        }
    }
}

// ══════════════════════════════════════════════
//  MÜƏLLİM — Şəxs-dən miras alır
// ══════════════════════════════════════════════
class Muellim extends Sexs {
    private String fakulte;
    private String fenn;
    private int tedrisTecurbesi;

    public Muellim(String ad, String soyad, int yas,
                   String fakulte, String fenn, int tedrisTecurbesi) {
        super(ad, soyad, yas);
        this.fakulte = fakulte;
        this.fenn = fenn;
        this.tedrisTecurbesi = tedrisTecurbesi;
    }

    public String getFakulte() { return fakulte; }
    public String getFenn() { return fenn; }

    @Override
    public void melumatlariGoster() {
        System.out.println("Ad / Soyad   : " + getAd() + " " + getSoyad());
        System.out.println("Yaş          : " + getYas());
        System.out.println("Fakültə      : " + fakulte);
        System.out.println("Fənn         : " + fenn);
        System.out.println("Təcrübə (il) : " + tedrisTecurbesi);
    }
}

// ══════════════════════════════════════════════
//  PROFESSOR — Müəllim-dən miras alır
// ══════════════════════════════════════════════
class Professor extends Muellim {
    private String elmiDerece;
    private int neşrSayi;

    public Professor(String ad, String soyad, int yas,
                     String fakulte, String fenn, int tedrisTecurbesi,
                     String elmiDerece, int neşrSayi) {
        super(ad, soyad, yas, fakulte, fenn, tedrisTecurbesi);
        this.elmiDerece = elmiDerece;
        this.neşrSayi = neşrSayi;
    }

    @Override
    public void melumatlariGoster() {
        super.melumatlariGoster();
        System.out.println("Elmi dərəcə  : " + elmiDerece);
        System.out.println("Nəşr sayı    : " + neşrSayi);
    }
}

// ══════════════════════════════════════════════
//  REKTOR — Professor-dan miras alır
// ══════════════════════════════════════════════
class Rektor extends Professor {
    private String universitet;
    private int idareetmeTecurbesi;

    public Rektor(String ad, String soyad, int yas,
                  String fakulte, String fenn, int tedrisTecurbesi,
                  String elmiDerece, int neşrSayi,
                  String universitet, int idareetmeTecurbesi) {
        super(ad, soyad, yas, fakulte, fenn, tedrisTecurbesi,
              elmiDerece, neşrSayi);
        this.universitet = universitet;
        this.idareetmeTecurbesi = idareetmeTecurbesi;
    }

    @Override
    public void melumatlariGoster() {
        super.melumatlariGoster();
        System.out.println("Universitet      : " + universitet);
        System.out.println("İdarəetmə (il)   : " + idareetmeTecurbesi);
    }
}

// ══════════════════════════════════════════════
//  MAIN
// ══════════════════════════════════════════════
public class Main {
    public static void main(String[] args) {

        try (Scanner scanner = new Scanner(System.in)) {

            // ── TƏLƏBƏ ──────────────────────────────────────────
            System.out.println("\n========== TƏLƏBƏ ==========");
            System.out.print("Ad: ");           String tAd = scanner.nextLine();
            System.out.print("Soyad: ");        String tSoyad = scanner.nextLine();
            System.out.print("Yaş: ");          int tYas = Integer.parseInt(scanner.nextLine());
            System.out.print("Fakültə: ");      String tFakulte = scanner.nextLine();
            System.out.print("Kurs (1-4): ");   int tKurs = Integer.parseInt(scanner.nextLine());

            Telebe telebe = new Telebe(tAd, tSoyad, tYas, tFakulte, tKurs);

            System.out.print("Kurs adı: ");     String kAd = scanner.nextLine();
            System.out.print("Kredit saatı: "); int kKredit = Integer.parseInt(scanner.nextLine());
            System.out.print("Müəllim: ");      String kMuellim = scanner.nextLine();
            telebe.kursElave(new Kurs(kAd, kKredit, kMuellim));

            System.out.print("İmtahan fənni: "); String iFenn = scanner.nextLine();
            System.out.print("Bal: ");           double iBal = Double.parseDouble(scanner.nextLine());
            System.out.print("Tarix: ");         String iTarix = scanner.nextLine();
            telebe.imtahanElave(new Imtahan(iFenn, iBal, iTarix));

            System.out.println("\n--- Tələbə məlumatları ---");
            telebe.melumatlariGoster();

            // ── MAGİSTR ─────────────────────────────────────────
            System.out.println("\n========== MAGİSTR ==========");
            System.out.print("Ad: ");              String mAd = scanner.nextLine();
            System.out.print("Soyad: ");           String mSoyad = scanner.nextLine();
            System.out.print("Yaş: ");             int mYas = Integer.parseInt(scanner.nextLine());
            System.out.print("Fakültə: ");         String mFakulte = scanner.nextLine();
            System.out.print("Kurs: ");            int mKurs = Integer.parseInt(scanner.nextLine());
            System.out.print("Tədqiqat mövzusu: ");String mMovzu = scanner.nextLine();
            System.out.print("Elmi rəhbər: ");     String mRehber = scanner.nextLine();

            Magistr magistr = new Magistr(mAd, mSoyad, mYas,
                    mFakulte, mKurs, mMovzu, mRehber);

            System.out.println("\n--- Magistr məlumatları ---");
            magistr.melumatlariGoster();

            // ── DOKTORANT ────────────────────────────────────────
            System.out.println("\n========== DOKTORANT ==========");
            System.out.print("Ad: ");               String dAd = scanner.nextLine();
            System.out.print("Soyad: ");            String dSoyad = scanner.nextLine();
            System.out.print("Yaş: ");              int dYas = Integer.parseInt(scanner.nextLine());
            System.out.print("Fakültə: ");          String dFakulte = scanner.nextLine();
            System.out.print("Kurs: ");             int dKurs = Integer.parseInt(scanner.nextLine());
            System.out.print("Tədqiqat mövzusu: "); String dMovzu = scanner.nextLine();
            System.out.print("Elmi rəhbər: ");      String dRehber = scanner.nextLine();
            System.out.print("Dissertasiya: ");     String dDiss = scanner.nextLine();
            System.out.print("Nəşr sayı: ");        int dNesr = Integer.parseInt(scanner.nextLine());

            Doktorant doktorant = new Doktorant(dAd, dSoyad, dYas,
                    dFakulte, dKurs, dMovzu, dRehber, dDiss, dNesr);

            System.out.print("Diplom ixtisası: ");  String dipIxt = scanner.nextLine();
            System.out.print("Diplom tarixi: ");    String dipTarix = scanner.nextLine();
            System.out.print("Diplom ortalama: ");  double dipOrt = Double.parseDouble(scanner.nextLine());
            doktorant.diplomTəyin(new Diplom(dipIxt, dipTarix, dipOrt));

            System.out.println("\n--- Doktorant məlumatları ---");
            doktorant.melumatlariGoster();

            // ── MÜƏLLİM ─────────────────────────────────────────
            System.out.println("\n========== MÜƏLLİM ==========");
            System.out.print("Ad: ");           String muAd = scanner.nextLine();
            System.out.print("Soyad: ");        String muSoyad = scanner.nextLine();
            System.out.print("Yaş: ");          int muYas = Integer.parseInt(scanner.nextLine());
            System.out.print("Fakültə: ");      String muFakulte = scanner.nextLine();
            System.out.print("Fənn: ");         String muFenn = scanner.nextLine();
            System.out.print("Təcrübə (il): "); int muTec = Integer.parseInt(scanner.nextLine());

            Muellim muellim = new Muellim(muAd, muSoyad, muYas,
                    muFakulte, muFenn, muTec);

            System.out.println("\n--- Müəllim məlumatları ---");
            muellim.melumatlariGoster();

            // ── PROFESSOR ────────────────────────────────────────
            System.out.println("\n========== PROFESSOR ==========");
            System.out.print("Ad: ");           String prAd = scanner.nextLine();
            System.out.print("Soyad: ");        String prSoyad = scanner.nextLine();
            System.out.print("Yaş: ");          int prYas = Integer.parseInt(scanner.nextLine());
            System.out.print("Fakültə: ");      String prFakulte = scanner.nextLine();
            System.out.print("Fənn: ");         String prFenn = scanner.nextLine();
            System.out.print("Təcrübə (il): "); int prTec = Integer.parseInt(scanner.nextLine());
            System.out.print("Elmi dərəcə: ");  String prDerece = scanner.nextLine();
            System.out.print("Nəşr sayı: ");    int prNesr = Integer.parseInt(scanner.nextLine());

            Professor professor = new Professor(prAd, prSoyad, prYas,
                    prFakulte, prFenn, prTec, prDerece, prNesr);

            System.out.println("\n--- Professor məlumatları ---");
            professor.melumatlariGoster();

            // ── REKTOR ───────────────────────────────────────────
            System.out.println("\n========== REKTOR ==========");
            System.out.print("Ad: ");               String rAd = scanner.nextLine();
            System.out.print("Soyad: ");            String rSoyad = scanner.nextLine();
            System.out.print("Yaş: ");              int rYas = Integer.parseInt(scanner.nextLine());
            System.out.print("Fakültə: ");          String rFakulte = scanner.nextLine();
            System.out.print("Fənn: ");             String rFenn = scanner.nextLine();
            System.out.print("Təcrübə (il): ");     int rTec = Integer.parseInt(scanner.nextLine());
            System.out.print("Elmi dərəcə: ");      String rDerece = scanner.nextLine();
            System.out.print("Nəşr sayı: ");        int rNesr = Integer.parseInt(scanner.nextLine());
            System.out.print("Universitet: ");      String rUniver = scanner.nextLine();
            System.out.print("İdarəetmə (il): ");   int rIdaree = Integer.parseInt(scanner.nextLine());

            Rektor rektor = new Rektor(rAd, rSoyad, rYas,
                    rFakulte, rFenn, rTec, rDerece, rNesr, rUniver, rIdaree);

            System.out.println("\n--- Rektor məlumatları ---");
            rektor.melumatlariGoster();
        }
    }
}

