/*
    Mövzü 3 - 12 və 10 ədədləri üzərində bit əməliyyatları

    Məsələ: İki tam ədəd a və b verilib. a AND b, a OR b və a XOR b nəticələrini tapın.

    Nümunə giriş: 12 10
    Nümunə çıxış: 8 14 6

    Yanaşma: C++-da & AND, | OR, ^ XOR əməliyyatlarını bit-bit tətbiq edir. Bu əməliyyatlar hər ədədin ikilik (binary) görünüşü üzərində işləyir.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin >> a >> b;
    cout << (a & b) << " " << (a | b) << " " << (a ^ b) << "\n";
}
