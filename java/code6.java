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
