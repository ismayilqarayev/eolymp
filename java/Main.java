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


//---------------------------------------------------------------------------

import java.sql.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Integer> list1 = new ArrayList<>();
        List<Integer> list2 = new ArrayList<>();
        fun1(list1, list2);
        fun2(list1, list2);
    }

    public static void fun1(List<Integer> list1, List<Integer> list2){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            list1.add(sc.nextInt());
            list2.add(sc.nextInt());
        }
        System.out.println(list1);
        System.out.println(list2);
    }

    public static void fun2(List<Integer> list1, List<Integer> list2){
        
    }
}
