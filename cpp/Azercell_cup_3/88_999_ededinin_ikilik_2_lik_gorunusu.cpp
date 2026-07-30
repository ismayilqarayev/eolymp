/*
    Mövzü 3 - 999 ədədinin ikilik (2-lik) görünüşü

    Məsələ: 10-luq say sistemində tam ədəd N verilib. Onun ikilik (2-lik) say sistemindəki görünüşünü tapın.

    Nümunə giriş: 999
    Nümunə çıxış: 1111100111

    Yanaşma: N sıfır olana qədər 2-yə bölünür, hər addımda qalıq (0 və ya 1) yığılır. Qalıqlar sondan başlanğıca alındığı üçün nəticə tərsinə (başa əlavə edərək) qurulur.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    string binary = "";
    long long temp = n;
    while (temp > 0){
        binary = char('0' + temp % 2) + binary;
        temp /= 2;
    }
    cout << binary << "\n";
}
