// =========================================================
// AZ-CUP — Movzu 2, Mesele 33: Matrisi 90 dərəcə döndərmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[105][105], b[105][105];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[j][n - 1 - i] = a[i][j];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
