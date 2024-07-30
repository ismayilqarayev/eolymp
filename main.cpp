#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fun1()
{
    vector<int> num3{1,2,3,4};
    auto get1 = num3.begin();
    num3.emplace(get1 + 4, 5);

    for (auto run : num3)
    {
        cout << run << " ";
    }
}

void fun2()
{
    vector<int> num4{1,2,3,4,5,6,7};
    auto get2 = num4.begin();
    num4.insert(get2 + 2, 2, 3);
}

void fun3()
{
    vector
}

int main()
{

}