#include <iostream>

int main() 
{
    int number;
    std::cout << "Ikireqemli ededi daxil edin: ";
    std::cin >> number;

    int number_1
    {
        number/ 10
    };

    int number_2
    {
        number % 10
    };

    std::cout << number_1 << " " << number_2 << std::endl;

    return 0;
}
////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a;
	b = a / 10;
	c = a % 10;

	cout << b << " " << c;

	return 0;

}