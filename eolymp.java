import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int S = scanner.nextInt();

        int[] bankomat = {500, 200, 100, 50, 20, 10, 5, 2, 1}; // Bankomatda olan deyerler
        int useBankomat = 0; // istifade olunan bankomat sayi

        for (int i = 0; i < bankomat.length; i++) {
            useBankomat += S / bankomat[i]; // istifade olunan bankomat sayi hesapla
            S %= bankomat[i]; // qaliqi yenile
        }

        System.out.println(useBankomat);
    }
}


//--------------------------------------------------------------

import java.util.Scanner;

public class Main 
{
    public static void main(String[] args) 
    {
        String n;
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextLine();

        int cem1 = 0;
        int cem2 = 0;

        for (int i = 0; i < n.length(); i++) 
        {
            if (Character.isDigit(n.charAt(i)))
            {
                int digit = n.charAt(i);

                if (i % 2 == 0)
                {
                    cem1 += digit;
                }else 
                {
                    cem2 += digit;
                }
            }
        }
    }

    public static void fun2()
    {
        int[] num = new int[]{1,2,3,4};
    }
}

//-------------------------------------------------------------

import java.util.ArrayList;
import java.util.List;

class Test {
    List<Integer> num1;

    Test() {
        num1 = new ArrayList<>();
        num1.add(1);
        num1.add(2);
        num1.add(3);
        num1.add(4);
        num1.add(5);

        num1.add(1, 3); // 1-ci mövqedə 3 rəqəmi əlavə olunur

        // num1-i çap etmək üçün
        // for (int ss : num1) {
        //     System.out.print(ss + " ");
        // }
    }
}

class Vest {
    List<Integer> number1;
    List<Integer> number2;

    Vest() {
        number1 = new ArrayList<>();
        number1.add(1);
        number1.add(2);
        number1.add(3);
        number1.add(4);
        number1.add(5);

        number2 = new ArrayList<>();
        number2.add(10);
        number2.add(20);
        number2.add(30);
        number2.add(40);
        number2.add(50);

        number1.addAll(0, number2.subList(0, 3)); // 0-cı mövqedən başlayaraq number2-dən 3 elementi number1-ə əlavə edir

        for (int getdir : number1) {
            System.out.print(getdir + " ");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Vest testInstance = new Vest();
        Test testInstance2 = new Test();
    }
}

//-----------------------------------------------------------

public class Main{
    public static void main(String[] args) {
        System.out.println(sum(2, 3));
        System.out.println(sum(4.0, 3.0));
    }
    
    static int sum(int x, int y){
        return x + y;
    }
    
    static double sum(double x, double y){
        return x + y;
    }
}


