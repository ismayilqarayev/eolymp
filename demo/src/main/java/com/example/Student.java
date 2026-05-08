package com.example;

<<<<<<< HEAD
public class Student {
    private int id;
    private String name;

    public Student(String name) {
        this.name = name;
    }

    public Student(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String toJson() {
        return String.format("{\"id\":%d,\"name\":\"%s\"}", id, escapeJson(name));
    }

    private static String escapeJson(String value) {
        return value.replace("\\", "\\\\").replace("\"", "\\\"");
    }
}
=======
import java.util.Scanner;

public class Student {

    public String name;
    public int age;

    public static void main(String[] args){
        Scanner sc = new  Scanner(System.in);
        Student student = new Student();

        System.out.println("Enter name: ");
        student.name = sc.nextLine();

        System.out.println("Enter age: ");
        student.age = sc.nextInt();

        System.out.println("name: " + student.name);
        System.out.println("Age: "+ student.age);

        sc.close();
    }
}
>>>>>>> 9d926f3542b314e5d978f32c20441b20d3fc7c3f
