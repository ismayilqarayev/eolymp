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

<<<<<<< Updated upstream
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

//https://www.eolymp.com/az/problems/9922

#include <iostream>
using namespace std;

long long a;
string b;

int main(){

    cin >> a;
    cin >> b;

   for (int i = 0; i < a; i++){

       if ((i+1) != a){
           cout << b << "+";
       }

       else if ((i+1) == a){
           cout << b;
       }
   }
}

//-----------------------------------------------------------------------

//https://www.eolymp.com/az/problems/16483739

#include <iostream>
#include "iomanip"
#include "cmath"

using namespace std;

long long  n;
long long  birinci_reqem;
long long  ikinci_reqem;
long long  ucuncu_reqem;
long long  cem;
double  kvadrat_kok;

void get(){
    cin >> n;
    birinci_reqem = n / 100;
    ikinci_reqem = (n / 10) % 10;
    ucuncu_reqem = n % 10;
}

int main(){
    get();
    cem = birinci_reqem + ikinci_reqem + ucuncu_reqem;
    kvadrat_kok = sqrt(cem);
    cout << fixed << setprecision(3) << kvadrat_kok;
}


//---- 2 ci etab yazilma usulu

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	long long  a;
	cin >> a;
	long long b = ((a / 100) + ((a % 100) / 10) + (a % 10));
	long double c = sqrt(b);
	cout <<fixed<<setprecision(3)<<c;
}

//-------------------------------------------------------------

//https://www.eolymp.com/az/problems/2606

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << max(a, b);
}

//--------------------------------------------------------------

//https://www.eolymp.com/az/problems/5314

#include <iostream>
#include <cmath>

int main()
{
    long long a, b;
    std::cin >> a >> b;
    long long c = pow(2, a);
    long long d = pow(2, b);
    std::cout << c + d;
}

//-------------------------------------------------------------
//https://www.eolymp.com/az/problems/8604

#include <iostream>

using namespace std;
int main()
{
    long double a, b, c, d, e;
    cin >> a >> b >> c;

    d = a + b + c;
    e = a * b * c;
    cout << d << " " << e;
}

//---------------------------------------------------------------

//https://www.eolymp.com/az/problems/911

#include <iostream>
#include <cmath>

int main() 
{
    double a, b, c, d;
    int x1, x2;
    
    std::cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);  
    
    if (d < 0)
        std::cout << "No roots";
    else {
        x1 = (-b + std::sqrt(d)) / (2 * a);
        x2 = (-b - std::sqrt(d)) / (2 * a);
        
        if (x1 < x2)
            std::cout << "Two roots: " << x1 << " " << x2;
        else if (x1 > x2)
            std::cout << "Two roots: " << x2 << " " << x1;
        else if (x1 == x2)
            std::cout << "One root: " << x1;
    }
    
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = b * b - 4 * a * c;

    if (d < 0) 
    {
        cout << "No roots";
    }

    else if (d == 0) 
    {
        cout << "One root: " << -b / (2 * a);
    }

    else if (0 < d) 
    {
        // İki kök var
        int root1 = (-b - sqrt(d)) / (2 * a);
        int root2 = (-b + sqrt(d)) / (2 * a);
        cout << "Two roots: " << min(root1, root2) << " " << max(root1, root2);
    }

    return 0;
}

//--------------------------------------------------------------

//https://www.eolymp.com/az/problems/128

#include <iostream>

int main()
{
    int n, a = 0;
    std::cin >> n;

    for(int i_1 = 0; i_1 < 10; i_1++)
    {
        for(int i_2 = 0; i_2 < 10; i_2++)
        {
            for(int i_3 = 0; i_3 < 10; i_3++)
            {
                if (i_1 + i_2 + i_3 == n)
                {
                    a++;
                }
            }
        }
    }

    std::cout << a * a;
    return 0;
}

//-----------------------------------------------------------------

//https://www.eolymp.com/az/problems/3935

#include <iostream>

using namespace std;

int main()
{
    int n;
    //cout << "1 reqemi daxil et";
    cin >> n;

    int a_ya_yansitma[n];

    for(int i = 0; i < n; i++)
    {
        //cout << "2 reqemi daxil et";
        cin >> a_ya_yansitma[i];
    }

    for(int i = n-1; i >= 0; i--)
    {
        cout << a_ya_yansitma[i] << " ";
    }
}


//----------------------------------------------------

https://www.eolymp.com/az/problems/7337

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

     // Ən böyük və ən kiçik qiymətləri tapmaq
    int max_qiymet = max({a, b, c});
    int min_qiymet = min({a, b, c});

     // Alış qiymətini hesablamaq
    int alis_qiymet = max_qiymet + min_qiymet;
    cout << alis_qiymet << "\n";
    return 0;
}

