package com.example;

import java.util.Scanner;

class Student{
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

    public void displayInfo(){
        System.out.println("Student Name: " + name);
    }
}

class Teacher extends Student{
    private String name;


}

public class Main{
    public static void main(String[] args){
        
    }
}