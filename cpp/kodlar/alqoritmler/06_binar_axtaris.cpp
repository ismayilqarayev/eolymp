#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ededler = {1, 3, 5, 7, 9, 11};
    int hedef = 7, sol = 0, sag = ededler.size() - 1;
    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;
        if (ededler[orta] == hedef) { cout << orta << '\n'; return 0; }
        if (ededler[orta] < hedef) sol = orta + 1; else sag = orta - 1;
    }
    cout << -1 << '\n';
}
