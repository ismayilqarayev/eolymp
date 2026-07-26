// =========================================================
// AZ-CUP — Movzu 2, Mesele 32: Matrisin simmetrik olub-olmadığını yoxlamaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[105][105];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    bool simmetrikdir = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] != a[j][i]) simmetrikdir = false;
        }
    }

    if (simmetrikdir) cout << "SIMMETRIK" << endl;
    else cout << "SIMMETRIK DEYIL" << endl;
    return 0;
}
