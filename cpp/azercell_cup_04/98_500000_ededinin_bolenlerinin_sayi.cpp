/*
    Mövzü 4 - 500000 ədədinin bölənlərinin sayı

    Məsələ: Tam ədəd N verilib. N-in bütün müsbət bölənlərinin sayını tapın.

    Nümunə giriş: 500000
    Nümunə çıxış: 42

    Yanaşma: Bölənlər həmişə cüt-cüt gəlir: əgər i, N-i bölürsə, N/i də bölür. Ona görə yalnız 1-dən √N-ə qədər gəzmək kifayətdir — hər tapılan i üçün (i, N/i) cütünü sayır, i == N/i olduqda isə yalnız bir dəfə sayırıq.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    long long cnt = 0;
    for (long long i = 1; i * i <= n; i++){
        if (n % i == 0){
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    cout << cnt << "\n";
}
