// =========================================================
// AZ-CUP — Movzu 2, Mesele 14: Sadə ədəd yoxlayan funksiya
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
using namespace std;

bool sadedirmi(int n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (sadedirmi(x)) cout << "SADƏ" << endl;
        else cout << "SADƏ DEYİL" << endl;
    }
    return 0;
}
