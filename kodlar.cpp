#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Birinci ədədi daxil edin: ";
    std::cin >> num1;


    std::cout << "Birinci ededi daxil edin: ";
    std::cin >> num2;


    int sum = num1 + num2;
    std::cout << "cavab: " << sum << std::endl;


    
    return 0;
}

//------------------------------------------------------------------

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int  number_1 = {};
    cin >> number_1;

    int number_2 = 1; 
    int number_3 = 2;

    if (number_1 == number_2)
    {
        int get = number_1 + number_2;
        cout << get << endl;
    }
    else if (number_1 == number_3)
    {
        int get_2 = number_1 + number_3;
        cout << get_2 << endl;
    }
}


//--------------------------------------------------------
#include "iostream"
using namespace std;

class App
{
public:
    static int run()
    {
        int number_1 = {};
        cout << "Enter an integer: ";
        cin >> number_1;

        int number_2 = {2};
        int number_3 = {30};
        int number_4 = {40};

        if (number_1 == number_2)
        {
            long blok = number_1 + number_2;
            cout << blok << endl;
        }

        while(number_4 > number_3)
        {

            long fle = number_3 + number_4;
            cout << fle << endl;
            return 0;
        }
        return 0;
    }

    static void get()
    {
        int number = { 10 };
        number <<= 5;
        cout << number << endl;
    }
};

int main()
{
    App::run();
    App::get();

    int number = {};
    number = 2 + 4;
    cout << number;

    return 0;
}

//-----------------------------------------------------------------
#include <iostream>
using namespace std;

class App
{
public:
    void run()
    {
        int number = { 10 };
        number += 10;
        cout << number << endl;
    }

    void get()
    {
        int number = { 10 };
        number <<= 5;
        cout << number << endl;
    }
};

int main()
{
    App app;
    app.run();
    app.get();
    int number = {};
    number = 2 + 4;
    cout << number;
}
//----------------------------------------------------------------
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
        short number_a = 8;
        short number_b = ++number_a;
        cout << number_a << " " << number_b << endl;
    }


    int get()
    {
        short number_c = 1;
        short line = ++number_c;
        cout << number_c << " " << line << endl;
        return number_c;
    }

    long long fun_1()
    {
        int number_1 = 8;
        int number_2 = 7;
        int runner = (number_1 + 5) * ++number_2;
        cout << runner << " " << endl;
        return runner;
    }
};

int main()
{
    App app;
    app.run();

    short blok_1 = app.get();
    long long blok_2 = app.fun_1();

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char number_1
	{
		'A'                       //  -------------------------------------------
	};                            //  tiplerin yəni məlumat növlərinin	
	short number_2 = number_1;    //  digər məlumat növlərinə yansıldılması
	                              //  (təhlükəsiz şəkildə)
								  //  burada char tipin short tipə yansıldılması. 
	int number_3                  //  --------------------------------------------
	{                             //  int tipin double tipe  
		100                       //  
	};                            //	                            
	double number_4 = number_3;   //  --------------------------------------------



	float number_5
	{
		3.3
	};
	double number_6 = number_5;


	long f
	{
		35
	};
	short s = f;
	cout << s << endl;
}
//
// Примеры безопасных преобразований:
// 
// signed char = 1
// unsigned char = 1
// char = 1
// ahort = 2 
// int = 4 - 8 
//  long 
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    using namespace std;

    char number_1
    {
        'A'
    };

    short number_2 = number_1;

    int number_3
    {
        100
    };

    double number_4 = number_3;

    float number_5
    {
        3.3
    };

    double number_6 = number_5;

    long f
    {
        35
    };

    short s = f;

    cout << s << endl;

    return 0;
}

//-------------------------------------------------------------
#include <iostream>
using namespace std;

int number_1 = 1;
int number_2 = 2;
int number_3 = 3;
int number_4 = 4;
int number_5 = 5;

int n = 1;

