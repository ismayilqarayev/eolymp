package com.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


class Student{
    String name;
    int age;

    Student(String name, int age){
        this.name = name;
        this.age = age;
    }
}


public class Main{

    public static void printStudent(Student s){
        System.out.print(s.name);
        System.out.println(s.age);
    }

    public static void main(String[] args){
        Student st = new Student("ismayil", 12);
        printStudent(st);
    }
}