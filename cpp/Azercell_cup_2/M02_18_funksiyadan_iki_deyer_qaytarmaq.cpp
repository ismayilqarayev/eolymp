// =========================================================
// AZ-CUP — Movzu 2, Mesele 18: Funksiyadan iki dəyər qaytarmaq (referans ilə)
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

void minMaxTap(int a[], int n, int &mn, int &mx){
    mn = a[0];
    mx = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }
}

int main(){
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int mn, mx;
    minMaxTap(a, n, mn, mx);

    cout << mn << " " << mx << endl;
    return 0;
}
