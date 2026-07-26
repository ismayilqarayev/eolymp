// =========================================================
// AZ-CUP — Movzu 2, Mesele 49: Sətirdə boşluqları silmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    string netice = "";
    for (int i = 0; i < (int)s.length(); i++){
        if (s[i] != ' ') netice += s[i];
    }

    cout << netice << endl;
    return 0;
}
