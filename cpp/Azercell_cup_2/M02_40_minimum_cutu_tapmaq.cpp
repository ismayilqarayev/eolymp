// =========================================================
// AZ-CUP — Movzu 2, Mesele 40: Ən kiçik cütü tapmaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100000], b[100000];

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int enKicikA = a[0], enKicikB = b[0];
    for (int i = 1; i < n; i++){
        if (a[i] < enKicikA || (a[i] == enKicikA && b[i] < enKicikB)){
            enKicikA = a[i];
            enKicikB = b[i];
        }
    }

    cout << enKicikA << " " << enKicikB << endl;
    return 0;
}
