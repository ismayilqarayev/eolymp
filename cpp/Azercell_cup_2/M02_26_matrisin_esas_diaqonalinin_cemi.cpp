// =========================================================
// AZ-CUP — Movzu 2, Mesele 26: Matrisin əsas diaqonalının cəmi
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

    long long sum = 0;
    for (int i = 0; i < n; i++) sum += a[i][i];

    cout << sum << endl;
    return 0;
}
