// =========================================================
// AZ-CUP — Movzu 2, Mesele 07: Massivda ən çox təkrarlanan ədəd
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int enYaxsi = a[0], enYaxsiSayi = 0;

    for (int i = 0; i < n; i++){
        // a[i] massivde neçe defe gorunub, sayaq
        int sayi = 0;
        for (int j = 0; j < n; j++)
            if (a[j] == a[i]) sayi++;

        // daha cox tekrarlanani, beraberlikde kicik ededi seçirik
        if (sayi > enYaxsiSayi || (sayi == enYaxsiSayi && a[i] < enYaxsi)){
            enYaxsiSayi = sayi;
            enYaxsi = a[i];
        }
    }

    cout << enYaxsi << endl;
    return 0;
}
