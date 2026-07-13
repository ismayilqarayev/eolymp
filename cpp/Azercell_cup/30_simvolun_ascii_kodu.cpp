/*
 * M30 — Simvolun ASCII kodu
 *
 * Yanaşma:
 * Simvol char tipində oxunur, sonra (int)c ilə tam ədədə çevrilir — bu,
 * C++-da simvolların əslində kiçik tam ədədlər (ASCII kodları) kimi
 * saxlandığını göstərən əsas nümunədir.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    char c; cin >> c;
    cout << (int)c << "\n";
}
