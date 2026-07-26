// =========================================================
// AZ-CUP — Movzu 2, Mesele 05: Massivda unikal elementlərin sayı
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++){
        bool gorulub = false;
        // bu ededdan evvel eyni eded olub-olmadigini yoxlayiriq
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){ gorulub = true; break; }
        }
        if (!gorulub) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
