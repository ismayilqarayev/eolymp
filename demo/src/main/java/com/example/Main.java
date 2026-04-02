package com.example;

import java.util.Scanner;

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

        //student.showInfo();

        System.out.print("Enter PhD student name: ");
        String phdName = scanner.nextLine();

        System.out.print("Enter research field: ");
        String researchField = scanner.nextLine();

        Student phd = new PhDStudent(phdName, researchField);

        phd.showInfo();

        scanner.close();
    }
}