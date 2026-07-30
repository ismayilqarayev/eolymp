/*
    Mövzü 3 - 1-dən 37-ə qədər sadə ədədlərin sayı

    Məsələ: Tam ədəd N verilib. 1-dən N-ə qədər (N daxil) neçə sadə ədəd olduğunu tapın.

    Nümunə giriş: 37
    Nümunə çıxış: 12

    Yanaşma: Eratosfen ələyi istifadə olunur: hər asal ədədin bütün mislərini kompozit (asal olmayan) kimi işarələyirik, sonda işarələnməmiş ədədlərin sayı cavabdır. Bu üsul N-ə qədər bütün sadə ədədləri tək-tək yoxlamaqdan (O(N√N)) qat-qat sürətlidir (O(N log log N)).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<bool> isComposite(n + 1, false);
    for (int i = 2; (long long)i * i <= n; i++)
        if (!isComposite[i])
            for (int j = i * i; j <= n; j += i)
                isComposite[j] = true;
    int cnt = 0;
    for (int i = 2; i <= n; i++) if (!isComposite[i]) cnt++;
    cout << cnt << "\n";
}
