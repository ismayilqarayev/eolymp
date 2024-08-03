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