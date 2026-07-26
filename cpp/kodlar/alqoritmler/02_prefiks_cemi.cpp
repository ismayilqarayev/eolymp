#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ededler = {3, 1, 4, 1, 5};
    vector<int> prefiks(ededler.size() + 1, 0);
    for (int i = 0; i < (int)ededler.size(); ++i) prefiks[i + 1] = prefiks[i] + ededler[i];
    int sol = 1, sag = 3; // [1, 3] aralığının cəmi
    cout << prefiks[sag + 1] - prefiks[sol] << '\n';
}
