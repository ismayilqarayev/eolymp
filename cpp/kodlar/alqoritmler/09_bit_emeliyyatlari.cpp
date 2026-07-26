#include <iostream>
using namespace std;

int main() {
    int eded = 10, bit = 1;
    cout << ((eded >> bit) & 1) << '\n'; // 1-ci bitin qiyməti
    eded |= (1 << bit);                   // 1-ci biti 1 et
    eded ^= (1 << bit);                   // 1-ci biti dəyiş
    cout << eded << '\n';
}
