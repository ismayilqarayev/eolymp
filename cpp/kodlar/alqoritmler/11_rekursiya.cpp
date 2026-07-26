#include <iostream>
using namespace std;

long long faktorial(int n) { return n <= 1 ? 1 : n * faktorial(n - 1); }
int main() { cout << faktorial(5) << '\n'; }
