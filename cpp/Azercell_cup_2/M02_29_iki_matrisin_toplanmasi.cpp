// =========================================================
// AZ-CUP — Movzu 2, Mesele 29: İki matrisin toplanması
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[105][105], b[105][105];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> b[i][j];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
