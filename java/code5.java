package java;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class code5 {
    public static void main(String[] args) {
        Person person1 = new Person();
        person1.displayinfo();

        fun2(person1);
    }

    public static void fun2(Person... people) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter name: ");
        String name = scanner.nextLine();

        System.out.print("Enter age: ");
        int age = scanner.nextInt();

        Person person = new Person(name, age);
        person.displayinfo();

        List<Person> peopleList = new ArrayList<>();
        for (Person p : people) {
            peopleList.add(p);
        }
        peopleList.add(person);

        for (Person p : peopleList) {
            p.displayinfo();
        }


    }
}

class Person {
    String name;
    int age;

    public Person() {
        this.name = "Default Name";
        this.age = 0;
    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void displayinfo() {
        System.out.println("Name: " + name + " Age: " + age);
    }
}
