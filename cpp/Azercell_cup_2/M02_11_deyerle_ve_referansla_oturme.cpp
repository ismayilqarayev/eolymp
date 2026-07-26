// =========================================================
// AZ-CUP — Movzu 2, Mesele 11: Dəyərlə və referansla ötürmə
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

void deyisYer(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int a, b;
    cin >> a >> b;
    deyisYer(a, b);
    cout << a << " " << b << endl;
    return 0;
}
