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
