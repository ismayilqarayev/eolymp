#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ededler = {2, 1, 5, 1, 3, 2};
    int pəncere = 3, cem = 0, maksimum = 0;
    for (int i = 0; i < pəncere; ++i) cem += ededler[i];
    maksimum = cem;
    for (int i = pəncere; i < (int)ededler.size(); ++i) {
        cem += ededler[i] - ededler[i - pəncere];
        maksimum = max(maksimum, cem);
    }
    cout << maksimum << '\n';
}
