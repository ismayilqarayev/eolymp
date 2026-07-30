/*
    Mövzü 3 - 100 və 50 ədədləri üzərində bit əməliyyatları

    Məsələ: İki tam ədəd a və b verilib. a AND b, a OR b və a XOR b nəticələrini tapın.

    Nümunə giriş: 100 50
    Nümunə çıxış: 32 118 86

    Yanaşma: C++-da & AND, | OR, ^ XOR əməliyyatlarını bit-bit tətbiq edir. Bu əməliyyatlar hər ədədin ikilik (binary) görünüşü üzərində işləyir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << (a & b) << " " << (a | b) << " " << (a ^ b) << "\n";
}
