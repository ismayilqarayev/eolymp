// =========================================================
// AZ-CUP — Movzu 2, Mesele 34: Şahmat lövhəsi naxışı
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ((i + j) % 2 == 0) cout << "#";
            else cout << ".";
        }
        cout << endl;
    }
    return 0;
}
