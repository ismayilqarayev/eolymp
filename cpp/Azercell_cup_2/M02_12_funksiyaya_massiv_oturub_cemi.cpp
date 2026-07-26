// =========================================================
// AZ-CUP — Movzu 2, Mesele 12: Funksiyaya massiv ötürüb cəmini tapmaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

long long cemTap(int a[], int n){
    long long s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

int main(){
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << cemTap(a, n) << endl;
    return 0;
}
