#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef unsigned long long ullong;

class App
{
public:
    void run()
    {
        short number_a = { 8 };
        short number_b = { ++number_a };
        cout << number_a << " " << number_b << endl;
    }

    
    int get()
    {
        short number_c = 1;
        short line = { ++number_c };
        cout << number_c << " " << line << endl;
        return number_c;
    }

    int long long fun_1()
    {
        int number_1 = { 8 };
        int number_2 = { 7 };
        int runner = { (number_1 + 5) * ++number_2 };
        cout << runner << " " << endl;
        return runner;
    }
};

int main()
{
    App app;
    app.run();

    short blok_1 = app.get();
    int blok_2 = app.fun_1();

    return 0;
}

//---------------------------------------------------------

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef unsigned long long ullong;

class App
{

public:

    void fun_1()
    {
        short number_1 = {};
        cin >> number_1;

        short number_2 = { 2 };
        short number_3 = { 3 };
        short number_4 = { 4 };
        short number_5 = { 5 };


        if (number_1 == number_2)
        {
            short get = number_1 + number_2;
            cout << get << endl;
        }

        else if (number_1 == number_3)
        {
            short get_2 = number_1 + number_3;
            cout << get_2 << endl;
        }

        else if (number_1 == number_4)
        {
            short get_3 = number_1 + number_4;
            cout << get_3 << endl;
        }
    }

    int fun_2()
    {
        int number_6 = 600;
        int number_7 = 700;
        int number_8 = 800;
        int number_9 = 900;
        int number_10 = 100;
    }
};

int main()
{
    App app;
    app.fun_1();
    app.fun_2();
    return 0;
}

//-------------------------------------------------------
#include <iostream>
#include <ios>
#include <iosfwd>



using std::cin;
using std::cout;
using std::endl;
typedef unsigned long long ullong;

class App
{

public:
	void run_1()
	{
		short number_1;
		cout << "input number:";
		cin >> number_1;

		short number_2 = 2;
		short number_3 = 3;
		short number_4 = 4;
		short number_5 = 5;

		if (number_1 == number_2)
		{
			short get_1 = number_1 + number_2;
			cout << get_1 << endl;
		}

		else if (number_1 == number_3)
		{
			short get_2 = number_1 + number_3;
			cout << get_2 << endl;
		}

		else if (number_1 == number_4)
		{
			short get_3 = number_1 + number_4;
			cout << get_3 << endl;
		}

		else if (number_1 == number_5)
		{

		}
	}
};

int main()
{
	App app;
	app.run_1();
}