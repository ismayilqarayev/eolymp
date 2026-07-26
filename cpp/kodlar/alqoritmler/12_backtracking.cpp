#include <iostream>
#include <vector>
using namespace std;

void kombinasiyaYarat(const vector<int>& ededler, int baslangic, vector<int>& secilenler) {
    if (secilenler.size() == 2) { for (int x : secilenler) cout << x << ' '; cout << '\n'; return; }
    for (int i = baslangic; i < (int)ededler.size(); ++i) { secilenler.push_back(ededler[i]); kombinasiyaYarat(ededler, i + 1, secilenler); secilenler.pop_back(); }
}
int main() { vector<int> ededler = {1, 2, 3}; vector<int> secilenler; kombinasiyaYarat(ededler, 0, secilenler); }
