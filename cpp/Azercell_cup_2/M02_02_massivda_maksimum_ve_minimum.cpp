// =========================================================
// AZ-CUP — Movzu 2, Mesele 02: Massivda maksimum və minimum
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
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxi = a[0], mini = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxi) 
        {
            maxi = a[i];
        }
        
        if (a[i] < mini) 
        {
            mini = a[i];
        }
    }

    cout << maxi << " " << mini << endl;
    return 0;
}
