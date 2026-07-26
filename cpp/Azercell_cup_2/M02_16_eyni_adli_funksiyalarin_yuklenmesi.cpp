// =========================================================
// AZ-CUP — Movzu 2, Mesele 16: Eyni adlı funksiyaların yüklənməsi
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

int cem(int a, int b){
    return a + b;
}
double cem(double a, double b){
    return a + b;
}

int main(){
    int a, b;
    cin >> a >> b;
    double x, y;
    cin >> x >> y;

    cout << cem(a, b) << endl;
    cout << cem(x, y) << endl;
    return 0;
}
