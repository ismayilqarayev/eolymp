package com.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

abstract class Student {

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

    public abstract void showInfo();
}

class GradueStudent extends Student {
    private String University;

    public GradueStudent(String name, String University) {
        super(name);
        this.University = University;
    }

    @Override
    public void showInfo() {
        System.out.println("Graduate Student Name: " + getName());
        System.out.println("University: " + University);
    }
}

class PhDStudent extends GradueStudent {
    private String researchTopic;

    public PhDStudent(String name, String University, String researchTopic) {
        super(name, University);
        this.researchTopic = researchTopic;
    }

    @Override
    public void showInfo() {
        super.showInfo();
        System.out.println("Research Topic: " + researchTopic);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the name of the graduate student: ");
        String GSName = scanner.nextLine();

        System.out.print("Enter the university of the graduate student: ");
        String GSUniversity = scanner.nextLine();

        Student GS = new GradueStudent(GSName, GSUniversity);
        GS.showInfo();

        // ----------------------------------------------

        System.out.print("Enter the name of the PhD student: ");
        String PhDName = scanner.nextLine();

        System.out.print("Enter the university of the PhD student: ");
        String PhDUniversity = scanner.nextLine();

        System.out.print("Enter the research topic of the PhD student: ");
        String PhDResearchTopic = scanner.nextLine();

        Student PhD = new PhDStudent(PhDName, PhDUniversity, PhDResearchTopic);
        PhD.showInfo();

        scanner.close();
    }
}