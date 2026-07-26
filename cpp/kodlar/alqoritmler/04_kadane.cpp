#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ededler = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int cari = ededler[0], enBoyuk = ededler[0];
    for (int i = 1; i < (int)ededler.size(); ++i) {
        cari = max(ededler[i], cari + ededler[i]);
        enBoyuk = max(enBoyuk, cari);
    }
    cout << enBoyuk << '\n';
}
