#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sikkeler = {1, 5, 10, 25}; int mebleg = 63, say = 0;
    sort(sikkeler.rbegin(), sikkeler.rend());
    for (int sikke : sikkeler) { say += mebleg / sikke; mebleg %= sikke; }
    cout << say << '\n';
}
