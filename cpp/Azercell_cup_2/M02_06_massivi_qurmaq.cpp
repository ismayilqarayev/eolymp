// =========================================================
// AZ-CUP — Movzu 2, Mesele 06: Massivi elementləri əlavə edərək qurmaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    int size = 0;   // hazirda massivde ne qeder eded oldugunu saxlayir

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[size] = x;   // yeni edeadi sona elave edirik
        size++;
    }

    for (int i = 0; i < size; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
