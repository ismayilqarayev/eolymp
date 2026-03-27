package com.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

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