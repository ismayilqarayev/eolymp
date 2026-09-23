#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ad, soyad;
    int yas;

    int number;

    cout << "ad daxil et:";
    cin >> ad;

    cout << "soyad daxil et";
    cin >> soyad;

    cout << "yasini daxil et";
    cin >> yas;

    number = yas + 10;
    
    //cout << ad << soyad << yas << number << endl;
    cout << ad << " " << soyad << " " << yas << " " << number << endl;
}
//-------------------------------------------------------------
// 2-ci test
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operation;

    cout << "Birinci ededi daxil edin: ";
    cin >> a;

    cout << "Emeliyyati daxil edin (+, -, *, /, %): ";
    cin >> operation;

    cout << "Ikinci ededi daxil edin: ";
    cin >> b;

    if (operation == '+') 
    {
        cout << "Netice: " << a + b;
    }
    else if (operation == '-') 
    {
        cout << "Netice: " << a - b;
    }
    else if (operation == '*') 
    {
        cout << "Netice: " << a * b;
    }
    else if (operation == '/') 
    {
        if (b != 0) {
            cout << "Netice: " << a / b;
        }
        else {
            cout << "Xeta: sifira bolmek olmaz!";
        }
    }
    else if (operation == '%') 
    {
        if (b != 0) 
        {
            cout << "Qaliq: " << a % b;
        }
        else 
        {
            cout << "Xeta: sifira bolmek olmaz!";
        }
    }
    else 
    {
        cout << "Xeta: yanlis emeliyyat!";
    }

    return 0;
}

