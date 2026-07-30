/*
    Mövzü 3 - 999 ədədini 17-yə bölmə

    Məsələ: İki tam ədəd a və b verilib (b ≠ 0). a-nı b-yə böləndə alınan tam hissəni və qalığı tapın.

    Nümunə giriş: 999 17
    Nümunə çıxış: 58 13

    Yanaşma: a / b tam bölmə nəticəsini (tam hissəni), a % b isə qalığı verir — C++-da tam ədədlər üzərində bölmə avtomatik olaraq aşağı yuvarlaqlaşdırılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a / b << " " << a % b << "\n";
}
