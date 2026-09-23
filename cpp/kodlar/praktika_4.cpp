
//--------------------------------------------------------------
//praktika_3.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Program1
{
    public:
    void VectorleriDaxilEt(vector<int>& vector1, vector<int>& vector2, vector<int>& vector3)
    {
        // Vector1 üçün elementləri daxil etmək
        int say;
        cout << "Vector1-in element sayini daxil edin: ";
        cin >> say;

        for(int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector1.push_back(element);
        }

        // Vector2 üçün elementləri daxil etmək
        cout << "\nVector2-nin element sayini daxil edin: ";
        cin >> say;

        for(int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector2.push_back(element);
        }

        // Vector3 üçün elementləri daxil etmək
        cout << "\nVector3-un element sayini daxil edin: ";
        cin >> say;

        for(int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector3.push_back(element);
        }
    }

    void EvveleElementElaveEt(vector<int>& vector1, vector<int>& vector2, vector<int>& vector3)
    {
        vector1.insert(vector1.begin(), 1);

        cout << "\nVector1-in 1-ci elementini daxil etdikden sonra:\n";
        VectoruCapEt(vector1, vector2, vector3);
    }

    private:
    void VectoruCapEt(const vector<int>& vector1, const vector<int>& vector2, const vector<int>& vector3)
    {
        cout << "Vector1: ";
        for(int i = 0; i < vector1.size(); i++)
        {
            cout << vector1[i] << " ";
        }
        cout << endl;

        cout << "Vector2: ";
        for(int i = 0; i < vector2.size(); i++)
        {
            cout << vector2[i] << " ";
        }
        cout << endl;

        cout << "Vector3: ";
        for(int i = 0; i < vector3.size(); i++)
        {
            cout << vector3[i] << " ";
        }
        cout << endl;
    }
    
};

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    vector <int> vector3;

    Program1 program1;
    program1.VectorleriDaxilEt(vector1, vector2, vector3);
    program1.EvveleElementElaveEt(vector1, vector2, vector3);
    
}

//--------------------------------------------------------------


#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Object1: melumatlari saxlayir
class Object1
{
    vector<int> user1;
    vector<int> user2;
    vector<int> user3;

public:
    // const & : kopyalamadan oxuyuruq
    void MelumatlariDaxilEt(const vector<int>& u1, const vector<int>& u2, const vector<int>& u3)
    {
        user1 = u1;
        user2 = u2;
        user3 = u3;
    }

    // & qaytarir: xaricden birbasa deyisdirmek olar
    vector<int>& GetUser1() { return user1; }

    // const & qaytarir: yalniz oxumaq ucun
    const vector<int>& GetUser2() const { return user2; }
    const vector<int>& GetUser3() const { return user3; }
};

// Object2: gostericini (*) ile Object1-i gosterir
class Object2
{
    Object1* obj;

public:
    Object2(Object1* o) : obj(o) {}

    void Elave(int x)
    {
        obj->GetUser1().push_back(x); // (*obj).GetUser1() ile eynidir
    }
};

// Object3: referansla (&) Object1-i saxlayir
class Object3
{
    Object1& obj;

public:
    Object3(Object1& o) : obj(o) {}

    void Cap() const
    {
        for (int x : obj.GetUser1()) cout << x << " ";
        cout << endl;
    }
};

// Sade funksiyalar: deyerle, referansla, gosterici ile
void ArtirDeyer(int x) { x++; }      // kopya, xaricde deyismir
void ArtirRef(int& x) { x++; }       // referans, xaricde deyisir
void ArtirGost(int* x) { (*x)++; }   // gosterici, xaricde deyisir

int main()
{
    int a = 5;
    ArtirDeyer(a);
    cout << "deyerle: " << a << endl;   // 5
    ArtirRef(a);
    cout << "referans: " << a << endl;   // 6
    ArtirGost(&a);                       // &a = a-nin unvani
    cout << "gosterici: " << a << endl;  // 7

    Object1 o1;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5};
    vector<int> v3 = {6};
    o1.MelumatlariDaxilEt(v1, v2, v3);

    Object2 o2(&o1);   // unvanini veririk
    o2.Elave(100);

    Object3 o3(o1);    // referans kimi veririk
    o3.Cap();          // 1 2 3 100

    return 0;
}
