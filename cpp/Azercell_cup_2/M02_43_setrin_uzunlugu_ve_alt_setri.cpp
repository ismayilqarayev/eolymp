// =========================================================
// AZ-CUP — Movzu 2, Mesele 43: Sətrin uzunluğu və alt-sətri
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    cout << s.length() << endl;
    cout << s.substr(0, 3) << endl;
    return 0;
}
