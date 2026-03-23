package com.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Student {
    private String ad;

    public Student(String ad) {
        this.ad = ad;
    }

    public String getAd(){
        return ad;
    }

    public void setAd(String ad){
        this.ad = ad;
    }
}

public class Main {
    static void adDeyis(Student s, String yeniAd){
        s.setAd(yeniAd);
    }

    public static void main(String[] args) {
        Student s1 = new Student("Ismayil");

        System.out.println("Deyishmeden evvel: " + s1.getAd());

        adDeyis(s1, "Eli");
        System.out.println("Deyishmeden sonra: " + s1.getAd());
    }
}