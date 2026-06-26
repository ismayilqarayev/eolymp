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