// =========================================================
// AZ-CUP — Movzu 2, Mesele 10: Massivi sola sürüşdürmək
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

    if (n > 1){
        int birinci = a[0];
        for (int i = 0; i < n - 1; i++) a[i] = a[i + 1];
        a[n - 1] = birinci;
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
