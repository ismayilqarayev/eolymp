// =========================================================
// AZ-CUP — Movzu 2, Mesele 23: Sonsuz oxuma ilə cəm (giriş bitənədək)
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    long long sum = 0;
    long long x;
    while (cin >> x){
        sum += x;
    }
    cout << sum << endl;
    return 0;
}
