#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class User
{
private:
    string name;
    int age;
    long long phone_number;

    User(string name, int age, long long phoneNumber)
    {
        this->name = name;
        this->age = age;
        this->phone_number = phoneNumber;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    long long getPhoneNumber()
    {
        return phone_number;
    }

    
}

int main()
{

}