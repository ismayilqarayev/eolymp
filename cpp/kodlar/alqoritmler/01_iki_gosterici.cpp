#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ededler = {1, 2, 4, 7, 11, 15};
    int hedef = 15, sol = 0, sag = ededler.size() - 1;
    while (sol < sag) {
        int cem = ededler[sol] + ededler[sag];
        if (cem == hedef) { cout << sol << " " << sag << '\n'; return 0; }
        if (cem < hedef) ++sol; else --sag;
    }
    cout << "Tapilmadi\n";
}
