#include <iostream>
using namespace std;

const long long MODUL = 1000000007;
long long modulQüvveti(long long esas, long long quvvet) {
    long long netice = 1;
    while (quvvet) { if (quvvet & 1) netice = netice * esas % MODUL; esas = esas * esas % MODUL; quvvet >>= 1; }
    return netice;
}
int main() { cout << modulQüvveti(2, 100) << '\n'; }
