#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main()
{
	int number;
	cin >> number;

	while (number < 5; ++number)
	{
		cout << number;
		if (number == 10)
		{
			break;
		}
	}
}