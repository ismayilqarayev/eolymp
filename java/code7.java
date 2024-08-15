
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
