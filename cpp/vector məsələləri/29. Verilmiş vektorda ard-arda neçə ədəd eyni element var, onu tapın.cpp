/*
29. Verilmiş vektorda ard-arda neçə ədəd eyni element var, onu tapın.
Giriş: {1, 1, 2, 3, 3, 3, 4}
Çıxış: 1: 2, 3: 3
*/

/*
İzah:
Başda count = 1 — çünki ilk elementi sayırıq.
Dövrdə:
    Əgər v[i] == v[i-1], deməli eyni ədəddir → count++.
    Əgər fərqli ədəddirsə:
        Əgər count > 1-dirsə, deməli ardıcıl təkrarlanıb → çap edirik.
        count sıfırlanır (1 olur) yeni ədəd üçün.
Dövr bitəndən sonra da son təkrarlanan element üçün ayrıca yoxlayırıq.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 1, 2, 3, 3, 3, 4};

    int count = 1; // İlk elementi sayırıq

    for (int i = 1; i < v.size(); i++) 
    {
        if (v[i] == v[i - 1]) 
        {
            count++; // Əvvəlki elementlə eynidirsə say artır
        }

        else 
        {
            if (count > 1) 
            { // Əgər bir dəfədən çox təkrar varsa çap et
                cout << v[i - 1] << ": " << count << endl;
            }
            count = 1; // Yeni element üçün sayğacı sıfırla
        }
    }

    // Axırıncı qrup üçün də yoxlama
    if (count > 1) 
    {
        cout << v[v.size() - 1] << ": " << count << endl;
    }

    return 0;
}
