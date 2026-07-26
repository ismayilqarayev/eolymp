#include <iostream>
#include <vector>
using namespace std;

void dfs(int duyun, const vector<vector<int>>& qraf, vector<bool>& gorulub) { gorulub[duyun] = true; cout << duyun << ' '; for (int qonshu : qraf[duyun]) if (!gorulub[qonshu]) dfs(qonshu, qraf, gorulub); }
int main() { vector<vector<int>> qraf = {{1, 2}, {0, 3}, {0, 3}, {1, 2}}; vector<bool> gorulub(4); dfs(0, qraf, gorulub); cout << '\n'; }
