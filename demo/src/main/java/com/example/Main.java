package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
       int number_1 = 5;
       int number_2 = 7;

       System.out.println("Əvvəl: a = " + number_1 + ", b = " + number_2);

       int temp = number_1;
       number_1 = number_2;
       number_2 = temp;
    }
}
