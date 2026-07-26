// =========================================================
// AZ-CUP — Movzu 2, Mesele 31: Matrisi spiral formada çap etmək
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[55][55];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int ust = 0, alt = n - 1, sol = 0, sag = m - 1;
    int netice[3000], say = 0;

    while (ust <= alt && sol <= sag){
        for (int j = sol; j <= sag; j++) netice[say++] = a[ust][j];
        ust++;

        for (int i = ust; i <= alt; i++) netice[say++] = a[i][sag];
        sag--;

        if (ust <= alt){
            for (int j = sag; j >= sol; j--) netice[say++] = a[alt][j];
            alt--;
        }
        if (sol <= sag){
            for (int i = alt; i >= ust; i--) netice[say++] = a[i][sol];
            sol++;
        }
    }

    for (int i = 0; i < say; i++) cout << netice[i] << " ";
    cout << endl;
    return 0;
}
