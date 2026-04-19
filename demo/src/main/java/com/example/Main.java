package com.example;

import java.util.Scanner;

class Student{
    
    public String name;
    public int age;

    public static void main(String[] args){

        Student st = new Student();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter name:");
        st.name = sc.nextLine();

        System.out.println("Enter age:");
        st.age = sc.nextInt();

        st.display();
    }

    public void display(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}