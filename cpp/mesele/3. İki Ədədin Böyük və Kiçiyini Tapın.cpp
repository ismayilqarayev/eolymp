3. İki Ədədin Böyük və Kiçiyini Tapın
Məsələ: İstifadəçidən iki tam ədəd daxil etməsini istəyən və onların hansının böyük, hansının kiçik olduğunu göstərən proqram yazın.

Giriş:
İki tam ədəd daxil edilir.
Məsələn: 7 10

Çıxış:

makefile
Копировать
Редактировать
Giriş: 7 10
Böyük: 10
Kiçik: 7

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "İki tam ədəd daxil edin: ";
    cin >> x >> y;

    if (x > y)
        cout << "Böyük: " << x << "\nKiçik: " << y << endl;
    else if (y > x)
        cout << "Böyük: " << y << "\nKiçik: " << x << endl;
    else
        cout << "Ədədlər bərabərdir." << endl;

    return 0;
}
