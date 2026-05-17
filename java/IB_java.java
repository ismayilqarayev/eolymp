

/////////////////////////////////////////////////////////////////
//IBprogramming dili Java'da OOP (Object-Oriented Programming) //
/////////////////////////////////////////////////////////////////
//B2.1.1 Variables //  Data types and user input


package com.example;

import java.util.Scanner;


public class Student {
    public String name;
    public int age;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student student = new Student();

        System.out.println("Enter your name: ");
        student.name = sc.nextLine();

        //-------------------------------------------
        System.out.println("Enter your age: ");
        student.age = sc.nextInt();

        //------------------------------------------
        System.out.println("Name: " + student.name + " Age: " + student.age);
        sc.close();
    }
}

//---------------------------------------------------


package com.example;

import java.util.Scanner;

class Student {
    public String name;
    public int age;

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Student st = new Student();

        System.out.println("Enter name:");
        st.name = sc.nextLine();

        System.out.println("Enter age:");
        st.age = sc.nextInt();
        st.age++;

        System.out.println("Name: " + st.name);
        System.out.println("Age: " + st.age);

        sc.close();
    }
}

//------------------------------
//double and float

package com.example;

import java.util.Scanner;

class Product {
    public String name;
    public double price;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Product pr = new Product();

        // Məhsulun adını daxil edirik
        System.out.println("Enter product name:");
        pr.name = sc.nextLine();

        // Məhsulun qiymətini daxil edirik (double tipində)
        System.out.println("Enter product price:");
        pr.price = sc.nextDouble();

        // Endirim faizini daxil edirik
        System.out.println("Enter discount percentage:");
        double discount = sc.nextDouble();

        // Endirimdən sonrakı qiyməti hesablayırıq
        double finalPrice = pr.price - (pr.price * discount / 100);

        // Nəticəni çap edirik
        System.out.println("Product: " + pr.name);
        System.out.println("Original Price: " + pr.price);
        System.out.println("Discount: " + discount + "%");
        System.out.println("Final Price: " + finalPrice);

        sc.close();
    }
}


package com.example;

import java.util.Scanner;

class Mehsul {
    public String ad;
    public double qiymet;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Mehsul mehsul = new Mehsul();

        // Məhsulun adını daxil edirik
        System.out.println("Məhsulun adını daxil edin:");
        mehsul.ad = sc.nextLine();

        // Məhsulun qiymətini daxil edirik (double tipində)
        System.out.println("Məhsulun qiymətini daxil edin:");
        mehsul.qiymet = sc.nextDouble();

        // Endirim faizini daxil edirik
        System.out.println("Endirim faizini daxil edin:");
        double endirimFaizi = sc.nextDouble();

        // Endirimdən sonrakı qiyməti hesablayırıq
        double sonQiymet = mehsul.qiymet - (mehsul.qiymet * endirimFaizi / 100);

        // Nəticəni çap edirik
        System.out.println("Məhsul: " + mehsul.ad);
        System.out.println("Əsas Qiymət: " + mehsul.qiymet);
        System.out.println("Endirim: " + endirimFaizi + "%");
        System.out.println("Son Qiymət: " + sonQiymet);

        sc.close();
    }
}


//--------------------------------------
//Boolean-------------------------------------------------
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

//--------------------------------------

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1:");
        int number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        int number_2 = sc.nextInt();

        boolean result = (number_1 > 0) && (number_2 > 0);

        System.out.println("Result (true/false): " + result);

        sc.close();
    }
}


//------------------------------

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int number_1;
        int number_2;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number 1:");
        number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        number_2 = sc.nextInt();

        if (number_1 > 0 && number_2 > 0) {
            System.out.println("True: both numbers are positive");
        } else {
            System.out.println("False: at least one number is negative or zero");
        }

        sc.close();
    }
}

// Assignments --------------------------------------

public class SwapExample {
    public static void main(String[] args) {
        int a = 5;
        int b = 7;

        System.out.println("Əvvəl: a = " + a + ", b = " + b);

        // Müvəqqəti dəyişənlə dəyişmə
        int temp = a;
        a = b;
        b = temp;

        System.out.println("Sonra: a = " + a + ", b = " + b);
    }
}

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

package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // İstifadəçidən ədədləri daxil etməsini istəyirik
        System.out.println("Enter number 1:");
        int number_1 = sc.nextInt();

        System.out.println("Enter number 2:");
        int number_2 = sc.nextInt();

        System.out.println("Əvvəl: a = " + number_1 + ", b = " + number_2);

        // Dəyərləri dəyişmək (swap)
        int temp = number_1;
        number_1 = number_2;
        number_2 = temp;

        // İnkremet əməliyyatı (hər birini 1 vahid artırırıq)
        number_1++;
        number_2++;

        System.out.println("Sonra (swap + increment): a = " + number_1 + ", b = " + number_2);

        sc.close();
    }
}


// Düzgün olmayan swap nümunəsi
package com.example;

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
       int number_1 = 5;
       int number_2 = 7;

       System.out.println("Əvvəl: a = " + number_1 + ", b = " + number_2);

    
       number_1 = number_2;
       number_2 = number_1;
       System.out.println("Sonra: a = " + number_1 + ", b = " + number_2);
    }
}

