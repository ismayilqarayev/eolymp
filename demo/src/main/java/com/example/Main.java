package com.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
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