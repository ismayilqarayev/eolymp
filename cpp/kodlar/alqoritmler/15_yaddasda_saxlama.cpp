#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n, vector<long long>& yaddaş) {
    if (n <= 1) return n;
    if (yaddaş[n] != -1) return yaddaş[n];
    return yaddaş[n] = fibonacci(n - 1, yaddaş) + fibonacci(n - 2, yaddaş);
}
int main() { vector<long long> yaddaş(51, -1); cout << fibonacci(50, yaddaş) << '\n'; }
