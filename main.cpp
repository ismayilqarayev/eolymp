#include <iostream>
using namespace std;

class App
{
    public:
    [[nodiscard]]int number_1;

    int appNumber_1() const
    {
        return number_1;
    };

    void Fun_1(int num1)
    {
        num1 = 10;
        cout << num1;
    }
};

int main()
{
    App app{};
    App::Fun_1(app.appNumber_1());
}