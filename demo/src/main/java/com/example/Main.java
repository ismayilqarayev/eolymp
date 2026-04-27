package com.example;

import java.util.Scanner;

class Main {
    public static int number_1;
    public static int number_2;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a number_1:");
        number_1 = scanner.nextInt();

        System.out.println("Enter a number_2:");
        number_2 = scanner.nextInt();

        System.out.println("The sum of " + number_1 + " and " + number_2);

        number_1 = number_2;
        number_2 = number_1;

        number_1++;
        number_2++;

        System.out.println("After incrementing, number_1 is: " + number_1);
        System.out.println("After incrementing, number_2 is: " + number_2);

        scanner.close();
    }
}