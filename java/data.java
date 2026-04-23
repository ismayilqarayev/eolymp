//c++ converted to java
import java.util.Deque;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Deque<Integer> d1 = new LinkedList<>();
        Deque<Integer> d2 = new LinkedList<>();
        Scanner sc = new Scanner(System.in);

        // d1 üçün elementləri daxil edirik
        System.out.print("Deque d1 üçün elementlərin sayını daxil edin: ");
        int say1 = sc.nextInt();
        for (int i = 0; i < say1; i++) {
            System.out.print("Element " + (i + 1) + "-i daxil edin: ");
            d1.add(sc.nextInt());
        }

        // d2 üçün elementləri daxil edirik
        System.out.print("Deque d2 üçün elementlərin sayını daxil edin: ");
        int say2 = sc.nextInt();
        for (int i = 0; i < say2; i++) {
            System.out.print("Element " + (i + 1) + "-i daxil edin: ");
            d2.add(sc.nextInt());
        }

        // İkinci elementləri çap edirik
        if (d1.size() > 1 && d2.size() > 1) {
            System.out.println("d1-in ikinci elementi: " + ((LinkedList<Integer>) d1).get(1));
            System.out.println("d2-nin ikinci elementi: " + ((LinkedList<Integer>) d2).get(1));
        } else {
            System.out.println("Bir və ya hər iki deque-də 2-dən az element var.");
        }

        sc.close();
    }
}
//------------------------------

import java.util.Deque;
import java.util.LinkedList;
import java.util.Scanner;

public class MelumatBazasi {
    public static void main(String[] args) {
        Deque<String> melumat_bazasi_1 = new LinkedList<>();
        Scanner sc = new Scanner(System.in);

        System.out.print("Daxil edin: ");
        String daxil_etme = sc.nextLine();

        for (int i = 0; i < daxil_etme.length(); i++) {
            char simvol = daxil_etme.charAt(i);
            melumat_bazasi_1.add(String.valueOf(simvol));
        }

        for (String i : melumat_bazasi_1) {
            System.out.println(i);
        }

        if (!melumat_bazasi_1.isEmpty()) {
            String first = melumat_bazasi_1.peekFirst();
            System.out.println("Birinci element: " + first);
        }

        sc.close();
    }
}
//------------------------------

import java.util.Deque;
import java.util.LinkedList;
import java.util.Collections;
import java.util.Scanner;

public class SortDeque {
    public static void main(String[] args) {
        Deque<Integer> dq = new LinkedList<>();
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            dq.add(sc.nextInt());
        }

        // LinkedList istifadə etdiyimiz üçün Collections.sort işləyir
        LinkedList<Integer> list = new LinkedList<>(dq);
        Collections.sort(list);

        System.out.println("Sorted elements: " + list);

        sc.close();
    }
}

//------------------------------

import java.util.Deque;
import java.util.LinkedList;
import java.util.Scanner;

public class DequeFunctions {
    static Scanner sc = new Scanner(System.in);

    public static void fun1(Deque<Integer> d1) {
        System.out.print("Enter the number of elements in deque d1: ");
        int number1 = sc.nextInt();
        for (int i = 0; i < number1; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            d1.add(sc.nextInt());
        }
    }

    public static void fun2(Deque<Integer> d2) {
        System.out.print("Enter the number of elements in deque d2: ");
        int number2 = sc.nextInt();
        for (int i = 0; i < number2; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            d2.add(sc.nextInt());
        }
    }

    public static void fun3(Deque<Integer> d1, Deque<Integer> d2) {
        if (d1.size() > 1 && d2.size() > 1) {
            System.out.println("Second element in d1: " + ((LinkedList<Integer>) d1).get(1));
            System.out.println("Second element in d2: " + ((LinkedList<Integer>) d2).get(1));
        } else {
            System.out.println("One or both deques have less than 2 elements.");
        }
    }

    public static void main(String[] args) {
        Deque<Integer> d1 = new LinkedList<>();
        Deque<Integer> d2 = new LinkedList<>();

        fun1(d1);
        fun2(d2);
        fun3(d1, d2);

        sc.close();
    }
}
//burda bitir!







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

//Abtract class Student //

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

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

// Abstrakt sinif (Abstraction)
// Bu sinif birbaşa obyekt yaratmaq üçün deyil, digər siniflər üçün baza rolunu oynayır
abstract class Student{

    // Encapsulation (Inkapsulyasiya)
    // name dəyişəni private-dir, yəni yalnız bu sinif daxilində istifadə oluna bilər
    private String name;

    // Konstruktor
    public Student(String name){
        this.name = name;
    }

    // Getter metodu - name dəyişənini oxumaq üçün
    public String getName(){
        return name;
    }

    // Setter metodu - name dəyişənini dəyişmək üçün
    public void setName(String name){
        this.name = name;
    }

    // Abstrakt metod
    // Bu metodun implementasiyası alt siniflərdə yazılmalıdır
    public abstract void showInfo();
}

// Inheritance (İrsiyyət)
// GradueateStudent sinifi Student sinifindən miras alır
class GradueateStudent extends Student{

    // Bu sinifə məxsus dəyişən
    private String University;

    public GradueateStudent(String name, String University){
        super(name); // Student konstruktorunu çağırır
        this.University = University;
    }

