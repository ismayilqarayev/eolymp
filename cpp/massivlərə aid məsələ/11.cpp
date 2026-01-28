/*
Massivi ekrana çap et
https://eolymp.com/az/problems/8953
*/


#include <iostream> // input-output əməliyyatları üçün
#include <vector>   // vector (dinamik massiv) üçün
using namespace std;

int main() 
{
    int n;
    cin >> n; // Massivin ölçüsünü oxuyuruq (n ədəd)

    vector<int> arr(n); // n ölçülü bir vector yaradırıq

    // Massivin elementlərini oxuyuruq
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i]; // i-ci elementi istifadəçidən alırıq
    }

    // Massivin bütün elementlərini çap edirik
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << endl; // Hər elementi yeni sətirdə çap edir
    }

    return 0; // Proqramı uğurla bitiririk
}

