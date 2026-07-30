/*
    Movzu 1 - For dovru - 1-dən 8-ə qədər hər ikinci ədədi çap etmək

    Mesele: N verilib. 1-dən N-ə qədər hər ikinci ədədi (1, 3, 5, ...) çap edin.

    Numune giris: 8
    Numune cixis: 1 3 5 7

    Yanasma: for dövründə addım ölçüsü 2 seçilir (i += 2) ki, hər dəfə bir ədəd atlanılsın.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    bool first = true;
    for (int i = 1; i <= n; i += 2){
        if (!first) cout << " ";
        cout << i; first = false;
    }
    cout << "\n";
}
