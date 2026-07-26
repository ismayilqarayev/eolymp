// =========================================================
// AZ-CUP — Movzu 2, Mesele 38: Struct massivində axtarış
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;

struct Mehsul{
    string ad;
    int qiymet;
};

int main(){
    int n;
    cin >> n;
    Mehsul a[1000];

    for (int i = 0; i < n; i++)
        cin >> a[i].ad >> a[i].qiymet;

    string axtarilan;
    cin >> axtarilan;

    bool tapildi = false;
    for (int i = 0; i < n; i++){
        if (a[i].ad == axtarilan){
            cout << a[i].qiymet << endl;
            tapildi = true;
            break;
        }
    }

    if (!tapildi) cout << "TAPILMADI" << endl;
    return 0;
}
