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