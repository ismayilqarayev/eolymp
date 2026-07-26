// =========================================================
// AZ-CUP — Movzu 2, Mesele 44: Sətirdə sözlərin sayı və ən uzun sözün uzunluğu
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string setir;
    getline(cin, setir);

    int sozSayi = 0;
    int enUzunSoz = 0;
    int cariUzunluq = 0;

    for (int i = 0; i < (int)setir.length(); i++){
        if (setir[i] != ' '){
            if (cariUzunluq == 0) sozSayi++;   // yeni sozun basi
            cariUzunluq++;
        } else {
            if (cariUzunluq > enUzunSoz) enUzunSoz = cariUzunluq;
            cariUzunluq = 0;
        }
    }
    if (cariUzunluq > enUzunSoz) enUzunSoz = cariUzunluq;   // son soz ucun

    cout << sozSayi << " " << enUzunSoz << endl;
    return 0;
}
