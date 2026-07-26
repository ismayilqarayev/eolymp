// =========================================================
// AZ-CUP — Movzu 2, Mesele 01: Massivin elementlərinin cəmi
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}
