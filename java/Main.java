package java;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter name: ");
        String name = scanner.nextLine();
        
        System.out.println("Enter age: ");
        int age = scanner.nextInt();
        
        Person person = new Person(name, age);
        person.fun2();
    }
}

class Person {
    String name;
    int age;
    
    Person(String name, int age){
        this.name = name;
        this.age = age;
    }
    
    void fun2(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}