#include <iostream>
#include <vector>
using namespace std;

void dfs(int duyun, const vector<vector<int>>& qraf, vector<bool>& gorulub) { gorulub[duyun] = true; for (int qonshu : qraf[duyun]) if (!gorulub[qonshu]) dfs(qonshu, qraf, gorulub); }
int main() {
    vector<vector<int>> qraf = {{1}, {0}, {3}, {2}, {}}; vector<bool> gorulub(5); int komponentSayi = 0;
    for (int i = 0; i < 5; ++i) if (!gorulub[i]) { ++komponentSayi; dfs(i, qraf, gorulub); }
    cout << komponentSayi << '\n';
}
