#include <iostream>
using namespace std;

class Get
{

private:
	int number_get_1;
	int number_get_2;
	int number_get_3;
	int number_get_4;
	int number_get_5;

	int number_1;
	int number_2;
	int number_3;
	

public:
	void fun_1()
	{
		number_1 = 100;
		number_2 = 200;
		number_3 = 300;
		
	}

	void fun_2()
	{
		number_get_1 = 10;
		number_get_2 = 20;
		number_get_3 = 30;
		number_get_4 = 40;
		number_get_5 = 50;
	}

	void fun_3()
	{
		if (number_get_1 > number_get_2)
		{
			int connect_1 = number_get_1 + number_get_2;
			cout << connect_1;
		}
	}

	void fun_4()
	{
		if (number_get_1 < number_get_3)
		{
			int connect_2 = number_get_1 + number_get_3;
			cout << connect_2;
		}
	}


};

class App
{

private:
	int number_4;
	int number_5;

public:
	int getNumber_4() const{
		return number_4;
	}

	int getNumber_5() const{
		return number_5;
	}


public:
	void fun_4(int view_1, int view_2)
	{
		int get = view_1 + view_2;
	}
};


int main()
{
	Get get;
	get.fun_1();
	get.fun_2();
	get.fun_3();
	
	App app;
	App.fun_4(get.getNumber_4(), get.getNumber_5());
}


//---------------------------------------------------------


#include <iostream>
using namespace std;

class Get
{
private:
    int number_1 = 5;
    int number_2 = 5;


public:
    int getNumber1() const {
        return number_1;
    }

    int getNumber2() const {
        return number_2;
    }

    void Fun_1(int n1, int n2)
    {
        int run = n1 + n2;
        cout << run << endl;
    }
};

int main()
{
    Get get;
    get.Fun_1(get.getNumber1(), get.getNumber2());
}