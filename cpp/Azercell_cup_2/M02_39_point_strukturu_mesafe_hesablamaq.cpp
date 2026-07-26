// =========================================================
// AZ-CUP — Movzu 2, Mesele 39: Point strukturu — məsafə hesablamaq
// Sade (6-ci sinif seviyyesi) hell — massiv esaslı, STL konteynerleri
// (vector/map/set/pair/lambda) istifade olunmayıb.
// =========================================================
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Nogte{
    double x, y;
};

double mesafeTap(Nogte a, Nogte b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main(){
    Nogte a, b;
    cin >> a.x >> a.y >> b.x >> b.y;

    cout << fixed << setprecision(2) << mesafeTap(a, b) << endl;
    return 0;
}
