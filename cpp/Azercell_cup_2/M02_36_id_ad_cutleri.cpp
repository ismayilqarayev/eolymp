// =========================================================
// AZ-CUP — Movzu 2, Mesele 36: İd–ad cütlərini saxlamaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int id[100];
    string ad[100];

    for (int i = 0; i < n; i++)
        cin >> id[i] >> ad[i];

    for (int i = 0; i < n; i++)
        cout << id[i] << " - " << ad[i] << endl;

    return 0;
}
