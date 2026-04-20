package com.example;

import java.util.Scanner;

class Main {
    boolean number_1 = 
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1:");
        int number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        int number_2 = sc.nextInt();

        boolean result = number_1 > number_2;

        if (result) {
            System.out.println("Number 1 is bigger");
        } else {
            System.out.println("Number 2 is bigger or equal");
        }

        sc.close();
    }
}