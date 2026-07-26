// =========================================================
// AZ-CUP — Movzu 2, Mesele 42: Tezlik cütlərini sıralamaq
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

    int deyer[1000], sayi[1000];
    int ferqliSayi = 0;

    // her eded ucun daha evvel gorulub-gorulmediyini yoxlayib
    // tezlik cedvelini el ile qururuq
    for (int i = 0; i < n; i++){
        bool tapildi = false;
        for (int j = 0; j < ferqliSayi; j++){
            if (deyer[j] == a[i]){
                sayi[j]++;
                tapildi = true;
                break;
            }
        }
        if (!tapildi){
            deyer[ferqliSayi] = a[i];
            sayi[ferqliSayi] = 1;
            ferqliSayi++;
        }
    }

    // tezliye gore azalan siraya duzuruk (bubble sort)
    for (int i = 0; i < ferqliSayi - 1; i++){
        for (int j = 0; j < ferqliSayi - 1 - i; j++){
            if (sayi[j] < sayi[j + 1]){
                int t1 = sayi[j]; sayi[j] = sayi[j + 1]; sayi[j + 1] = t1;
                int t2 = deyer[j]; deyer[j] = deyer[j + 1]; deyer[j + 1] = t2;
            }
        }
    }

    for (int i = 0; i < ferqliSayi; i++)
        cout << deyer[i] << " " << sayi[i] << endl;

    return 0;
}
