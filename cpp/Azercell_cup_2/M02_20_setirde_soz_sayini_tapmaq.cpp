// =========================================================
// AZ-CUP — Movzu 2, Mesele 20: Sətirdə söz sayını tapmaq
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
    bool sozIcindeyik = false;

    // setri harf-harf gezib, boslugdan-harfe kecid oldugu yerde
    // yeni sozun basladigini anlayiriq
    for (int i = 0; i < (int)setir.length(); i++){
        if (setir[i] != ' '){
            if (!sozIcindeyik){
                sozSayi++;
                sozIcindeyik = true;
            }
        } else {
            sozIcindeyik = false;
        }
    }

    cout << sozSayi << endl;
    return 0;
}
