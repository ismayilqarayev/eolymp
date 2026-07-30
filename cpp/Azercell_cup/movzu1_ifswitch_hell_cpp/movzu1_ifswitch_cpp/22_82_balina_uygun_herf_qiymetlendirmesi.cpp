/*
    Movzu 1 - If/Switch - 82 balına uyğun hərf qiymətləndirməsi

    Mesele: Bal (0-100) verilib. Uyğun hərf qiymətini tapın: 90+ A, 80-89 B, 70-79 C, 60-69 D, aşağı F.

    Numune giris: 82
    Numune cixis: B

    Yanasma: if/else if zənciri ilə əvvəlcə ən yüksək hədd yoxlanılır, uyğun gəlmirsə növbəti aşağı hədd yoxlanılır və s.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int score; cin >> score;
    if (score >= 90) cout << "A\n";
    else if (score >= 80) cout << "B\n";
    else if (score >= 70) cout << "C\n";
    else if (score >= 60) cout << "D\n";
    else cout << "F\n";
}
