/*
    Mövzü 3 - 53 ədədini 6-yə bölmə

    Məsələ: İki tam ədəd a və b verilib (b ≠ 0). a-nı b-yə böləndə alınan tam hissəni və qalığı tapın.

    Nümunə giriş: 53 6
    Nümunə çıxış: 8 5

    Yanaşma: a / b tam bölmə nəticəsini (tam hissəni), a % b isə qalığı verir — C++-da tam ədədlər üzərində bölmə avtomatik olaraq aşağı yuvarlaqlaşdırılır.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << a / b << " " << a % b << "\n";
}
