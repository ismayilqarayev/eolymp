package java;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class code4 {
    public static void main(String[] args) {
        List<String> namelist = new ArrayList<String>();
        List<Integer> agelist = new ArrayList<Integer>();
        fun1(namelist);
        fun2(agelist);
        fun3(namelist, agelist);
    }

    public static void fun1(List<String> namelist) {
        Person person = new Person();
        Scanner scanner = new Scanner(System.in);


        System.out.println("Enter your name: ");
        String name = scanner.nextLine();
        person.setName(name);
        namelist.add(person.getName());
    }

    public static void fun2(List<Integer> agelist) {
        Person person = new Person();
        Scanner scanner = new Scanner(System.in);


        System.out.println("Enter your age: ");
        int age = scanner.nextInt();
        person.setAge(age);
        agelist.add(person.getAge());
    }


    public static void fun3(List<String> namelist, List<Integer> agelist) {
       System.out.println(namelist.get(0) +  agelist.get(0));
    }
}

class Person {
    private String name;
    private int age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age){
        this.age = age;
    }
}