package org.example;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.function.Predicate;

class User {
    private String ad;

    public User(String ad){
        this.ad = ad;
    }


    public void printInfo() {
        System.out.println(
                "Ad: " + ad
        );
    }
}


public class Main{
    private static final Scanner sc = new Scanner(System.in);
    private static final List<User> users = new ArrayList<>();
    private static int say;

    public static void main(String[] args){
        nece_nefer_daxil_edilir();
        istifadeci_haqqinda_melumat();
        printUsers();
    }


    private static void nece_nefer_daxil_edilir(){
        while (true){
            System.out.println("Neçə nəfər üçün məlumat daxil etmək istəyirsiniz: ");
            try{
                say = Integer.parseInt(sc.nextLine());
                if (say > 0){
                    return;
                }

            }catch (NumberFormatException e){

            }
            System.out.println("Xəta! Zəhmət olmasa müsbət bir tam ədəd daxil edin.");
        }
    }


    private static void istifadeci_haqqinda_melumat(){
        for (int i = 0; i < say; i++){
            String ad = readInput(
                    "Ad",
                    input -> !input.isBlank() && Character.isLetter(input.charAt(0))
            );
            users.add(new User(ad));
        }
    }


    private static void printUsers(){
        System.out.println("\nDaxil edilen istifadeciler: ");

        for (User user: users){
            user.printInfo();
        }
    }

    private static String readInput(String ad, Predicate<String> validator) {
        String input;
        do{
            System.out.println(ad);
            input = sc.nextLine();
        }
        while (!validator.test(input));
        return input;
    }
}
//---------------------------------------------