    // Abstrakt metodun implementasiyası
    @Override
    public void showInfo(){
        // name dəyişəninə birbaşa yox, getter vasitəsilə müraciət olunur
        System.out.println("Name: " + getName());
        System.out.println("University: " + University);
    }
}

// Inheritance (İrsiyyət)
// PhDStudent sinifi GradueateStudent sinifindən miras alır
class PhDStudent extends GradueateStudent{

    // Bu sinifə məxsus dəyişən
    private String researchTopic;

    public PhDStudent(String name, String University, String researchTopic){
        super(name, University); // Parent konstruktoru çağırılır
        this.researchTopic = researchTopic;
    }

    // Method overriding (Polymorphism)
    @Override
    public void showInfo(){
        super.showInfo(); // Parent metodunu çağırır
        System.out.println("Research Topic: " + researchTopic);
    }
}

public class Main {
    public static void main(String[] args) {

        // Scanner istifadəçi daxil etməsi üçün
        Scanner scanner = new Scanner(System.in);

        // Graduate student məlumatlarının daxil edilməsi
        System.out.print("Enter the name of the graduate student: ");
        String GSName = scanner.nextLine();

        System.out.print("Enter the university of the graduate student: ");
        String GSUniversity = scanner.nextLine();

        // Polymorphism
        // Student tipli referensiya GradueateStudent obyektinə işarə edir
        Student GS = new GradueateStudent(GSName, GSUniversity);

        // showInfo metodunun çağırılması
        GS.showInfo();
        //////////////////////////////////////////////////////////////////

        // PhD student məlumatlarının daxil edilməsi
        System.out.print("Enter the name of the PhD student: ");
        String PhDName = scanner.nextLine();

        System.out.print("Enter the university of the PhD student: ");
        String PhDUniversity = scanner.nextLine();

        System.out.print("Enter the research topic of the PhD student: ");
        String PhDResearchTopic = scanner.nextLine();

        // Polymorphism
        Student PhD = new PhDStudent(PhDName, PhDUniversity, PhDResearchTopic);

        // Metod çağırışı
        PhD.showInfo();

        // Scanner bağlanır
        scanner.close();
    }
}
/////////////////////////////////////////////////////////////////
//IBprogramming dili Java'da OOP (Object-Oriented Programming) //
/////////////////////////////////////////////////////////////////
//B2.1.1 Variables //  Data types and user input
package com.example;

import java.util.Scanner;

class Student {
    public String name;
    public int age;

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Student st = new Student();

        System.out.println("Enter name:");
        st.name = sc.nextLine();

        System.out.println("Enter age:");
        st.age = sc.nextInt();
        st.age++;

        System.out.println("Name: " + st.name);
        System.out.println("Age: " + st.age);

        sc.close();
    }
}

//--------------------------------------
//Boolean-------------------------------------------------
package com.example;

import java.util.Scanner;

class Main {
    boolean number_1 = 
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1:");
        int number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        int number_2 = sc.nextInt();

        boolean result = number_1 > number_2;

        if (result) {
            System.out.println("Number 1 is bigger");
        } else {
            System.out.println("Number 2 is bigger or equal");
        }

        sc.close();
    }
}

//--------------------------------------

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1:");
        int number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        int number_2 = sc.nextInt();

        boolean result = (number_1 > 0) && (number_2 > 0);

        System.out.println("Result (true/false): " + result);

        sc.close();
    }
}


//------------------------------

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int number_1;
        int number_2;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1:");
        number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        number_2 = sc.nextInt();

        if (number_1 > 0 && number_2 > 0) {
            System.out.println("True: both numbers are positive");
        } else {
            System.out.println("False: at least one number is negative or zero");
        }

        sc.close();
    }
}

// Assignments --------------------------------------

public class SwapExample {
    public static void main(String[] args) {
        int a = 5;
        int b = 7;

        System.out.println("Əvvəl: a = " + a + ", b = " + b);

        // Müvəqqəti dəyişənlə dəyişmə
        int temp = a;
        a = b;
        b = temp;

        System.out.println("Sonra: a = " + a + ", b = " + b);
    }
}

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
       int number_1 = 5;
       int number_2 = 7;

       System.out.println("Əvvəl: a = " + number_1 + ", b = " + number_2);

       int temp = number_1;
       number_1 = number_2;
       number_2 = temp;
    }
}

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // İstifadəçidən ədədləri daxil etməsini istəyirik
        System.out.println("Enter number 1:");
        int number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        int number_2 = sc.nextInt();

        System.out.println("Əvvəl: a = " + number_1 + ", b = " + number_2);

        // Dəyərləri dəyişmək (swap)
        int temp = number_1;
        number_1 = number_2;
        number_2 = temp;

        // İnkremet əməliyyatı (hər birini 1 vahid artırırıq)
        number_1++;
        number_2++;

        System.out.println("Sonra (swap + increment): a = " + number_1 + ", b = " + number_2);

        sc.close();
    }
}


// Düzgün olmayan swap nümunəsi
package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
       int number_1 = 5;
       int number_2 = 7;

       System.out.println("Əvvəl: a = " + number_1 + ", b = " + number_2);

    
       number_1 = number_2;
       number_2 = number_1;
       System.out.println("Sonra: a = " + number_1 + ", b = " + number_2);
    }
}


