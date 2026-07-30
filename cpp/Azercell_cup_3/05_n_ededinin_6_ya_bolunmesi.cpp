/*
    Mövzü 3 - N ədədinin 6-ya bölünməsi

    Məsələ: Tam ədəd N verilib. N-in 6-ya qalıqsız bölünüb-bölünmədiyini yoxlayın.

    Nümunə giriş: 156
    Nümunə çıxış: BÖLÜNÜR

    Yanaşma: N % 6 ifadəsinin nəticəsi 0-a bərabərdirsə, N ədədi 6-ya qalıqsız bölünür — bu, bölünmə yoxlamasının standart üsuludur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    cout << (n % 6 == 0 ? "B\u00d6L\u00dcN\u00dcR" : "B\u00d6L\u00dcNM\u00dcR") << "\n";
}
