// =========================================================
// AZ-CUP — Movzu 2, Mesele 47: Palindrom sətir yoxlaması (funksiya ilə)
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;

bool palindromdur(string s){
    int sol = 0, sag = (int)s.length() - 1;
    while (sol < sag){
        if (s[sol] != s[sag]) return false;
        sol++;
        sag--;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    if (palindromdur(s)) cout << "PALINDROM" << endl;
    else cout << "PALINDROM DEYIL" << endl;
    return 0;
}
