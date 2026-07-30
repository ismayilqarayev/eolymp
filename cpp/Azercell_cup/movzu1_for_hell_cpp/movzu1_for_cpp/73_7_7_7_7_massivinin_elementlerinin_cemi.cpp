/*
    Movzu 1 - For dovru - {7, 7, 7, 7} massivinin elementlərinin cəmi

    Mesele: N ədəddən ibarət massiv verilib. Onun bütün elementlərinin cəmini tapın.

    Numune giris: 4 / 7 7 7 7
    Numune cixis: 28

    Yanasma: for dövrü massivin bütün elementlərini bir-bir oxuyur və cəmə əlavə edir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
    }
    cout << sum << "\n";
}
