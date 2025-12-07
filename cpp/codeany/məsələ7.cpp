/*
Taksi

Zaman limiti: 1.0 saniyə
Yaddaş limiti: 128 MiB

"Pik" saatında eyni marşrut üzrə hərəkət edən üç marşrut taksisi eyni anda dayanacağa
yaxınlaşdı və sərnişinlər dərhal onlara minib doluşdular.
Hər taksidə sərnişin sayının fərqli olduğunu görən sürücülər qərara gəldilər ki, sərnişinlərin bir hissəsini elə dəyişdirsinlər ki, hər taksidə bərabər sayda sərnişin olsun. Tapşırıq – bu bərabərliyi yaratmaq üçün minimum neçə sərnişinin düşürülüb yenidən yerləşdirilməsinin tələb olunduğunu müəyyən etməkdir.

Giriş verilənləri

Girişdə 100-ü aşmayan üç natural ədəd verilir.
Bu ədədlər müvafiq olaraq 1-ci, 2-ci və 3-cü marşrut 
taksilərindəki sərnişinlərin sayını ifadə edir.

Çıxış verilənləri

Çıxışa bir ədəd – yenidən yerləşdirilməsi tələb olunan
sərnişinlərin minimum sayı verilməlidir.
Əgər sərnişinləri taksilər arasında bərabər bölmək mümkün deyilsə,
böyük hərflərlə IMPOSSIBLE sözünü çap edin.
*/

/*
Məsələnin mahiyyəti

Üç taksidə sərnişin sayı verilir:

x, y, z


Sürücülər istəyir ki, hər taksidə bərabər sərnişin olsun.

Vacib fikir

Əgər ümumi sərnişin sayı 3-ə bölünmürsə, sərnişinləri bərabər bölmək mümkün deyil.

Yəni:

total = x + y + z
əgər total % 3 != 0 → IMPOSSIBLE


Əgər mümkündürsə:

target = total / 3


Dəyişdirilməsi lazım olan sərnişinlərin minimum sayı — yalnız artıq sərnişinlərin cəmidir
(çünki artıq sərnişinlər düşüb çatışmayanlara gedəcək).
*/

#include <iostream>
using namespace std;

int main() 
{
    int x, y, z;
    cin >> x >> y >> z;  // Hər taksidəki sərnişin sayı

    int total = x + y + z;

    // Bərabər bölmək mümkün deyil
    if (total % 3 != 0) 
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    int target = total / 3;  // Hər taksidə olmalı sərnişin sayı

    int moves = 0;

    // Artıq sərnişinləri hesablayırıq
    if (x > target) moves += x - target;
    if (y > target) moves += y - target;
    if (z > target) moves += z - target;

    cout << moves;
    return 0;
}

/*
Nümunə

Giriş:

2 3 4


Hesab:

total = 9 → bölünür

target = 3

Artıq sərnişin yalnız 3-cü taksidədir (4 → 1 artıq)

Çıxış:

1
*/
