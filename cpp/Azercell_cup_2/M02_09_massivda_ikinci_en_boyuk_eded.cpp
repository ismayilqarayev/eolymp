// =========================================================
// AZ-CUP — Movzu 2, Mesele 09: Massivda ikinci ən böyük ədəd
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int birinci = -2000000000, ikinci = -2000000000;
    for (int i = 0; i < n; i++){
        if (a[i] > birinci){
            ikinci = birinci;
            birinci = a[i];
        } else if (a[i] > ikinci && a[i] != birinci){
            ikinci = a[i];
        }
    }

    cout << ikinci << endl;
    return 0;
}
