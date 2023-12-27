#include <iostream>

using namespace std;

int main()
{
  // your code goes here
  int number_1;
  cin >> number_1;
  while (-10 >= number_1 >= 10)
  {
      number_1 /= 10;
      number_1 /= -10;
  }

  std::cout << number_1;
  return 0;
}


#include <iostream>
#include <vector>

class App
{
private:
	int get_number_1 = 5;
	int get_number_2 = 6;
	int get_number_3 = 7;
	int get_number_4 = 8;
	int get_number_5 = 5;
	int get_number_6 = 6;
	int get_number_7 = 7;
	int get_number_8 = 8;

	
public:
	void fun_1()
	{
		int& num_1{ get_number_1 };
		int& num_2{ get_number_2 };
		int& num_3{ get_number_3 };
		int& num_4{ get_number_4 };
	}

	void fun_2()
	{
		
		std::cout << get_number_1 << std::endl;
	}
};

int main()
{
	App app;
	app.fun_1();
	app.fun_2();
}