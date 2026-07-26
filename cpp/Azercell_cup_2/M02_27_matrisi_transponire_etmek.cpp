// =========================================================
// AZ-CUP — Movzu 2, Mesele 27: Matrisi transponirə etmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[105][105];
    int b[105][105];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[j][i] = a[i][j];   // setir ve sutunun yerini deyisiriq

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
