#include <iostream>

int main()
{
    // Assuming 'grade' is the variable representing the student's grade
    int grade;

    // Get the grade as input
    std::cin >> grade;

    // Determine the level based on the grade
    if (grade >= 1 && grade <= 3)
    {
        std::cout << "Initial\n";
    }
    else if (grade >= 4 && grade <= 6)
    {
        std::cout << "Average\n";
    }
    else if (grade >= 7 && grade <= 9)
    {
        std::cout << "Sufficient\n";
    }
    else if (grade >= 10 && grade <= 12)
    {
        std::cout << "High\n";
    }
    else
    {
        std::cout << "Invalid grade\n";
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using std::cin;
using std::cout;
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
Tərəflərinin uzunluğu verilmiş üçbucağın növünü müəyyənləşdirməli
(bərabərtərəfli, bərabəryanlı, müxtəliftərəfli).

Giriş verilənləri
Tək sətirdə üçbucağın tərəflərinin uzunluğu – 3 tam ədəd verilir.
Tərəflərin uzunluğu 100-dən böyük deyil.

Çıxış verilənləri
Tək sətirdə üçbucaq bərabərtərəflidirsə - 1, bərabəryanlıdırsa - 2,
 müxtəliftərəflidirsə - 3 verməli.

Nümunə
*/

#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= 100 && b <= 100 && c <= 100)
    {
        if (a == b && b == c)
        {
            std::cout << "1";
        }
        else if (a == b && b != c)
        {
            std::cout << "2";
        }
        else if (a == c && c != b)
        {
            std::cout << "2";
        }
        else if (c == b && b != a)
        {
            std::cout << "2";
        }
        else
        {
            std::cout << "3";
        }
    }
    else
    {
        std::cout << "Input values must be less than or equal to 100";
    }

    return 0;
}

// menim kodum
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

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

using std::cin;
using std::cout;
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

int main()
{
    char str[250];
    int ans = 0;

    std::cout << "Mətni daxil edin: ";
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

int main()
{
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
//************************************************************************************
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

    long long a = 1 << n; // 2 üstü n
    long long b = 1 << m; // 2 üstü m

    cout << a + b;

    return 0;
}

//----------------------------pow ile yazilan-----------------------------//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long a = pow(2, n); // Calculate 2^n using the pow function
    long long b = pow(2, m); // Calculate 2^m using the pow function

    cout << a + b; // Print the sum of 2^n and 2^m

    return 0;
}

//-------------------------------------------------------------//
/*
uçbucağın tərəflərinin uzunluğu verilir.
Bu üçbucağın düzbucaqlı olub-olmadığını müəyyənləşdirməli.

Giriş verilənləri
Yeganə sətirdə
3
3 natural ədəd — üçbucağın tərəflərinin uzunluğu verilir. Tərəflərin uzunluğu
1000
−
1000−i aşmır.

Çıxış verilənləri
Üçbucaq düzbucaqlıdırsa, "YES" (dırnaqsız), əks halda "NO" (dırnaqsız) verməli.

Nümunə
Giriş verilənləri #1 content_copy        Çıxış verilənləri #1 content_copy
3 5 4                                    YES


Giriş verilənləri #2 content_copy        Çıxış verilənləri #2 content_copy
3 5 5                                    NO
*/
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
        cout << "YES" << endl;
    }

    else if (pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        cout << "YES" << endl;
    }

    else if (pow(a, 2) + pow(c, 2) == pow(b, 2))
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

//------------------------------------------------------------------------

/*Sadə funksiya

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB

f(x)=x+sin(x) funksiyasını reallaşdırın.

Giriş verilənləri
x həqiqi ədədi.

Çıxış verilənləri
f(x) funksiyasının qiymətini 
4
4 işarə dəqiqliyi ilə çap edin.

Nümunə
Giriş verilənləri #1 content_copy
1.1234

Çıxış verilənləri #1 content_copy
2.0250

Giriş verilənləri #2 content_copy
-3.1415

Çıxış verilənləri #2 content_copy
-3.1416*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    cin >> x;

    double result = x + sin(x);
    cout << result << endl;
    return 0;
}


//-------------------------------------------------------
//-------------------------------------------------------
//-------------------------------------------------------

/*Müsbət ədədlərin ədədi ortası

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Həqiqi ədədlərdən ibarət ardıcıllıq verilmişdir. Ardıcıllıqdakı müsbət ədədlərin ədədi ortasını hesablayın.

Giriş verilənləri
Birinci sətirdə həqiqi ədədlərin n (0 < n ≤ 100) sayı verilir. Növbəti sətirdə qiyməti modulca 100-dən böyük olmayan n sayda ədəd verilir.

Çıxış verilənləri
Tək sətirdə onluq nöqtədən sonra 2 işarə dəqiqliyi ilə müsbət ədədlərin ədədi ortasını çap edin. Müsbət ədəd yoxdursa, "Not Found" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
3
5.2 -2 4
Çıxış verilənləri #1 content_copy
4.60
Giriş verilənləri #2 content_copy
3
-5.2 -2 -4
Çıxış verilənləri #2 content_copy
Not Found*/

