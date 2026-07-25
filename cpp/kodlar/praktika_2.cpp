#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Program1;
class Program2;

vector<int> vec1;
vector<int> vec2;
vector<int> vec3;   // deq1-in yerini tutur

class Program1
{
public:
    void fun1(vector<int>* v1, vector<int>* v2)
    {
        int sayi = 0;
        cout << "Vector1-in element sayini daxil edin: ";
        cin >> sayi;

        for (int i = 0; i < sayi; i++)
        {
            int a;
            cout << "Vector1-e element daxil edin: ";
            cin >> a;
            v1->push_back(a);
        }

        int sayi2 = 0;
        cout << "Vector2-nin element sayini daxil edin: ";
        cin >> sayi2;

        for (int i = 0; i < sayi2; i++)
        {
            int a;
            cout << "Vector2-ye element daxil edin: ";
            cin >> a;
            v2->push_back(a);
        }
    }

    void fun2(vector<int>* v1, vector<int>* v2)
    {
        // v1-in 2-ci mövqeyindən başlayaraq 2 ədəd 5 əlavə et
        auto begin = v1->begin();
        v1->insert(begin + 1, 2, 5);

        cout << "\nVector1 (insert sonrasi): ";
        for (auto i : *v1)
        {
            cout << i << " ";
        }
        cout << "\n";

        // 2-ci elementi sil
        v1->erase(v1->begin() + 1);

        cout << "Vector1 (erase sonrasi):  ";
        for (auto i : *v1)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
};

class Program2
{
public:
    // Deque əvəzinə vector istifadə olunur
    // Vector də front/back əməliyyatlarını dəstəkləyir
    void fun3(vector<int>* v)
    {
        int sayi = 0;
        cout << "\nVector3-un element sayini daxil edin: ";
        cin >> sayi;

        for (int i = 0; i < sayi; i++)
        {
            int a;
            cout << "Vector3-e element daxil edin: ";
            cin >> a;
            v->push_back(a);
        }

        cout << "\nVector3: ";
        for (auto i : *v)
        {
            cout << i << " ";
        }
        cout << "\n";

        // Ön tərəfə element əlavə etmək (deque-da push_front var)
        // Vector-da insert ilə eyni nəticə alınır
        if (!v->empty())
        {
            v->insert(v->begin(), 99);
            cout << "Ona 99 elave edildikden sonra: ";
            for (auto i : *v)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Program1* p1 = new Program1();
    p1->fun1(&vec1, &vec2);
    p1->fun2(&vec1, &vec2);

    Program2* p2 = new Program2();
    p2->fun3(&vec3);

    delete p1;
    delete p2;

    return 0;
}