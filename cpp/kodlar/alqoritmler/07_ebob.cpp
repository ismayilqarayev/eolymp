#include <iostream>
using namespace std;

int ebob(int a, int b) { while (b) { int qaliq = a % b; a = b; b = qaliq; } return a; }
int main() { cout << ebob(48, 18) << '\n'; }
