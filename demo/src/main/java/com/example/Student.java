package com.example;

import java.util.Scanner;


public class Student {
    public String name;
    public int age;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student student = new Student();

        System.out.println("Enter your name: ");
        student.name = sc.nextLine();

        //-------------------------------------------
        System.out.println("Enter your age: ");
        student.age = sc.nextInt();

        //------------------------------------------
        System.out.println("Name: " + student.name + " Age: " + student.age);
        sc.close();
    }
}

