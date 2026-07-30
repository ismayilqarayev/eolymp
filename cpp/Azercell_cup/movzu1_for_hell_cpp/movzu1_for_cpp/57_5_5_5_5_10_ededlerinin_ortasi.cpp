/*
    Movzu 1 - For dovru - {5, 5, 5, 5, 10} ədədlərinin ortası

    Mesele: N ədəd verilib. Onların ortasını (arifmetik ortasını) tapın.

    Numune giris: 5 / 5 5 5 5 10
    Numune cixis: 6.00

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
