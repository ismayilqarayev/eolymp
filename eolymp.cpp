#include <iostream>

int main() {
    // Assuming 'grade' is the variable representing the student's grade
    int grade;

    // Get the grade as input
    std::cin >> grade;

    // Determine the level based on the grade
    if (grade >= 1 && grade <= 3) {
        std::cout << "Initial\n";
    }
    else if (grade >= 4 && grade <= 6) {
        std::cout << "Average\n";
    }
    else if (grade >= 7 && grade <= 9) {
        std::cout << "Sufficient\n";
    }
    else if (grade >= 10 && grade <= 12) {
        std::cout << "High\n";
    }
    else {
        std::cout << "Invalid grade\n";
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade;
	cin >> grade;

	if (grade >= 1 && grade <= 3)
	{
		cout << "Initial\n";
	}

	else if (grade >= 4 && grade <= 6)
	{
		cout << "Average\n";
	}

	else if (grade >= 7 && grade <= 9)
	{
		cout << "Sufficient\n";
	}

	else if (grade >= 10 && grade <= 12)
	{
		cout << "High\n";
	}
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////
/*
Üçrəqəmli ədəd verilmişdir. Onun rəqəmlərindən hansının - birincinin, yoxsa axırıncının böyük olduğunu müəyyənləşdirin.

Giriş verilənləri
Yeganə sətirdə üçrəqəmli ədəd verilir.

Çıxış verilənləri
Çıxışa göstərilən rəqəmlərdən böyüyünü verin. Onlar bərabər olduqda "=" işarəsini verin.

Nümunə*/

#include <iostream>
using namespace std;

int main()
{
    int num; 
    cin >> num;

    if (num >= 100 && num <= 999) 
    {
        int first = num / 100; 
        int last = num % 10; 

        if (first > last) 
        {
            cout << first << endl; 
        }

        else if (first < last) 
        {
            cout << last << endl; 
        }

        else 
        {
            cout << "The first and the last digits are equal." << endl; 
        }
    }
    else 
    {
        cout << "Invalid number." << endl; 
    }
    return 0; 
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Tərəflərinin uzunluğu verilmiş üçbucağın növünü müəyyənləşdirməli (bərabərtərəfli, bərabəryanlı, müxtəliftərəfli).

Giriş verilənləri
Tək sətirdə üçbucağın tərəflərinin uzunluğu – 3 tam ədəd verilir. Tərəflərin uzunluğu 100-dən böyük deyil.

Çıxış verilənləri
Tək sətirdə üçbucaq bərabərtərəflidirsə - 1, bərabəryanlıdırsa - 2, müxtəliftərəflidirsə - 3 verməli.

Nümunə
*/

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= 100 && b <= 100 && c <= 100) {
        if (a == b && b == c) {
            std::cout << "1";
        }
        else if (a == b && b != c) {
            std::cout << "2";
        }
        else if (a == c && c != b) {
            std::cout << "2";
        }
        else if (c == b && b != a) {
            std::cout << "2";
        }
        else {
            std::cout << "3";
        }
    }
    else {
        std::cout << "Input values must be less than or equal to 100";
    }

    return 0;
}

//menim kodum
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >>  b >> c;

	if (a <= 100 && b <= 100 && c <= 100)
	{
		if (a == b && b == c)
		{
			cout << "1";
		}

		else if (a == b && b != c)
		{
			cout << "2";
		}

		else if (a == c && c != b)
		{
			cout << "2";
		}

		else if (c == b && b != a)
		{
			cout << "2";
		}
		else
		{
			cout << "3";
		}
	}
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
Üçrəqəmli ədəd verilmişdir. Onun rəqəmlərindən hansının - birincinin, yoxsa axırıncının böyük olduğunu müəyyənləşdirin.

Giriş verilənləri
Yeganə sətirdə üçrəqəmli ədəd verilir.

Çıxış verilənləri
Çıxışa göstərilən rəqəmlərdən böyüyünü verin. Onlar bərabər olduqda "=" işarəsini verin.*/

#include <iostream>
using namespace std;

int main()
{
    int num; 
    cin >> num;

    if (num >= 100 && num <= 999) 
    {
        int first = num / 100; 
        int last = num % 10; 

        if (first > last) 
        {
            cout << first << endl; 
        }

        else if (first < last) 
        {
            cout << last << endl; 
        }
    }
}

//---------------------------------------------------------------------------------------------------------
/*Üçrəqəmli ədəd verilir. Onun rəqəmlərinin hasilini hesablamalı.

Giriş verilənləri
Tək sətirdə üçrəqəmli ədəd verilir.

Çıxış verilənləri
Tək sətirdə verilmiş ədədin rəqəmlərinin hasilini verilməli.

Giriş verilənləri #1 content_copy
235

Çıxış verilənləri #1 content_copy
30

#include <iostream>
using namespace std;

int main()
{
    // Üçrəqəmli ədədi almaq üçün istifadəçidən məlumat almaq
    int eded;
    std::cin >> eded;

    // Ədədi rəqəmlərə bölmək və hasil hesablayaraq çap etmək
    int hasil = (eded / 100) * ((eded % 100) / 10) * (eded % 10);

    // Nəticəni çap etmək
    std::cout <<  hasil;

    return 0;
}

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int number;
	cin >> number;

	int number_1 = (number / 100);
	int number_2 = (number % 100) / 10;
	int number_3 = (number % 10);

	int hasil = number_1 * number_2 * number_3;
	cout << hasil;
	return 0;
}

//-----------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

int main() {
    char str[250];
    int ans = 0;

    std::cout << "Mətni daxil edin: ";
    std::cin.getline(str, sizeof(str));

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            while (str[i + 1] == ' ' && i + 1 < length) {
                i++;
            }
            ans++;
        }
    }

    std::cout << "Boşluq sayı: " << ans + 1 << std::endl;

    return 0;
}

/*
Verilmiş mətn fraqmentində sözlərin sayını müəyyənləşdirin.

Giriş verilənləri
Yeganə sətirdə ingilis dilində simvollarının sayı 
250
250-ni aşmayan mətn fraqmenti verilir. Zəmanət verilir ki, mətndə tire, defis, rəqəm və ədəd yoxdur.

Çıxış verilənləri
Yeganə ədəd - fraqmentdə sözlərin sayı.

Nümunə
Giriş verilənləri #1 content_copy
Hello world!
Çıxış verilənləri #1 content_copy
2
Giriş verilənləri #2 content_copy
Hello world! Hello,    country!
Çıxış verilənləri #2 content_copy
4
*/

#include <iostream>
#include <cstring>

int main() {
    char str[250];
    int ans = 0;

    std::cin.getline(str, sizeof(str));

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            while (str[i + 1] == ' ' && i + 1 < length)
            {
                i++;
            }
            ans++;
        }
    }

    std::cout << ans + 1 << std::endl;

    return 0;
}
//---------------------------------------------------------------------------

/*

İki mənfi olmayan n, m < 30 ədədləri verilir, n və m fərqlidirlər.

Yalnız bit əməliyyatlarından istifadə etməklə 2^n + 2^m ifadənin qiymətini hesablayın.

Giriş verilənləri
İki mənfi olmayan n və m tam ədədləri verilir.

Çıxış verilənləri
2^n + 2^m ifadəsinin qiymətini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
1 2
Çıxış verilənləri #1 content_copy
6

*/

#include <iostream>

using namespace std;

int main() 
{
    long long n, m;
    cin >> n >> m;

    long long a = 1 << n;  // 2 üstü n
    long long b = 1 << m;  // 2 üstü m

    cout << a + b;

    return 0;
}
//------------------------------------------------
Əli
#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;

    cin >> n;
    cin >> m;

    int c = n << 2;
    int d = m << 2;

    int g = c + d;
    
    cout  << g << "\n";
    return 0;
}