#include <iostream>
#include <iomanip> // setprecision fonksiyonu için gerekli olan başlık

int main()
{
    long long n;
    double x;
    double k = 0; // Pozitif sayıların toplam adedi
    double s = 0; // Pozitif sayıların toplamı

    // Kullanıcıdan n değerini al
    std::cin >> n;

    // n adet sayıyı oku ve pozitif olanları topla
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;

        if (x > 0)
        {
            s += x; // Pozitif sayıları topla
            k++; // Pozitif sayı adedini arttır
        }
    }

    // Eğer en az bir pozitif sayı varsa, ortalama hesapla ve yazdır
    if (s > 0)
    {
        double average = s / k; // Ortalama hesabı
        std::cout << std::fixed << std::setprecision(2) << average << std::endl;
    }

    else
    {
        std::cout << "Not Found" << std::endl;
    }

    return 0;
}



#include <iostream>
#include <iomanip> // setprecision fonksiyonu için gerekli olan başlık

int main()
{
    int n;
    double x;
    double k = 0; // Pozitif sayıların toplam adedi
    double s = 0; // Pozitif sayıların toplamı

    // Kullanıcıdan n değerini al
    std::cin >> n;

    // n adet sayıyı oku ve pozitif olanları topla
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> x;

        if (x > 0)
        {
            s += x; // Pozitif sayıları topla
            k++; // Pozitif sayı adedini arttır
        }
    }

    // Eğer en az bir pozitif sayı varsa, ortalama hesapla ve yazdır
    if (s > 0)
    {
        double average = s / k; // Ortalama hesabı
        std::cout << std::fixed << std::setprecision(2) << average << std::endl;
    }

    else
    {
        std::cout << "No positive numbers found" << std::endl;
    }

    return 0;
}


//-----------------------------------------------------

/*Yüksək dəqiqlik

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 64 MiB
m/n rasional kəsri verilmişdir. Onu vergüldən sonra k işarə dəqiqliyi ilə onluq kəsr şəklində yazın.

Nümunə
Giriş verilənləri #1 content_copy
1 2 3
Çıxış verilənləri #1 content_copy
0.500*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int k;
    double m;

    cout << "m = ";
    cin >> m;

    cout << "n = ";
    cin >> n;

    cout << "k = ";
    cin >> k;

    //double a = static_cast<double>(m) / n; verilenler tipini deyismek ucundur int = double

    double a = m / n;
    cout << fixed << setprecision(k) << a << "\n";

    return 0;
}

//--

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int  m, n, k;
    cin >> m >> n >> k;

    double a = static_cast<double>(m) / n;
    cout << fixed <<  setprecision(k) << a << "\n";
    return 0;
}

//--

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int a, b, k;
    cin >> a >> b >> k;

    cout << a / b << "."; // Tam kısmı yazdır

    a = 10 * (a % b); // Kalanı a'ya atayarak ondalık kısmı hesapla

    for (unsigned int i = 0; i < k; ++i) {
        cout << a / b; // Yeni ondalık basamakları yazdır
        a = 10 * (a % b); // Yeni kalanı hesapla
    }

    return 0;
}
//-------------------------------------------------------------------------


/*Dördrəqəmli polindrom

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Dördrəqəmli natural ədəd verilmişdir. Onun palindrom olmasını təyin edin. Natural ədəd soldan sağa və sağdan sola eyni oxunarsa, palundromdur. Məsələn, 
2332
2332 ədədi palindromdur.

Giriş verilənləri
Dördrəqəmli natural 
�
n ədədi.

Çıxış verilənləri
�
n ədədi palindromdursa "YES", əks halda "NO" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
2332
Çıxış verilənləri #1 content_copy
YES
Giriş verilənləri #2 content_copy
5446
Çıxış verilənləri #2 content_copy
NO*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string eded;
    cin >> eded;

    for (char reqem : eded)
    {
        if ((reqem - '0') % 2 != 0)
        {
            cout << "NO" << std::endl;
            return 0;
        }
    }

    cout << "YES" << std::endl;
    return 0;
}

//--------------------------------------------------------

/*Dördrəqəmli polindrom

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Dördrəqəmli natural ədəd verilmişdir. Onun palindrom olmasını təyin edin. Natural ədəd soldan sağa və sağdan sola eyni oxunarsa, palundromdur. Məsələn, 
2332
2332 ədədi palindromdur.

Giriş verilənləri
Dördrəqəmli natural 
�
n ədədi.

Çıxış verilənləri
�
n ədədi palindromdursa "YES", əks halda "NO" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
2332
Çıxış verilənləri #1 content_copy
YES
Giriş verilənləri #2 content_copy
5446
Çıxış verilənləri #2 content_copy
NO*/

