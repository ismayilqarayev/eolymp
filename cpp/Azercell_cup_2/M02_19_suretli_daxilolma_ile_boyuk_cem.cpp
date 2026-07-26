// =========================================================
// AZ-CUP — Movzu 2, Mesele 19: Sürətli daxil olma ilə böyük cəm
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;
    }

    cout << sum << "\n";
    return 0;
}
