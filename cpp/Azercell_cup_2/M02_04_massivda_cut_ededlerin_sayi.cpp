// =========================================================
// AZ-CUP — Movzu 2, Mesele 04: Massivda cüt ədədlərin sayı
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) cnt++;

    cout << cnt << endl;
    return 0;
}