#include "iostream"
#include "string"
#include "algorithm"

using namespace std;
int main()
{
    string eded;
    cin >> eded;
    
    string ters_eded = eded;
    reverse(ters_eded.begin(), ters_eded.end());
    
    if (eded == ters_eded)
    {
        cout << "YES" << "\n";
    }
    
    else
    {
        cout << "NO" << "\n";
    }
}

////////////////////////////////////////////
























////////////////////////////////////////////
//basa sal

/*Üç nəfər arasında bölüşdürək!

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Vasilinin yanına onun iki dostu şad xəbərlə gəldilər: onlar lotereyada N manat udmuşdular. Belə ki, lotereya dükanda ümumi alış-veriş edilərkən verildiyi üçün, onun kimə mənsub olduğunu təyin etmək mümkün olmamışdır. Uduşu bərabər bölüşdürmək qərarına gəlindi. Vasiliy uduşu düzgün bölüşdürməyin mümkünlüyünü bilmək istərdi.

Giriş verilənləri
Yeganə sətirdə işarələrinin sayı 255-i keçməyən yekanə N natural ədədi verilir.

Çıxış verilənləri
Daxil edilmiş ədəd 3-ə tam bölünürsə "YES", əks halda "NO" verməli.

Nümunə
Giriş verilənləri #1 content_copy
1234567890987654321
Çıxış verilənləri #1 content_copy
YES
Giriş verilənləri #2 content_copy
25
Çıxış verilənləri #2 content_copy
NO*/

#include <iostream>

int main() {
    // Giriş veriləni oxu
    long long N;
    std::cin >> N;

    // Əgər ədəd 3-ə tam bölünürsə, "YES", əks halda "NO" yazdır
    if (N % 3 == 0) 
    {
        std::cout << "YES";
    }
 
    else 
    {
        std::cout << "NO";
    }

    return 0;
}


//-----------------------------------------------------------------------


/*Rəqəmlərə bölünmə

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Dördrəqəmli natural ədəd verilmişdir. Bu ədədin onun bütün rəqəmlərinə bölündüyünü təyin edin.

Giriş verilənləri
Dördrəqəmli natural ədəd.

Çıxış verilənləri
Ədəd onun bütün rəqəmlərinə bölünürsə "YES", əks halda "NO" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
2244
Çıxış verilənləri #1 content_copy
YES
Giriş verilənləri #2 content_copy
2344
Çıxış verilənləri #2 content_copy
NO*/

#include <iostream>
int main()
{
    long long x;
    std::cin >> x;

    long long a = x / 1000;
    long long b = x / 100 % 10;
    long long c = x / 10 % 10;
    long long d = x % 10;

    if ((a != 0 && x % a == 0) && 
        (b != 0 && x % b == 0) && 
        (c != 0 && x % c == 0) && 
        (d != 0 && x % d == 0))
    {
        std::cout << "YES";
    }

    else
    {
        std::cout << "NO";
    }

    return 0;
}


//----------------------------------------------------------------------


/*Четность числа

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 64 MiB
Проверьте заданное целое число n на четность.

Giriş verilənləri
Одно целое число n.

Çıxış verilənləri
Выведите 1, если число n четное и 0 в противном случае.

Nümunə
Giriş verilənləri #1 content_copy
7
Çıxış verilənləri #1 content_copy
0
Giriş verilənləri #2 content_copy
-2
Çıxış verilənləri #2 content_copy
1*/
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        std::cout << "1";
    }

    else
    {
        std::cout << "0";
    }
    
    return 0;
}