void fun_1()
{
	int get;
	cin >> get;

	if (get > number_1)
	{
		++n;
		cout << n;
	}

	else if( get > number_2)
	{
		++n;
		cout << n;
	}
	else
	{
		cout << "system configuration...";
	}
}

void fun_2()
{
	int get_2;
	cin >> get_2;

	if ()
}

int main()
{
	fun_1();
	fun_2();
}

//-------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "";
    string t = "";

    getline(cin >> s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a')
        {
            t = t + s[i];
        }
    }

    cout << t << "\n";
    return 0;
}

//---------------------------------------------------

#include <iostream>

using namespace std;

int number_1;
cin >> number_1;
int number_2;
int number_3;
int number_4;
int number_5;

int a_1;
int b_2;
int c_3;
int d_4;

void fun_1()
{
	//number_1 = 12;
	number_2 = 45;
	number_3 = 56;
	number_4 = 67;
	number_5 = 9;

	a_1 = 1;
	b_2 = 2;
	c_3 = 3;
	d_4 = 4;

	if (number_1 < number_2)
	{
		int get = ((number_3 + number_4) * number_1 * number_2);
		cout << get << "\n";
		
		if (number_4 > d_4)
		{
            number_1 += 1;
            cout << 
		}
	}

    else
    {
        
    }
}

void fun_2()
{

}

int main() 
{
	fun_1();
    fun_2();
}

//---------------------------------------------------

#include <iostream>

using namespace std;
int main()
{
    int ismayil;
    int ilqar;

    cout << "ismayil";
    cin >> ismayil;

    cout << "ilqar";
    cin >> ilqar;

    if (ismayil > ilqar)
    {
        cout << "ismayilin yasi ilqrdan boyukdur";
    }

    else if (ismayil < ilqar)
    {
        cout << "ilqarin yasi ismayildan boyukdur";
    }
}

//-----------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int number;
    int number_1 = 10;
    int number_2 = 10;

    while (true) 
    { 
        if (number_1 == number_2)
        {
            int b = 2 * (number_1 + number_2);
            cout << b;
            if (b == 40)
            {
                cout << b / 2;
            }
            return 0; // return kodunu silsek eger kod tekrarlanacaq
        }

    }
}
//---------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	for (int i = 1; i < 10; ++i)
	{
		cout << i + 20 << endl;
	}
}


//-----------------------------------------------------------

#include <iostream>
using namespace std;

class App
{
public:
    static int Fun_1()
    {
        int number_a = 8;
        ++number_a;
        return 0;
    }

    static int Fun_2()
    {
        int number_c = 1;
        int line = ++number_c;
        cout << number_c << " " << line << endl;
        return number_c;
    }

    static int Fun_3()
    {
        int number_1 = 8;
        int number_2 = 7;
        int runner = (number_1 + 5) * ++number_2;
        cout << runner << " " << endl;
        return 0;
    }
};

int main()
{
    [[maybe_unused]] App app;
    App::Fun_1();
    App::Fun_2();
    App::Fun_3();
}


//------------------------------------------------------------

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


#include <iostream>
using namespace std;

int main()
{
    const int n = 4;
    int numbers[n];
}


//------------------------------------------------------------------------------------------------



#include <bits/stdc++.h>

using namespace std;
class App
{
public:
    static int run([[maybe_unused]] int number_1 = {}, [[maybe_unused]] int number_2 = 2, [[maybe_unused]] int number_3 = 30, [[maybe_unused]] int number_4 = 40)
    {
        if (number_1 == number_2) { long long blok = number_1 + number_2; cout << blok << "\n"; }
        while (number_4 > number_3) { long long fle = number_3 + number_4; cout << fle << "\n"; }
    }
};


int main()
{
    App::run(0, 0, 0);
    //App::get();
}


//-------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long x;

void fun_1(){
    vector<int> number{1,2,3,4};
    x = number.at(0);
    cout << x << endl;
}


int main(){
    vector<int> number(5, 2);
    x = number.at(1);
    cout << x << endl;

    //funksiyanin qosulmasi
    fun_1();
}

