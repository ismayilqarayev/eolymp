/*
    Mövzü 3 - N ədədinin 3-ya bölünməsi

    Məsələ: Tam ədəd N verilib. N-in 3-ya qalıqsız bölünüb-bölünmədiyini yoxlayın.

    Nümunə giriş: 57
    Nümunə çıxış: BÖLÜNÜR

    Yanaşma: N % 3 ifadəsinin nəticəsi 0-a bərabərdirsə, N ədədi 3-ya qalıqsız bölünür — bu, bölünmə yoxlamasının standart üsuludur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    cout << (n % 3 == 0 ? "B\u00d6L\u00dcN\u00dcR" : "B\u00d6L\u00dcNM\u00dcR") << "\n";
}