#include <iostream>
int main() {
    int n;
    std::cin >> n;
    std::cout << (n % 2 == 0 ? 1 : 0);
    return 0;
}



//----------------------------------------------------------------------

/*Равнобедренный треугольник

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Заданы три натуральных числа a, b и c. Определите, существует ли равнобедренный треугольник с длинами этих сторон.

Giriş verilənləri
Три натуральных числа a, b и c.

Çıxış verilənləri
Выведите сумму заданных чисел, если существует равнобедренный треугольник с длинами сторон a, b, c, и No в противном случае.

Nümunə
Giriş verilənləri #1 content_copy
7 7 3
Çıxış verilənləri #1 content_copy
17
Giriş verilənləri #2 content_copy
4 6 9
Çıxış verilənləri #2 content_copy
No*/


#include <iostream>

int a, b, c;

void fun_1()
{
    // Üçgen mümkündürse, kenar uzunluklarının toplamını yazdır, əks halda "No" yazdır
    if ((a == b || b == c || a == c) and (a + b > c and a + c > b and b + c > a))
    {
        std::cout << a + b + c << std::endl;
    }

    else
    {
        std::cout << "No" << std::endl;
    }
}

int main()
{
    // Giriş verilerini oku
    std::cin >> a >> b >> c;
    fun_1();
}


//------------------------------------------------------------------------
https://www.eolymp.com/az/submissions/submit?problem=8575
//bankomat
#include <iostream>

int main() 
{
    int S;
    std::cin >> S;

    int bankomat[] = {500, 200, 100, 50, 20, 10, 5, 2, 1}; // Bankomatda olan deyerler
    int use_bankomat = 0; // istifade olunun bankomatlar

    for (int i = 0; i < 9; ++i) 
    {
        use_bankomat += S / bankomat[i]; // istifade olunan bankomat sayi hesapla
        S %= bankomat[i]; // qaliqi yenile
    }

    std::cout << use_bankomat << std::endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() 
{
    long long n, a = 0;
    cin >> n;

    while (n != 0) 
    {
        if (n >= 500) 
        {
            n -= 500;
        }
        
        else if (n >= 200) 
        {
            n -= 200;
        }
        
        else if (n >= 100) 
        {
            n -= 100;
        }
        
        else if (n >= 50) 
        {
            n -= 50;
        }
        
        else if (n >= 20) 
        {
            n -= 20;
        }
        
        else if (n >= 10) 
        {
            n -= 10;
        }
        
        else if (n >= 5) 
        {
            n -= 5;
        }
        
        else if (n >= 2) 
        {
            n -= 2;
        } 
        else 
        {
            n -= 1;
        }
        ++a;
    }
    cout << a;
    return 0;
}


//--------------------------------------------------------------------------

https://www.eolymp.com/az/problems/2163

#include <iostream>

int main() {
    // Giriş veriləni oxu
    long long N;
    std::cin >> N;

    // Əgər ədəd 3-ə tam bölünürsə, "YES", əks halda "NO" yazdır
    if (N % 3 == 0) 
    {
        std::cout << "YES";
    }
 
    else 
    {
        std::cout << "NO";
    }

    return 0;
}

//----------------------------------------------------------------
//---------------------------------------------------

//https://www.eolymp.com/az/problems/8607
//Rəqəmlərin kvadratları cəmi

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // Rəqəmlərin kvadratları cəmini hesablamaq üçün bir dövrə girək
    int cem = 0;
    while (n > 0) {
        int r = n % 10; // Ədədin sonuncu rəqəmini tapırıq
        cem += r * r;   // Sonuncu rəqəmin kvadratını cəmə əlavə edirik
        n /= 10;        // Sonuncu rəqəmi silirik və n-i yeniləyirik
    }

    // Nəticəni çap edirik
    std::cout << cem << std::endl;

    return 0;
}

//-----------------------------------------------------------------

https://www.eolymp.com/az/problems/9921
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;

    for (int i = 0; i < 4; i++){
        cout << "-" << a << "\n";
    }
}


//--------------------------------------------------------------------

//https://www.eolymp.com/az/problems/9930

#include <iostream>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    
    long long h = a % 24;
    if (h == 0) 
    {
        cout << a / 24;
    }
    
    else if (h != 0) 
    {
        cout << (a / 24) + 1;
    }
}

//----------------------------------------------------------------------

