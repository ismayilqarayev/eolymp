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

    static List<Student> students = new ArrayList<>();
    static Scanner scanner = new Scanner(System.in);

    // tələbə əlavə etmək
    public static void addStudent(){
        System.out.print("Tələbə adı daxil edin: ");
        String name = scanner.nextLine();

        students.add(new Student(name));
        System.out.println("Tələbə əlavə edildi.");
    }

    // tələbələri göstərmək
    public static void showStudents(){

        if(students.isEmpty()){
            System.out.println("Tələbə yoxdur.");
            return;
        }

        for(int i = 0; i < students.size(); i++){
            System.out.println(i + " - " + students.get(i));
        }
    }

    // ad dəyişmək
    public static void renameStudent(){
        showStudents();

        System.out.print("İndeks daxil edin: ");
        int index = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Yeni ad daxil edin: ");
        String newName = scanner.nextLine();

        students.get(index).setName(newName);
        System.out.println("Ad dəyişdirildi.");
    }

    // tələbə silmək
    public static void removeStudent(){
        showStudents();

        System.out.print("Silinəcək indeks: ");
        int index = scanner.nextInt();
        scanner.nextLine();

        students.remove(index);
        System.out.println("Tələbə silindi.");
    }

    public static void main(String[] args) {

        while(true){

            System.out.println("\n1 - Tələbə əlavə et");
            System.out.println("2 - Tələbələri göstər");
            System.out.println("3 - Ad dəyiş");
            System.out.println("4 - Tələbə sil");
            System.out.println("0 - Çıxış");

            System.out.print("Seçim: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch(choice){

                case 1:
                    addStudent();
                    break;

                case 2:
                    showStudents();
                    break;

                case 3:
                    renameStudent();
                    break;

                case 4:
                    removeStudent();
                    break;

                case 0:
                    System.out.println("Proqram bitdi.");
                    return;

                default:
                    System.out.println("Yanlış seçim.");
            }
        }
    }
}