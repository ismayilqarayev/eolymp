/*
    Movzu 1 - If/Switch - 6, 6, 9 tərəfli üçbucağın növü

    Mesele: Üçbucağın üç tərəfi verilib. Bərabərtərəfli (hamısı bərabər), bərabəryanlı (iki tərəf bərabər), yoxsa müxtəlifyanlı olduğunu müəyyən edin.

    Numune giris: 6 6 9
    Numune cixis: BƏRABƏRYANLI

    Yanasma: Əvvəlcə hər üç tərəfin bərabərliyi yoxlanılır (if), sonra ikisinin bərabərliyi (else if, || ilə), qalan hal isə müxtəlifyanlıdır (else).
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    if (a == b && b == c) cout << "B\u018fRAB\u018fRT\u018fR\u018fFL\u0130\n";
    else if (a == b || b == c || a == c) cout << "B\u018fRAB\u018fRYANLI\n";
    else cout << "M\u00dcXT\u018fL\u0130FYANLI\n";
}
