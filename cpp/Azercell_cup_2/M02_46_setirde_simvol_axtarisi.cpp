// =========================================================
// AZ-CUP — Movzu 2, Mesele 46: Sətirdə alt-sətir axtarışı
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);

    size_t yer = s.find(t);

    if (yer == string::npos) cout << -1 << endl;
    else cout << yer << endl;
    return 0;
}
