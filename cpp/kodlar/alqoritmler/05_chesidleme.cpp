#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ededler = {5, 2, 9, 1, 5, 6};
    sort(ededler.begin(), ededler.end());
    for (int eded : ededler) cout << eded << ' ';
    cout << '\n';
}
