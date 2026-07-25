// C++ STL nümunəsi — vector, insert, erase, sort, deque
#include <iostream>
#include <vector>

using namespace std;

class Program1
{
private:
    void VectoruCapEt(const vector<int>& v)
    {
        for (int element : v)
            cout << element << " ";

        cout << endl;
    }

public:
    void VectorleriDaxilEt(vector<int>& vector1, vector<int>& vector2)
    {
        int say;

        cout << "Vector1-in element sayini daxil edin: ";
        cin >> say;

        for (int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector1.push_back(element);
        }

        cout << "\nVector2-nin element sayini daxil edin: ";
        cin >> say;

        for (int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector2.push_back(element);
        }
    }

    void VectorEmeliyyatlari(vector<int>& vector1)
    {
        vector1.insert(vector1.begin() + 1, 2, 5);

        cout << "\nInsert emeliyyatindan sonra:\n";
        VectoruCapEt(vector1);

        vector1.erase(vector1.begin() + 1);

        cout << "\nErase emeliyyatindan sonra:\n";
        VectoruCapEt(vector1);
    }
};

class Program2
{
private:
    void VectoruCapEt(const vector<int>& v)
    {
        for (int element : v)
            cout << element << " ";

        cout << endl;
    }

public:
    void UcuncuVectoruDaxilEt(vector<int>& vector3)
    {
        int say;

        cout << "\nVector3-un element sayini daxil edin: ";
        cin >> say;

        for (int i = 0; i < say; i++)
        {
            int element;
            cout << i + 1 << "-ci elementi daxil edin: ";
            cin >> element;
            vector3.push_back(element);
        }
    }

    void EvveleElementElaveEt(vector<int>& vector3)
    {
        vector3.insert(vector3.begin(), 99);

        cout << "\nEvvele 99 elave edildikden sonra:\n";
        VectoruCapEt(vector3);
    }
};

int main()
{
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    Program1 proqram1;
    proqram1.VectorleriDaxilEt(vector1, vector2);
    proqram1.VectorEmeliyyatlari(vector1);

    Program2 proqram2;
    proqram2.UcuncuVectoruDaxilEt(vector3);
    proqram2.EvveleElementElaveEt(vector3);

    return 0;
}

