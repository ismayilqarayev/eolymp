package java;
package java;
import java.util.Scanner;

public class Main {
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
