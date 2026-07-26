// =========================================================
// AZ-CUP — Movzu 2, Mesele 28: Matrisdə sətir və sütun cəmləri
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[105][105];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++){
        int setirCemi = 0;
        for (int j = 0; j < m; j++) setirCemi += a[i][j];
        cout << setirCemi << " ";
    }
    cout << endl;

    for (int j = 0; j < m; j++){
        int sutunCemi = 0;
        for (int i = 0; i < n; i++) sutunCemi += a[i][j];
        cout << sutunCemi << " ";
    }
    cout << endl;
    return 0;
}
