// =========================================================
// AZ-CUP — Movzu 2, Mesele 48: Sətirləri birləşdirmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;

    string birlesmis = s1 + " " + s2;
    cout << birlesmis << endl;

    s1.append(s2);
    cout << s1 << endl;
    return 0;
}
