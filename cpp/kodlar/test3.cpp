#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if (a > 0) {
        cout << "Musbet ededdir.";
    }
    else if (a < 0) {
        cout << "Menfi ededdir.";
    }
    else {
        cout << "Sifirdir.";
    }   
}