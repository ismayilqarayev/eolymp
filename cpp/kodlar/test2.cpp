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