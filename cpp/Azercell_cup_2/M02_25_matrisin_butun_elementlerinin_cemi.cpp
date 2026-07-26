// =========================================================
// AZ-CUP — Movzu 2, Mesele 25: Matrisin bütün elementlərinin cəmi
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

    long long sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += a[i][j];

    cout << sum << endl;
    return 0;
}
