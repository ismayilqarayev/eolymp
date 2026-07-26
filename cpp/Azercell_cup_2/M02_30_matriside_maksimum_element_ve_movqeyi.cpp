// =========================================================
// AZ-CUP — Movzu 2, Mesele 30: Matrisdə maksimum element və mövqeyi
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

    int enBoyuk = a[0][0], bi = 0, bj = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] > enBoyuk){
                enBoyuk = a[i][j];
                bi = i;
                bj = j;
            }
        }
    }

    cout << enBoyuk << " " << bi << " " << bj << endl;
    return 0;
}
