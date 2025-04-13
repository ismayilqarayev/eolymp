14 Verilmiş iki sətirin eyni olub olmadığını yoxlayın.
Giriş: "alma" və "alma"
Çıxış: true

#include <iostream>
using namespace std;

int main() 
{
    string setir1, setir2;

    // İstifadəçidən iki sətir daxil etməsini istəyirik
    cout << "Birinci sətiri daxil edin: ";
    cin >> setir1;

    cout << "İkinci sətiri daxil edin: ";
    cin >> setir2;

    // Sətirlərin eyni olub olmadığını yoxlayırıq
    if (setir1 == setir2) 
    {
        cout << "true" << endl;  // Eynidirlərsə true
    } 

    else 
    {
        cout << "false" << endl; // Fərqlidirlərsə false
    }

    return 0;
}


/*
İzah:
string setir1, setir2;

İki sətir üçün dəyişənlər elan olunur.

cin >> setir1; və cin >> setir2;

İstifadəçidən iki sətir daxil edilir.

Qeyd: cin ilə yalnız boşluqsuz söz oxunur (məsələn "alma", amma "salam dünya" yazsanız yalnız "salam" götürülər).

Əgər cümlə daxil etmək istəyirsinizsə getline(cin, setir1); istifadə olunmalıdır.

if (setir1 == setir2)

İki sətirin eyni olub olmadığını müqayisə edir.

C++ dilində == operatoru string üçün artıq mətn müqayisəsi kimi işləyir.

cout << "true"; və cout << "false";

Müvafiq olaraq nəticəni çap edir.
*/