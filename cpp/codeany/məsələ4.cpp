#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // n - məktəblərin sayı, k - almaların sayı

    // Səbətdə qalan almalar k % n ifadəsi ilə tapılır
    // Çünki k almanı n məktəbli arasında bərabər bölürük
    // Qalan isə səbətdə qalır
    cout << k % n;

    return 0;
}
