package com.example;


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
    public static void rename(Student student, String newName){
        student.setName(newName);
    }

    public static void main(String[] args){
        Student student1 = new Student("Ismayil");

        System.out.println(student1);

        // Metod vasitəsilə obyektin adını dəyişdiririk
        rename(student1, "Iso");

        System.out.println(student1);
    }
}