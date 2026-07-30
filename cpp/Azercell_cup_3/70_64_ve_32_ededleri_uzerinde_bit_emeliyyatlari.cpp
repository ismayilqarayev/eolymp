/*
    Mövzü 3 - 64 və 32 ədədləri üzərində bit əməliyyatları

    Məsələ: İki tam ədəd a və b verilib. a AND b, a OR b və a XOR b nəticələrini tapın.

    Nümunə giriş: 64 32
    Nümunə çıxış: 0 96 96

    Yanaşma: C++-da & AND, | OR, ^ XOR əməliyyatlarını bit-bit tətbiq edir. Bu əməliyyatlar hər ədədin ikilik (binary) görünüşü üzərində işləyir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << (a & b) << " " << (a | b) << " " << (a ^ b) << "\n";
}
