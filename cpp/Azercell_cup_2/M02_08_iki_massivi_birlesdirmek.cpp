// =========================================================
// AZ-CUP — Movzu 2, Mesele 08: İki massivi birləşdirmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[2000];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> a[n + i];   // ikinci massivi birincinin ardinca yaziriq

    for (int i = 0; i < n + m; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
