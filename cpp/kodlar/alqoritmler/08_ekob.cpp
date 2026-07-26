#include <iostream>
using namespace std;

int ebob(int a, int b) { while (b) { int qaliq = a % b; a = b; b = qaliq; } return a; }
long long ekob(int a, int b) { return 1LL * a / ebob(a, b) * b; }
int main() { cout << ekob(12, 18) << '\n'; }
