/*
    Movzu 1 - For dovru - {10, 20, 30, 40} ədədlərinin ortası

    Mesele: N ədəd verilib. Onların ortasını (arifmetik ortasını) tapın.

    Numune giris: 4 / 10 20 30 40
    Numune cixis: 25.00

    Yanasma: for dövrü ilə bütün N ədəd oxunub cəmlənir, sonra cəm N-ə bölünərək orta tapılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++){
        double x; cin >> x;
        sum += x;
    }
    printf("%.2f\n", sum / n);
}
