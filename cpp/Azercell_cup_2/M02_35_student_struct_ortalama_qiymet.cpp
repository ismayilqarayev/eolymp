// =========================================================
// AZ-CUP — Movzu 2, Mesele 35: Student struct — ortalama qiymət
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Sagird{
    string ad;
    int q1, q2, q3;
};

int main(){
    int n;
    cin >> n;
    Sagird sagirdler[100];

    for (int i = 0; i < n; i++)
        cin >> sagirdler[i].ad >> sagirdler[i].q1 >> sagirdler[i].q2 >> sagirdler[i].q3;

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++){
        double ortalama = (sagirdler[i].q1 + sagirdler[i].q2 + sagirdler[i].q3) / 3.0;
        cout << sagirdler[i].ad << ": " << ortalama << endl;
    }
    return 0;
}
