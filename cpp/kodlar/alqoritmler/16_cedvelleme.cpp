#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10; vector<long long> cedvel(n + 1, 0); cedvel[1] = 1;
    for (int i = 2; i <= n; ++i) cedvel[i] = cedvel[i - 1] + cedvel[i - 2];
    cout << cedvel[n] << '\n';
}
