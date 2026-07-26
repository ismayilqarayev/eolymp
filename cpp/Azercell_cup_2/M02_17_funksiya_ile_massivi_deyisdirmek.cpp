// =========================================================
// AZ-CUP — Movzu 2, Mesele 17: Funksiya ilə massivi dəyişdirmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

void ikiqatEt(int a[], int n){
    for (int i = 0; i < n; i++) a[i] = a[i] * 2;
}

int main(){
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];

    ikiqatEt(a, n);

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