//-------------------------------------------------------

//https://www.eolymp.com/az/problems/8939

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = 0;

    for (int i = 1; i <= 4 * n; i++)
    {
        
        cout << "#";
        k++;
        
        
        if (k == n)
        {
            cout << "\n";
            k = 0;
        }
    }
}
//---------------------------------------------------------------------------

//https://www.eolymp.com/az/problems/8690

#include <bits/stdc++.h>

int main(){
    long long a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a * b * c) + a + (b * b) + (c * c * c);
}

//---------------------------------------------------------------------------

//https://www.eolymp.com/az/problems/953
#include <iostream>

using namespace std;

int main(){
    long long a;
    std::cin >> a;
    std::cout << (a % 10) % (a / 100);
    return 0;
}

//-----------------------------------------------------------------------------


//https://www.eolymp.com/az/problems/949
#include <iostream>

int main() {
    long long a;
    std::cin >> a;

    long long birinci_reqem = (a % 1000) / 100;
    long long ikinci_reqem = (a % 100) / 10;

    std::cout << birinci_reqem * 10 + ikinci_reqem;
    return 0;
}

//------------------------------------------------------------------------------

//https://www.eolymp.com/az/problems/943

#include <iostream>
using namespace std;
int main()
{
    long a;
    cin >> a;

    //198 daxil edirsen
    long l = (a % 1000) / 100; //1 
    long p = (a % 100) / 10;   //9 
    long b = a % 10;           //8

    cout << b * 100 + p * 10 + l;
    return 0;
}

//-------------------------------------------------


//https://disk.yandex.az/d/XtWczReXCqhkVQ riyazi hell yolu
//https://www.eolymp.com/az/problems/13 
#include <iostream>
#include <math>
#include <iomanip>

int main(){
    
	int A, B, C;    //Otağın ölçüləri
    int X1, Y1;     //Milcek
    int X2, Y2, Z2; //Hörümçək

	std::cin >> A >> B >> C; //Otağın ölçüləri
    std::cin >> X1 >> Y1;    //Milcek
    std::cin >> X2 >> Y2 >> Z2;

	if (X2 == 0){
        X2 -= Z2;
    }
		
	else if (X2 == A){
        X2 += Z2;
    }
		
	else if (Y2 == 0){
        Y2 -= Z2;
    }
		
	else if (Y2 == B){
        Y2 += Z2;
    }

	std::cout << std::fixed << std::setprecision(2) << sqrt(double(((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2)))) << std::endl;
	return 0;
}


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){
    int a, b, c, X1, Y1, X2, Y2, Z2;
    cin >> a >> b >> c >> X1 >> Y1 >> X2 >> Y2 >> Z2;

    if (Z2 != 0){

        if (X2 == 0){
            X2 -= Z2;
        }

        else if (X2 == a){
            X2 += Z2;
        }

        else if (Y2 == 0){
            Y2 -= Z2;
        }

        else if (Y2 == b){
            Y2 += Z2;
        }
    }

    double distance = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));
    cout << fixed << setprecision(2) << distance;

    return 0;
}


//------------------------------------------------------------------------------


//https://www.eolymp.com/az/problems/8991

#include <iostream>

using namespace std;

int main(){

    string setir;
    getline(cin, setir);

    //setirdeki herifleri sinvola gonder ve gonderdikden sonra -----------
    for (char sinvol : setir ){ //                                        |
        //                                                                |
        // eger sinvoldaki herf bir herifdirse onu iki defe yazdor <______|
        if (isalpha(sinvol)){
            cout << sinvol << sinvol;
        }

        //yoxsa onu olduqu kimi saxla
        else{
            cout << sinvol;
        }
    }
}


//-------------------------------------------------------------------------------

https://www.eolymp.com/az/problems/1000

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a;
    int b;

    while (cin >> a >> b) 
    {
        cout << a + b << "\n";
    }

    return 0;
}


//----------------------------------------------------------------------------

https://www.eolymp.com/az/problems/8953


#include <iostream>

using namespace std;

int main(){
    long long a;
    cin >> a;
    int b[a];

    for (int i = 0; i < a; i++){
        cin >> b[i];

        cout << b[i] << endl;
    }
}

//---------------------------------------------------------------------

https://www.eolymp.com/az/problems/7843

#include <iostream>

using namespace std;

int main(){
    int n;
    int number1;
    int number2;
    cin >> n >> number1;

    for(int i = 0; i < n; i++){
        cin >> number2;

        if(number2 > number1) {
            cout << number2 <<' ';
        }

        number1 = number2;

    }
    return 0;
}


//----------------------------------------------------------------------

//https://www.eolymp.com/az/problems/8631

#include <iostream>
#include <string>

