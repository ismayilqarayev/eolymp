/*
    Mövzü 3 - 4096 ədədinin 16-lıq (hex) görünüşü

    Məsələ: 10-luq say sistemində tam ədəd N verilib. Onun 16-lıq (hex) say sistemindəki görünüşünü kiçik hərflərlə çap edin.

    Nümunə giriş: 4096
    Nümunə çıxış: 1000

    Yanaşma: C++-un <iostream> axınında hex manipulyatoru istifadə olunaraq ədəd birbaşa 16-lıq formatda çap edilə bilər — bu, əl ilə qalıq hesablamaqdan daha sadədir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    cout << hex << n << "\n";
}
