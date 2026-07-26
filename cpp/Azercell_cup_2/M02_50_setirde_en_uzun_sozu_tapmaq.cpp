// =========================================================
// AZ-CUP — Movzu 2, Mesele 50: Sətirdə ən uzun sözü tapmaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
using namespace std;
int main(){
    string setir;
    getline(cin, setir);

    string enUzunSoz = "";
    string cariSoz = "";

    for (int i = 0; i <= (int)setir.length(); i++){
        // setrin sonuna catanda da son sozu yoxlamaq ucun i == length halini elave edirik
        if (i == (int)setir.length() || setir[i] == ' '){
            if (cariSoz.length() > enUzunSoz.length()) enUzunSoz = cariSoz;
            cariSoz = "";
        } else {
            cariSoz += setir[i];
        }
    }

    cout << enUzunSoz << endl;
    return 0;
}