using namespace std;

int main() {
    long long n;
    cin >> n; // Giriş sayısını alır

    string num = to_string(n); // Sayıyı dizeye dönüştürür

    char largestDigit = '0'; // En büyük rakamı saklar
    int largestDigitCount = 0; // En büyük rakamın sayacı

    // Her rakamı kontrol eder
    for (char digit : num) {
        
        if (digit > largestDigit) {
            
            largestDigit = digit;
            largestDigitCount = 1;
        } 
        
        else if (digit == largestDigit) {
            largestDigitCount++;
        }
    }

    cout << largestDigitCount << endl; // En büyük rakamın tekrar sayısını yazdırır

    return 0;
}

//-----------------------------------------------------------------------

//https://www.eolymp.com/az/problems/5325

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++){
        cout << i << ' ';
    }
    return 0;
}


//----------6 ci gun----------------------------------------------------------------

//https://groups.eolymp.com/az/problems/8532


#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;

long long kub;
long long kvadrat;

void kvadrat_ve_kublar(int a, int b)
{
    //kvadrat
    for (int i = a; i <=b; ++i)
    {
        kvadrat = i * i;
        cout << kvadrat << " ";
    }
    std::cout << std::endl;

    //kublar
    for (int i = b; i >= a; --i)
    {
        kub = pow(i , 3);
        cout << kub << " ";
    }
}


int main()
{
    int a, b;
    cin >> a >> b;
    kvadrat_ve_kublar(a, b);
    return 0;
}


//------------------------------------------------------------

//https://groups.eolymp.com/az/problems/8937

#include <iostream>

using namespace std;

void simvollar(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "#";
    }
}

int main()
{
    int n;
    cin >> n;
    simvollar(n);
    return 0;
}

//------------------------------------------------------------

//https://groups.eolymp.com/az/problems/8938

#include <iostream>

void simvollar(int n)
{
    for (int i = 0; i < n; i++)
    {
        {
            std::cout << "###" << '\n';
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    simvollar(n);
    return 0;
}

//----------------------------------------------------------------

//https://groups.eolymp.com/az/problems/7841

#include <iostream>

using namespace std;

int main() 
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> x;
        if (x % 2 != 0) 
        {
            cout << x << ' ';
        }
    }
    return 0;
}

//-------------------------------------------------------------------

#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll faktoriyel;
    cin >> faktoriyel;

    ll n;
    ll sonuc = 1;

    for (n = 1; sonuc < faktoriyel; n++) {
        sonuc *= n;
    }

    cout << n - 1 << endl; // Son döngüde artırılan n değeri gereksiz bir şekilde artırıldığı için bir azaltma işlemi yapılır.

    return 0;
}


//--------------------------------------------------

#include <iostream>

using namespace std;

int main()
{

  int n;
  int k = 0;

  cin >> n;

  while (n > 0)
  {
    //101   1
    if(n & 1)
    {
        k++;
    }
    n = n >> 1;
  }
  
  cout << k << endl;
  return 0;
}

//----------------------------------------------------
//https://groups.eolymp.com/az/problems/1143


#include <iostream>

int main() {
    long a, b;
    std::cin >> a >> b;

    if (b == 0) 
    {
        std::cout << "ERROR";
    }

    else if (
        a % b == 0 && 
        a / b <= 2147483647 && 
        a / b >= -2147483648 ) 
    {
        std::cout << a / b;
    } 

    else 
    {
        std::cout << "ERROR";
    }

    return 0;
}

//-----------------------------------------------------------------------

//https://groups.eolymp.com/az/problems/8900

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    
    long long n;
    cin >> n;
    
    while (( n+1 ) % 7 != 0)
    {
        n++;
    }
    
    cout << n+1;
}

//------------------------------------------------------------------------

//https://groups.eolymp.com/az/problems/8640


#include <iostream>

using namespace std;

int main()
{
    int number_1;
    int number_2;

    cin >> number_1 >> number_2;

    for (int i = number_1; i <= number_2; i++)
    {
        int run_1 = i / 1000;
        int run_2 = i / 100 % 10;
        int run_3 = i / 10 % 10;
        int run_4 = i % 10;

        if (
                run_1 % 2 == 1 and
                run_2 % 2 == 1 and
                run_3 % 2 == 1 and
                run_4 % 2 == 1)
        {
            cout << i << ' ';
        }
    }
    return 0;
}

//-----------------------------------------------------------------------

//https://groups.eolymp.com/az/problems/8873

#include <iostream>

using namespace std;

int main()
{
    int number_1;
    cin >> number_1;

    if (number_1 / 10 == 0)
    {
        cout << "Ok";
    }
    
    else
    {
        cout << "No";
    }
}


//-----------------------------------------------------------------------








