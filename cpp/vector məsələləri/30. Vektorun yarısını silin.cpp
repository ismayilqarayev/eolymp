/*
30. Vektorun yarısını silin.
Giriş: {1, 2, 3, 4, 5, 6} 
Çıxış: {1, 2, 3}
*/

/*
İzah:
v.size() → vektorun ölçüsünü alırıq (burada 6).
v.resize(half) → vektorun ölçüsünü yarıya endirir (burada 3).
for dövrü ilə qalan elementləri ekrana çıxarırıq.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    int half = v.size() / 2; // Vektorun yarısının ölçüsü

    v.resize(half); // Yarısından sonrakı elementləri sil

    // Nəticəni çap edirik
    for (int x : v) 
    {
        cout << x << " ";
    }

    return 0;
}
