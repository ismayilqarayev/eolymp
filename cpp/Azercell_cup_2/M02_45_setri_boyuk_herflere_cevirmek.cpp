// =========================================================
// AZ-CUP — Movzu 2, Mesele 45: Sətri böyük hərflərə çevirmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    for (int i = 0; i < (int)s.length(); i++)
        s[i] = toupper(s[i]);

    cout << s << endl;
    return 0;
}
