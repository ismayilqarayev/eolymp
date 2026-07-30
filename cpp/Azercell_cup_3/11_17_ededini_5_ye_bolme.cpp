/*
    Mövzü 3 - 17 ədədini 5-yə bölmə

    Məsələ: İki tam ədəd a və b verilib (b ≠ 0). a-nı b-yə böləndə alınan tam hissəni və qalığı tapın.

    Nümunə giriş: 17 5
    Nümunə çıxış: 3 2

    Yanaşma: a / b tam bölmə nəticəsini (tam hissəni), a % b isə qalığı verir — C++-da tam ədədlər üzərində bölmə avtomatik olaraq aşağı yuvarlaqlaşdırılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a / b << " " << a % b << "\n";
}
