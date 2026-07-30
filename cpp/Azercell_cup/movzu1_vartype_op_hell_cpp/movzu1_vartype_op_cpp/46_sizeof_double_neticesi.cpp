/*
    Movzu 1 - Deyisen/Tip/Operator - sizeof(double) nəticəsi

    Mesele: C++-da sizeof(double) ifadəsinin (adi 64-bit sistemdə) nəticəsini tapın (bayt ilə).

    Numune giris: (bos)
    Numune cixis: 8

    Yanasma: sizeof operatoru bir tipin yaddaşda neçə bayt tutduğunu qaytarır — bu, kompilyatordan asılı olsa da, adi 64-bit sistemlərdə standart dəyərlər var.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << sizeof(double) << "\n";
}
