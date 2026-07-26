// =========================================================
// AZ-CUP — Movzu 2, Mesele 41: Strukturu funksiya ilə doldurmaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

struct Duzbucaqli{
    int en, hundurluk;
};

void oxu(Duzbucaqli &d){
    cin >> d.en >> d.hundurluk;
}

int main(){
    Duzbucaqli d;
    oxu(d);

    int sahe = d.en * d.hundurluk;
    int perimetr = 2 * (d.en + d.hundurluk);

    cout << sahe << " " << perimetr << endl;
    return 0;
}