//-------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {

    int choice;

    cout << "=====================================\n";
    cout << "        IF - C++ PRAKTIKA            \n";
    cout << "=====================================\n";

    cout << "1. Musbet, menfi ve ya sifir\n";
    cout << "2. Cut ve ya tek\n";
    cout << "3. Iki ededden boyuyunu tap\n";
    cout << "4. Iki ededin beraberliyini yoxla\n";
    cout << "5. Uc ededden en boyuyunu tap\n";
    cout << "6. Uc ededden en kiciyini tap\n";
    cout << "7. 5-e bolunme\n";
    cout << "8. Hem 3-e, hem 5-e bolunme\n";
    cout << "9. 3-e ve ya 5-e bolunme\n";
    cout << "10. Interval yoxlamasi\n";
    cout << "11. Yalniz biri cutdur\n";
    cout << "12. Uc ededin hamisi cutdur\n";
    cout << "13. En azi biri cutdur\n";
    cout << "14. Musbet ededlerin sayi\n";
    cout << "15. Cut ededlerin sayi\n";
    cout << "16. Artan sira\n";
    cout << "17. Azalan sira\n";
    cout << "18. Iki eded beraberdir\n";
    cout << "19. Hamisi ferqlidir\n";
    cout << "20. Imtahan qiymeti\n";

    cout << "\nSeciminizi daxil edin: ";
    cin >> choice;

    // 1. Musbet, menfi ve ya sifir
    if (choice == 1) {

        int n;
        cin >> n;

        if (n > 0) {
            cout << "Musbet ededdir.";
        }
        else if (n < 0) {
            cout << "Menfi ededdir.";
        }
        else {
            cout << "Sifirdir.";
        }
    }

    // 2. Cut ve ya tek
    else if (choice == 2) {

        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "Cut ededdir.";
        }
        else {
            cout << "Tek ededdir.";
        }
    }

    // 3. Iki ededden boyuyunu tap
    else if (choice == 3) {

        int a, b;
        cin >> a >> b;

        if (a > b) {
            cout << "Boyuk eded: " << a;
        }
        else {
            cout << "Boyuk eded: " << b;
        }
    }

    // 4. Iki ededin beraberliyini yoxla
    else if (choice == 4) {

        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "Ededler beraberdir.";
        }
        else {
            cout << "Ededler beraber deyil.";
        }
    }

    // 5. Uc ededden en boyuyunu tap
    else if (choice == 5) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a >= b && a >= c) {
            cout << "En boyuk: " << a;
        }
        else if (b >= a && b >= c) {
            cout << "En boyuk: " << b;
        }
        else {
            cout << "En boyuk: " << c;
        }
    }

    // 6. Uc ededden en kiciyini tap
    else if (choice == 6) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a <= b && a <= c) {
            cout << "En kicik: " << a;
        }
        else if (b <= a && b <= c) {
            cout << "En kicik: " << b;
        }
        else {
            cout << "En kicik: " << c;
        }
    }

    // 7. 5-e bolunme
    else if (choice == 7) {

        int n;
        cin >> n;

        if (n % 5 == 0) {
            cout << "5-e tam bolunur.";
        }
        else {
            cout << "5-e tam bolunmur.";
        }
    }

    // 8. Hem 3-e, hem 5-e bolunme
    else if (choice == 8) {

        int n;
        cin >> n;

        if (n % 3 == 0 && n % 5 == 0) {
            cout << "Hem 3-e, hem de 5-e bolunur.";
        }
        else {
            cout << "Serte uygun deyil.";
        }
    }

    // 9. 3-e ve ya 5-e bolunme
    else if (choice == 9) {

        int n;
        cin >> n;

        if (n % 3 == 0 || n % 5 == 0) {
            cout << "3-e ve ya 5-e bolunur.";
        }
        else {
            cout << "He birine bolunmur.";
        }
    }

    // 10. Interval yoxlamasi
    else if (choice == 10) {

        int n;
        cin >> n;

        if (n >= 10 && n <= 100) {
            cout << "10 ile 100 arasindadir.";
        }
        else {
            cout << "Intervalda deyil.";
        }
    }

    // 11. Yalniz biri cutdur
    else if (choice == 11) {

        int a, b;
        cin >> a >> b;

        if ((a % 2 == 0 && b % 2 != 0) ||
            (a % 2 != 0 && b % 2 == 0)) {

            cout << "Yalniz biri cutdur.";
        }
        else {
            cout << "Serte uygun deyil.";
        }
    }

    // 12. Uc ededin hamisi cutdur
    else if (choice == 12) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a % 2 == 0 &&
            b % 2 == 0 &&
            c % 2 == 0) {

            cout << "Hamisi cutdur.";
        }
        else {
            cout << "Hamisi cut deyil.";
        }
    }

    // 13. En azi biri cutdur
    else if (choice == 13) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a % 2 == 0 ||
            b % 2 == 0 ||
            c % 2 == 0) {

            cout << "En azi biri cutdur.";
        }
        else {
            cout << "Hamisi tekdir.";
        }
    }

    // 14. Musbet ededlerin sayi
    else if (choice == 14) {

        int a, b, c;
        int count = 0;

        cin >> a >> b >> c;

        if (a > 0) {
            count++;
        }

        if (b > 0) {
            count++;
        }

        if (c > 0) {
            count++;
        }

        cout << "Musbet ededlerin sayi: " << count;
    }

    // 15. Cut ededlerin sayi
    else if (choice == 15) {

        int a, b, c;
        int count = 0;

        cin >> a >> b >> c;

        if (a % 2 == 0) {
            count++;
        }

        if (b % 2 == 0) {
            count++;
        }

        if (c % 2 == 0) {
            count++;
        }

        cout << "Cut ededlerin sayi: " << count;
    }

    // 16. Artan sira
    else if (choice == 16) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c) {
            cout << "Ededler artan siradadir.";
        }
        else {
            cout << "Artan sirada deyil.";
        }
    }

    // 17. Azalan sira
    else if (choice == 17) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a > b && b > c) {
            cout << "Ededler azalan siradadir.";
        }
        else {
            cout << "Azalan sirada deyil.";
        }
    }

    // 18. En azi iki eded beraberdir
    else if (choice == 18) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a == b || a == c || b == c) {
            cout << "En azi iki eded beraberdir.";
        }
        else {
            cout << "Hamisi ferqlidir.";
        }
    }

    // 19. Hamisi ferqlidir
    else if (choice == 19) {

        int a, b, c;
        cin >> a >> b >> c;

        if (a != b && a != c && b != c) {
            cout << "Hamisi ferqlidir.";
        }
        else {
            cout << "Beraber olan ededler var.";
        }
    }

    // 20. Imtahan qiymeti
    else if (choice == 20) {

        int bal;
        cin >> bal;

        if (bal >= 90) {
            cout << "A";
        }
        else if (bal >= 80) {
            cout << "B";
        }
        else if (bal >= 70) {
            cout << "C";
        }
        else if (bal >= 60) {
            cout << "D";
        }
        else {
            cout << "F";
        }
    }

    else {
        cout << "Yanlis secim!";
    }

    return 0;
}