// =========================================================
// AZ-CUP — Movzu 2, Mesele 13: Funksiya ilə ən böyük ədədi tapmaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

int maxIki(int a, int b){
    if (a > b) return a;
    return b;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << maxIki(maxIki(a, b), c) << endl;
    return 0;
}
