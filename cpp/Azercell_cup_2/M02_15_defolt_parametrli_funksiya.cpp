// =========================================================
// AZ-CUP — Movzu 2, Mesele 15: Defolt parametrli funksiya
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

void cedvelCap(int n, int neqeder = 10){
    for (int i = 1; i <= neqeder; i++)
        cout << n << " x " << i << " = " << n * i << endl;
}

int main(){
    int n, k;
    cin >> n >> k;
    if (k == 0) cedvelCap(n);          // defolt deyerle (10-a qeder)
    else cedvelCap(n, k);
    return 0;
}
