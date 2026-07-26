// =========================================================
// AZ-CUP — Movzu 2, Mesele 37: Şagirdləri qiymətə görə sıralamaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;

struct Sagird{
    string ad;
    int qiymet;
};

int main(){
    int n;
    cin >> n;
    Sagird a[100];

    for (int i = 0; i < n; i++)
        cin >> a[i].ad >> a[i].qiymet;

    // "bubble sort" ile azalan siraya duzuruk (boyukden kicige)
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (a[j].qiymet < a[j + 1].qiymet){
                Sagird t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i].ad << " " << a[i].qiymet << endl;

    return 0;
}
