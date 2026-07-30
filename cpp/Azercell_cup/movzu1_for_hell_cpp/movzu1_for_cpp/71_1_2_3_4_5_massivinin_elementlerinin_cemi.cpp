/*
    Movzu 1 - For dovru - {1, 2, 3, 4, 5} massivinin elementlərinin cəmi

    Mesele: N ədəddən ibarət massiv verilib. Onun bütün elementlərinin cəmini tapın.

    Numune giris: 5 / 1 2 3 4 5
    Numune cixis: 15

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
