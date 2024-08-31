

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Program program = new Program();

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter text1: ");
        String text1 = sc.nextLine();

        System.out.println("Enter text2: ");
        String text2 = sc.nextLine();

        // text1 və text2 dəyərlərini təyin edirik
        program.setText1(text1);
        program.setText2(text2);

        // Dəyərləri çap edirik
        System.out.println("Text1: " + program.getText1());
        System.out.println("Text2: " + program.getText2());
    }
}


class Program{
    private String text1; // Sinif səviyyəsində dəyişənlər
    private String text2;

    public Program() {
        // Default konstruktor
    }

    public Program(String text1, String text2) {
        this.text1 = text1;
        this.text2 = text2;
    }

    public String getText1() {
        return this.text1;
    }

    public void setText1(String text1) {
        this.text1 = text1;
    }

    public String getText2() {
        return this.text2;
    }

    public void setText2(String text2) {
        this.text2 = text2;
    }

    public void fun1() {
        // Bu metod hazırda heç bir əməliyyat aparmır
        System.out.println("Fun1 metodu çağırıldı.");
    }
}


//----------------------------------------------------------------------------------
import java.sql.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Integer> list1 = new ArrayList<>();
        List<Integer> list2 = new ArrayList<>();
        fun1(list1);
        fun2(list2);
        fun3(list1, list2);
    }


    public static void fun1(List<Integer> list1){
        Scanner sc1 = new Scanner(System.in);
        int n = sc1.nextInt();

        for(int i = 0; i < n; i++){
            list1.add(sc1.nextInt());
        }
        System.out.println(list1);
    }

    public static void fun2(List<Integer> list2){
        Scanner sc2 = new Scanner(System.in);
        int n = sc2.nextInt();

        for (int i = 0; i < n; i++){
            list2.add(sc2.nextInt());
        }
        System.out.println(list2);
    }

    public static void fun3(List<Integer> list1, List<Integer> list2){
        list1.addAll(list2);
        
        for (int run : list1){
            System.out.println(run);
        }
    }
}

//---------------------------------------------------

package java;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class code1 {
    public static void main(String[] args) {
        List<Integer> vec1 = new ArrayList<>();
        List<Integer> vec2 = new ArrayList<>();

        fun2(vec1, vec2);
        fun1(vec1, vec2);
    }

    public static void fun2(List<Integer> v1, List<Integer> v2) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in vector1: ");
        int add_vector_number = scanner.nextInt();

        for (int i = 0; i < add_vector_number; i++) {
            System.out.print("Enter the elements of vector1: ");
            int a = scanner.nextInt();
            v1.add(a);
        }

        System.out.print("Enter the number of elements in vector2: ");
        int add_vector_number2 = scanner.nextInt();

        for (int i = 0; i < add_vector_number2; i++) {
            System.out.print("Enter the elements of vector2: ");
            int a = scanner.nextInt();
            v2.add(a);
        }
    }

    public static void fun1(List<Integer> v1, List<Integer> v2) {
        v1.addAll(1, v2);

        for (int i : v1) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

//---------------------------------------------------

package java;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class code2 {
    public static void main(String[] args) {
        List<String> vec1 = new ArrayList<>();
        List<String> vec2 = new ArrayList<>();

        fun1(vec1, vec2);
        fun2(vec1, vec2);
    }

    public static void fun1(List<String> v1, List<String> v2) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the text for vector 1: ");
        String add_text_for_v1 = scanner.nextLine();

        for (int i = 0; i < add_text_for_v1.length(); i++) {
            System.out.print("Enter character " + (i + 1) + ": ");
            String c = scanner.nextLine();
            v1.add(c);
        }
    }

    

    public static void fun2(List<String> v1, List<String> v2) {
        v1.add(1, " ");

        for (String ss : v1) {
            System.out.print(ss + " ");
        }
        System.out.println();
    }
}


//----------------------------------------------

package java;

import java.util.Scanner;

public class code3 {
    public static void main(String[] args){
        try{
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the name of the student: ");
            String name = sc.nextLine();

            System.out.println("Enter the age of the student: ");
            int age = sc.nextInt();
            
            if (age<18){
                throw new Exception("You are younger than 18 years!");
            }

            System.out.println("Enter the name of the course: ");
            String course = sc.nextLine();

            System.out.println("Enter the year of the student: ");
            int year = sc.nextInt();

            System.out.println("Enter the height of the student: ");
            int height = sc.nextInt();

            System.out.println("Enter the weight of the student: ");
            int weight = sc.nextInt();

            Student student = new Student(name, age, course, year, height, weight);
            System.out.println(student);
        }

        catch (Exception a){
            System.out.println("error");
        }
    }
}

class Student{
    private String name;
    private int age;
    private String course;
    private int year;
    private int height;
    private int weight;
    public Student(String name, int age, String course, int year, int height, int weight){
        this.name = name;
        this.age = age;
        this.course = course;
        this.year = year;
        this.height = height;
        this.weight = weight;
    }
}


//-------------------------------------------------

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

//--------------------------------------------------


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

//----------------------------------------------------


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


//------------------------------------------------------


import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        fun1();
        fun2();
        fun3();
        fun4();
    }

    public static void fun1() {
        List<Integer> num3 = new ArrayList<>(Arrays.asList(1, 2, 3, 4));
        num3.add(4, 5);

        // Çap etmək üçün şərhə alınan sətir
        // for (int run : num3) {
        //     System.out.print(run + " ");
        // }
        // System.out.println();
    }

    public static void fun2() {
        List<Integer> num4 = new ArrayList<>(Arrays.asList(1, 2, 4, 5, 6, 7));
        num4.addAll(2, Arrays.asList(3, 3));

        // Çap etmək üçün şərhə alınan sətir
        // for (int run : num4) {
        //     System.out.print(run + " ");
        // }
        // System.out.println();
    }

    public static void fun3() {
        List<Integer> num5 = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9));
        List<Integer> num6 = new ArrayList<>(Arrays.asList(10, 20, 30, 40, 50, 60, 70, 80, 90));

        num5.addAll(1, num6.subList(0, 3));

        for (int run4 : num5) {
            System.out.print(run4 + " ");
        }
        System.out.println();
    }

    public static void fun4() {
        List<Integer> num7 = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8));
        num7.add(num7.size(), 21);

        for (int as : num7) {
            System.out.println(as);
        }
    }
}
