#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> qraf = {{1, 2}, {0, 3}, {0, 3}, {1, 2}}; vector<bool> gorulub(4);
    queue<int> novbe; novbe.push(0); gorulub[0] = true;
    while (!novbe.empty()) { int duyun = novbe.front(); novbe.pop(); cout << duyun << ' '; for (int qonshu : qraf[duyun]) if (!gorulub[qonshu]) { gorulub[qonshu] = true; novbe.push(qonshu); } }
    cout << '\n';
}
