// =========================================================
// AZ-CUP — Movzu 2, Mesele 22: "\n" ilə çıxışın sürətləndirilməsi
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        cout << x << "\n";   // endl deyil, "\n" istifade olunur
    }
    return 0;
}
