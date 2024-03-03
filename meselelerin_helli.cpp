

/*
Tam ədədi daxil edin və ondan əvvəl gələn ədədi çap edin.

Giriş verilənləri
Modulca
1
0
18
10
18
 -i aşmayan bir tam n ədədi.

Çıxış verilənləri
Bir vahid kiçik olan ədədi çap edin.

Nümunə
Giriş verilənləri #1 content_copy
10

Çıxış verilənləri #1 content_copy
9
*/

#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long s = n-1;
    cout << s;
}

//====================================================================//

/*Üçrəqəmli natural ədəd verilmişdir. Onun rəqəmlərinin cəmini və hasilini hesablayın.

Giriş verilənləri
Yeganə üçrəqəmli natural n (100 ≤ n ≤ 999) ədədi.

Çıxış verilənləri
Tək sətirdə n ədədinin rəqəmlərinin cəmini və hasilini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
234
Çıxış verilənləri #1 content_copy
9 24*/

#include <iostream>

using namespace std;

int main() {
    // Üçrəqəmli natural ədədi qəbul et
    int n;
    cin >> n;

    // Rəqəmlərin cəmini və hasilini hesabla
    int a = n / 100;          // Yüzlik rəqəmi
    int b = (n / 10) % 10;     // Onluq rəqəmi
    int c = n % 10;            // Birlik rəqəmi

    int cem = a + b + c;
    int hasil = a * b * c;

    // Nəticəni çap et
    cout << cem << ' ' << hasil;

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n / 100 + n / 10 % 10 + n % 10 << ' ' << (n / 100) * (n / 10 % 10) * (n % 10);

    return 0;
}

//====================================================================//

/*İki mənfi olmayan n, m < 30 ədədləri verilir, n və m fərqlidirlər.

Yalnız bit əməliyyatlarından istifadə etməklə 2^n + 2^m ifadənin qiymətini hesablayın.

Giriş verilənləri
İki mənfi olmayan n və m tam ədədləri verilir.

Çıxış verilənləri
2^n + 2^m ifadəsinin qiymətini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
1 2
Çıxış verilənləri #1 content_copy
6*/

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    long long n, m;
    cin >> n >> m;

    long long a = pow(2, n);  // Calculate 2^n using the pow function
    long long b = pow(2, m);  // Calculate 2^m using the pow function

    cout << a + b;  // Print the sum of 2^n and 2^m

    return 0;
}

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

//====================================================================//
/*Düzbucaqlının perimetrini hesablayın.

Giriş verilənləri
Dördbucaqlının tamqiymətli 

a və b (1≤a,b≤1000) tərəfləri.

Çıxış verilənləri
Dördbucaqlının perimetrini verməli.

Nümunə
Giriş verilənləri #1 content_copy
3 4
Çıxış verilənləri #1 content_copy
14*/

#include <iostream>

int main() 
{
   
    int a, b;
    std::cin >> a >> b;
 
    int perimetr = 2 * (a + b);
 
    std::cout << perimetr << std::endl;

    return 0;
}

//====================================================================//
/*Sinifdə a sayda oğlan və b sayda qız oxuyur. Sinifdə cəmi neçə şagird var?

Giriş verilənləri
İki natural a və b (a, b ≤ 10^18) ədədləri.

Çıxış verilənləri
Sinifdəki uşaqların sayını çap edin.

Nümunə
Giriş verilənləri #1 content_copy
12 9
Çıxış verilənləri #1 content_copy
21*/

#include <iostream>

int main() {
    // Giriş verilənləri
    long long a, b;
    std::cin >> a;
    std::cin >> b;
    // Ədədlərin cəmini hesablayaraq çıxış veriləni
    long long cem = a + b;
    std::cout << cem << std::endl;
    return 0;
}

//====================================================================//


/*İki tam ədədin hasilini hesablayın.

Məlumat daxil edin
İki tam ədəd a və b (a, b ≤ 10^9).

Çıxış
İki ədədin hasilini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
3 7
Çıxış verilənləri #1 content_copy
21*/

#include <iostream>

int main() 
{
    // İki tam ədədi daxil et
    long long a, b;
    std::cin >> a >> b;

    // İki ədədin hasilini hesabla
    long long hasil = a * b;

    // Hasili çap et
    std::cout << hasil << std::endl;

    return 0;
}

//====================================================================//

/*Tam ədədi daxil edin və ondan sonra gələn ədədi çap edin.

Giriş verilənləri
 -i aşmayan tam n ədədi.

Çıxış verilənləri
Bir vahid böyük olan ədədi çap edin.

Nümunə
Giriş verilənləri #1 content_copy
10
Çıxış verilənləri #1 content_copy
11*/

#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    a++;
    cout << a << "\n";
}

//====================================================================//

/*Proqram ikirəqəmli ədədi oxuyur və ədədin hər bir rəqəmini arada boşluq olmaqla ekrana verir.

Giriş verilənləri
10
10 - 
99
99 arası hər hansı bir natural ədəd

Çıxış verilənləri
Boşluqla ayrılmış iki rəqəm

Nümunə
Giriş verilənləri #1 content_copy
23

Çıxış verilənləri #1 content_copy
2 3
*/
#include <iostream>
using namespace std;
int main()
{
  int number;
  cin >> number;
  
  int a = number / 10;
  int b = number % 10;
  cout << a << " " << b ;

  return 0;
}

//====================================================================//

/*Düzbucaqlının sahəsini hesablayın.

Giriş verilənləri
Düzbucaqlının tamqiymətli 
�
a və b (1≤a,b≤1000) tərəfləri.

Çıxış verilənləri
Düzbucaqlının sahəsini ekrana çıxardın.

Nümunə
Giriş verilənləri #1 content_copy
3 4
Çıxış verilənləri #1 content_copy
12*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b;
    c = a * b;
    cout << c;

    return 0;
}

//====================================================================//

/*Ədədin sonuncu rəqəmini tapmaq tələb olunur.

Giriş verilənləri

Çıxış verilənləri
n ədədinin sonuncu rəqəmini verməli.

Nümunə
Giriş verilənləri #1 content_copy
123
Çıxış verilənləri #1 content_copy
3
Giriş verilənləri #2 content_copy
6578
Çıxış verilənləri #2 content_copy
8*/
#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    std::cout << n % 10;
    return 0;
}
//====================================================================//

/*a və n natural ədədləri verilir. a^n -in qiymətini hesablayın.

Giriş:
a və n natural ədədləri.

Çıxış:
a^n -in qiyməti.

Nümunə
Giriş verilənləri #1 content_copy
2
10
Çıxış verilənləri #1 content_copy
1024*/
#include <iostream>
#include <cmath>

int main() {
    int a, n;

    // İstifadəçidən a və n ədədlərini almaq 
    std::cin >> a;
    std::cin >> n;

    // a^n qiymətini hesablamaq
    int result = std::pow(a, n);

    // Nəticəni çap etmək
    std::cout << result << std::endl;

    return 0;
}

//====================================================================//

/*Mürəkkəb şərtdən istifadə edərək verilmiş 
yın nömrəsinə görə ilin fəslini müəyyənləşdirin.

Giriş verilənləri
Yeganə ədəd — ayın nömrəsi.

Çıxış verilənləri
Çıxışa yaz ayları üçün "Spring", yay üçün "Summer", 
payız üçün "Autumn" və qış üçün "Winter" sözlərini verin.

Nümunə
Giriş verilənləri #1 content_copy
5
Çıxış verilənləri #1 content_copy
Spring*/

#include<iostream>

int main() 
{
    int a;
    std::cin >> a;

    if (a == 12 || a == 1 || a == 2) 
    {
        std::cout << "Winter";
    }

    else if (a == 3 || a == 4 || a == 5) 
    {
        std::cout << "Spring";
    }

    else if (a == 6 || a == 7 || a == 8) 
    {
        std::cout << "Summer";
    }

    else if (a == 9 || a == 10 || a == 11) 
    {
        std::cout << "Autumn";
    }

    else 
    {
        std::cout << "Invalid month"; // Handle invalid input
    }

    return 0;
}

//====================================================================//

/*Günün başlanmasından m dəqiqə keçib. Hazırda vaxt hansı saatı və dəqiqəni göstərir?

Giriş verilənləri
1440-dan kiçik m tam ədədi verilir.

Çıxış verilənləri
Çıxışa aralarında bir boşluq olmaqda saatı və dəqiqəni verin.

Nümunə
Giriş verilənləri #1 content_copy
127
Çıxış verilənləri #1 content_copy
2 7*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    cout << m / 60 << " " << m % 60;
    return 0;
}

//====================================================================//

/*Professor bayram üçün mavi, qırmızı və sarı şarlar alıb. Cəmi n ədəd.
 Sarı və mavi ilə birlikdə — a ədəd alıb. 
 Qırmızı və mavi isə - b ədəd alıb.

Professor neçə mavi, qırmızı və sarı şar almışdı?

Giriş verilənləri
Üç natural ədəd 
n,a,b.

Çıxış verilənləri
Bir sətirdə professorun aldığı mavi, qırmızı və sarı topların sayını çap edin.

Nümunə
Giriş verilənləri #1 content_copy
10 6 8
Çıxış verilənləri #1 content_copy
4 4 2*/

#include <iostream>

int main()
{
    long long n, a, b;
    long long qirmizi_mavi, sari_mavi, mavi;

    // Giriş verilənlərini almaq
    std::cin >> n >> a >> b;

    // Sarı və mavi ilə birlikdə alınan şarların sayı
    sari_mavi = n - a;

    // Qırmızı və mavi ilə alınan şarların sayı
    qirmizi_mavi = n - b;

    // Mavi şarların sayı
    mavi = n - qirmizi_mavi - sari_mavi;

    // Mavi, qırmızı və sarı şarların sayını çap et
    std::cout << mavi << " " << sari_mavi << " " << qirmizi_mavi << std::endl;

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    int q,m,s;
    cin >> n >> a >> b;
    q = n - a;
    s = n - b;
    m = n - q - s;
    cout << m << " " << q << " " << s;
    return 0;
}

//====================================================================//

/*Natural ədəd verilmişdir. Onun sağdan üçüncü rəqəmini verin.

Giriş verilənləri
Yeganə natural n (100 ≤ n ≤ 10^9) ədədi.

Çıxış verilənləri
n ədədinin sağdan üçüncü rəqəmini verin.

Nümunə
Giriş verilənləri #1 content_copy
1234567
Çıxış verilənləri #1 content_copy
5*/

#include <iostream>

int main()
{
    int n;
    // İstifadəçidən ədədi almaq
    std::cin >> n;

    // Ədədin yüzliklər tapmaq və çıxışa yazdırmaq
    int run = (n % 1000) / 100;

    std::cout << run << std::endl;

    return 0;
}


//====================================================================//


/*Professorun masasında hər birində 

a sayda batereya olan bir-neçə paket var idi. 
Professor hər paketdən b sayda batareyaı götürəndə 
masanın üstündə cəmi c sayda batareya qalmışdı.

Masanın üstündə neçə paket var idi?

Giriş verilənləri
Üç natural ədəd 
a,b,c.

Çıxış verilənləri
Masanın üzərində olan batareya paketlərinin sayı.

Nümunə
Giriş verilənləri #1 content_copy
6 3 15
Çıxış verilənləri #1 content_copy
5*/

#include <iostream>

using namespace std;
int main()
{
    int a,b,c,n;
    cin >> a >> b >> c;
    n = c / (a - b);
    cout << n;
    return 0;
}

//====================================================================//

/*n tam ədədi verilmişdir. Onun müsbət, mənfi və ya 0
0-a bərabər olmasını müəyyənləşdirin.

Giriş verilənləri

Çıxış verilənləri
n-in qiymətindən asılı olaraq "Positive", "Negative" və ya "Zero" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
45

Çıxış verilənləri #1 content_copy
Positive

Giriş verilənləri #2 content_copy
0

Çıxış verilənləri #2 content_copy
Zero

Giriş verilənləri #3 content_copy
-12

Çıxış verilənləri #3 content_copy
Negative*/

#include <iostream>

int main() 
{
    int n;

    // İstifadəçidən bir tam ədəd alınması
    std::cin >> n;

    // Ədədin müvafiq olaraq mənfi, müsbət və ya sıfır olub-olmamasını yoxlamaq
    if (n > 0)
    {
        std::cout << "Positive" << std::endl;
    }
    else if (n < 0)
    {
        std::cout << "Negative" << std::endl;
    }
    else
    {
        std::cout << "Zero" << std::endl;
    }

    return 0;
}

//====================================================================//
//// faktroial meselesi
/**/
#include <iostream>
using namespace std;

class Program
{
public:
    long long n{};
    long long factorial = 1;


    void Fun_1()
    {
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            factorial *= i;
        }
        cout << factorial << endl;
    }
};

int main()
{
    Program program;
    program.Fun_1();
}


#include <iostream>

int main()
{
    long long n, factorial = 1;

    std::cin >> n;

   
    for (int i = 2; i <= n; i++) 
    {
        factorial *= i;
    }

  
    std::cout << factorial << std::endl;

    return 0;
}


//====================================================================//


/*uçbucağın tərəflərinin uzunluğu verilir.
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
3 5 5                                    NO*/
#include <iostream>
#include <cmath>

using std::endl;
using std::cout;
using std::cin;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
        cout << "YES" << endl;
    }

    else if ( pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        cout << "YES" << endl;
    }

    else if ( pow(a, 2) + pow(c, 2) == pow(b, 2))
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}


/*
Parçaların uzunluğu olan
a,b,c,d ədədləri verilmişdir. Bu parçalardan paraleloqram
düzəltmək mümkün olub-olmadığını müəyyənləşdirin.

Giriş verilənləri
Yeganə sətirdə aralarında boşluq işarəsi olmaqla 4
4 ədəd a,b,c,d verilir.

Çıxış verilənləri
Çıxışa yeganə sətirdə paraleloqram düzəltmək mümkündürsə "YES",
 əks halda isə "NO" (dırnaqsız) sözü verilir.

Nümunə
Giriş verilənləri #1 content_copy
2 4 2 4
Çıxış verilənləri #1 content_copy
YES
*/
#include <iostream>

int main()
{
    // Giriş verilənlərini almaq
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;

    // Paraleloqramın düzəldilə bilinməsi üçün şərtləri yoxlamaq
    if (a == c and b == d)
    {
        std::cout << "YES" << std::endl;
    }

    else if (a == b and c == d)
    {
        std::cout << "YES" << std::endl;
    }

    else if (a == d and b == c)
    {
        std::cout << "YES" << std::endl;
    }

    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

//-------------------------------------------------------------------------

/*n tam ədədini əks ardıcıllıqda yazın.

Giriş verilənləri
Tam mənfi olmayan 64 mərtəbəli ədəd.

Çıxış verilənləri
Ədədin əks ardıcıllıqda yazılışı.

Nümunə
Giriş verilənləri #1 content_copy
1234
Çıxış verilənləri #1 content_copy
4321
Giriş verilənləri #2 content_copy
100
Çıxış verilənləri #2 content_copy
001*/

#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;

    for (int i = 0, j = s.length() - 1; i < j; ++i, --j) {
        std::swap(s[i], s[j]);
    }

    std::cout << s << std::endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    cin >> number;
    reverse(number.begin(), number.end());
    cout << number;
}

//---------------------------------------------------//
/*
Orta ədəd
Zaman məhdudiyyəti 1 saniyə
Yaddaşı istafadə məhdudiyyəti 128 MiB
Üç müxtəlif 
a,b,c ədədləri verilmişdir. Onlardan qiymətcə orta olanı tapın.
Giriş verilənləri
a,b,c ədədləri mütləq qiymətcə 
1000
1000-i aşmayan tam ədədlərdir.
Çıxış verilənləri
Məsələnin cavabı olan yeganə ədəd.
Nümunə
Giriş verilənləri #1 content_copy
11 3 7
Çıxış verilənləri #1 content_copy
7
*/

#include <iostream>
#include <algorithm>

int main() {
    int m[3];

  
    std::cin >> m[0] >> m[1] >> m[2];
    std::sort(m, m + 3);
    std::cout << m[1] << std::endl;

    return 0;
}

/*Kvadrat*/
/*Dörd natural 
a,b,c,d ədədləri verilmişdir. Tərəflərinin uzunluğu 
a,b,c,d olan kvadrat mövcuddursa, verilmiş ədədlərdən hər hansı birinin kvadratını, əks halda "No" çap edin.
Giriş verilənləri
1
0
9
10 
9
 -u aşmayan dörd natural 

a,b,c,d ədədləri.
Çıxış verilənləri
Kvadrat mövcuddursa, giriş verilənlərindən hər hansı birinin kvadratını çap edin. Əks halda "No" çap edin.
Nümunə
Giriş verilənləri #1 content_copy
7 7 7 7

Çıxış verilənləri #1 content_copy
49

Giriş verilənləri #2 content_copy
9 6 9 6

Çıxış verilənləri #2 content_copy
No*/

#include <iostream>

int main() {
    long long a, b, c, d, res;

    std::cin >> a >> b >> c >> d;

    res = a * a;

    if (a == b && b == c && c == d && a == c && a == d && b == d)
    {
        std::cout << res;
    }

    else
    {
        std::cout << "No";
    }
       
    return 0;
}
//------------------------------------------------------------------------------
//stepanin dostlari

/*Stepan məktəblilərin beynəlxalq proqramlaşdırma olimpiadasından (IOI) qayitdı və suvenir kimi n müxtəlif rəngli daş gətirdi. Stepan xəsis oğlan deyil, buna görə də daşları dostları ilə bölüşmək qərarına gəldi. Hər bir dostuna bir ədəd daş verdi. Beləliklə, Stepanın özündə də bir ədəd daş qaldı. Onun dostlarının sayını təyin edin.

Giriş verilənləri
Yeganə tam n (1 ≤ n ≤ 100) ədədi.

Çıxış verilənləri
Yeganə ədədi - Stepanın dostlarınn sayını verin.

Nömunənin şərhi

Stepan 2 daş gətirdi, biri özündə qaldı. Deməli ikinci daşı yekanə dostuna verdi.

Nümunə
Giriş verilənləri #1 content_copy
2
Çıxış verilənləri #1 content_copy
1*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<n-1;
}
//------------------------------------------------------------------------------

/*Almaları bölüşdürmə - 2

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB

�
n məktəbli 
�
k almanı bərabər bölüşdürdülər, bölünməyən qalanlar sabətdə qalır. Səbətdə neçə alma qalacaq?

Giriş verilənləri
İki tam 
�
n və 
�
k ədədləri verilir. Bütün giriş verilənləri 
1500
1500-ü aşmır — məktəbdə az hallarda çox şagird olur və belə bir səbəti hardan tapmalı?

Çıxış verilənləri
Proqram yeganə ədədi — səbətdə qalan almaların sayını verməlidir.

Nümunə
Giriş verilənləri #1 content_copy
3
14
Çıxış verilənləri #1 content_copy
2
Giriş verilənləri #2 content_copy
10
100
Çıxış verilənləri #2 content_copy
0*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    cout<<k%n;
}

//------------------------------------------------------------------

/*Almaları bölüşdürmə - 1

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB

�
n məktəbli 
�
k almanı bərabər bölüşdürür, bölünməyən isə zənbildə qalır. Hər bir məktəbliyə neçə alma çatacaq?

Giriş verilənləri
İki tam 
�
n və 
�
k ədədləri verilir. Bütün giriş verilənləri 
1500
1500-ü aşmır — məktəbdə az hallarda çox şagird olur, çox alma yemək də zərərlidir...

Çıxış verilənləri
Yeganə ədədi — hər bir şagirdə çatacaq almaların sayını verin.

Nümunə
Giriş verilənləri #1 content_copy
3
14
Çıxış verilənləri #1 content_copy
4
Giriş verilənləri #2 content_copy
10
100
Çıxış verilənləri #2 content_copy
10*/


#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    cout<<k/n;
}

//----------------------------------------------------------------


/*12345

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
1
,
2
,
3
,
4
,
5
1,2,3,4,5 rəqəmlərinin hər birini yeni sətirdə verin.

Giriş verilənləri
Giriş verilənləri yoxdur.

Çıxış verilənləri
1
,
2
,
3
,
4
,
5
1,2,3,4,5 rəqəmlərinin hər birini nümunədə verildiyi kimi yeni sətirdə verin.

Nümunə
Giriş verilənləri #1 content_copy
Çıxış verilənləri #1 content_copy
1
2
3
4
5
*/

#include <iostream>

using namespace std;

int main()
{
    cout<<1<<endl;
    cout<<2<<endl;
    cout<<3<<endl;
    cout<<4<<endl;
    cout<<5<<endl;
}

//----------------------------------------------------------



/*Düzbucaqlı üçbucaqdırmı?

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Üçbucağın tərəflərinin uzunluğu verilir. Bu üçbucağın düzbucaqlı olub-olmadığını müəyyənləşdirməli.

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
Giriş verilənləri #1 content_copy
3 5 4
Çıxış verilənləri #1 content_copy
YES
Giriş verilənləri #2 content_copy
3 5 5
Çıxış verilənləri #2 content_copy
NO*/

#include <iostream>
#include <cmath>

using std::endl;
using std::cout;
using std::cin;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (pow(a, 2) + pow(b, 2) == pow(c, 2))
    {
        cout << "YES" << endl;
    }

    else if ( pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        cout << "YES" << endl;
    }

    else if ( pow(a, 2) + pow(c, 2) == pow(b, 2))
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}



//------------------------------------------------------------------


/*Su və buz

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Vedrəni su ilə doldurub küçəyə qoydular. Küçədə havanın temperaturu t dərəcədir. Əgər t müsbətdirsə - "Water", əks halda - "Ice" çap edin.

Giriş verilənləri
Yeganə t (-10^9 ≤ t ≤ -10^9) tam ədədi.

Çıxış verilənləri
Əgər t müsbətdirsə - "Water", t sıfır və ya mənfidirsə - "Ice" çap etməli.

Nümunə
Giriş verilənləri #1 content_copy
3
Çıxış verilənləri #1 content_copy
Water
Giriş verilənləri #2 content_copy
-6
Çıxış verilənləri #2 content_copy
Ice*/

#include<iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;

    if (number > 0)
    {
        cout << "Water";
    }

    else
    {
        cout << "Ice";
    }

    return 0;
}

/*Dərs nailiyyətlərinin səviyyəsi

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Şagirdin dərs nailiyyətlərinin səviyyəsini 
(ilkin, orta, kafi, yüksək) verilmiş qiymətlərə (1 1-dən 12 12-dək) 
uyğun olaraq müəyyənləşdirin.

Giriş verilənləri
Bir ədəd — şagirdin balı.

Çıxış verilənləri
İlkin səviyyə üçün "Initial" (1 1-dən 3 3-ə qədər), 
orta üçün "Average" (4 4-dən 6 6-ya qədər), kafi üçün "Sufficient" 
(7 7-dən 9 9-a qədər) və yüksək səviyyə üçün "High" (10 10-dan 12 12-yə qədər) 
sözlərini çıxışa verin.

Nümunə
Giriş verilənləri #1 content_copy
12
Çıxış verilənləri #1 content_copy
High*/


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


//--------------------------------------------------------------------


/*İlin fəsilləri

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Mürəkkəb şərtdən istifadə edərək verilmiş ayın nömrəsinə görə ilin fəslini müəyyənləşdirin.

Giriş verilənləri
Yeganə ədəd — ayın nömrəsi.

Çıxış verilənləri
Çıxışa yaz ayları üçün "Spring", yay üçün "Summer", payız üçün "Autumn" və qış üçün "Winter" sözlərini verin.

Nümunə
Giriş verilənləri #1 content_copy
5
Çıxış verilənləri #1 content_copy
Spring*/

#include<iostream>

int main() 
{
    int a;
    std::cin >> a;

    if (a == 12 || a == 1 || a == 2) 
    {
        std::cout << "Winter";
    }

    else if (a == 3 || a == 4 || a == 5) 
    {
        std::cout << "Spring";
    }

    else if (a == 6 || a == 7 || a == 8) 
    {
        std::cout << "Summer";
    }

    else if (a == 9 || a == 10 || a == 11) 
    {
        std::cout << "Autumn";
    }

    else 
    {
        std::cout << "Invalid month"; // Handle invalid input
    }

    return 0;
}

//--------------------------------------------------------------

/*Rəqəmlərin cəmi

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 64 MiB
Verilən üçrəqəmli natural ədədin rəqəmlərinin cəmini tapın.

Giriş
Üçrəqəmli natural ədəd.

Çıxış
Məsələnin cavabı.

Nümunə
Giriş verilənləri #1 content_copy
512
Çıxış verilənləri #1 content_copy
8*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = n / 100;
	int b = n / 10 % 10;
	int c = n % 10;

	int k = a + b + c;
	cout << k;

	return 0;
}


//------------------------------------------------------------------

/*Cüt və ya tək

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
�
n natural ədədi verilmişdir. Onun cüt və ya tək olmasını yoxlayın.

Giriş verilənləri
�
 
(
1
≤
�
≤
1
0
9
)
n (1≤n≤10 
9
 ) natural ədədi.

Çıxış verilənləri
�
n cütdürsə "EVEN", təkdirsə "ODD" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
3
Çıxış verilənləri #1 content_copy
ODD
Giriş verilənləri #2 content_copy
100
Çıxış verilənləri #2 content_copy
EVEN*/

#include <iostream>

int main()
{
    int x;
    std::cin >> x;  

    x %= 2; 

    if (x == 0)
        std::cout << "EVEN";
    else
        std::cout << "ODD";

    return 0;
}

//----------------------------------------------------------------------


/*Kvadratların cəmi

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
İki ədədin kvadratları cəmini hesablayın.

Giriş verilənləri
İki a və b ədədləri verilir. Ədədlər mütləq qiymətcə 10^9-u aşmır.

Çıxış verilənləri
Yeganə tam a^2 + b^2 ədədini verin.

Nümunə
Giriş verilənləri #1 content_copy
2 3
Çıxış verilənləri #1 content_copy
13*/

#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin>>a>>b;
    cout<<a*a+b*b;

    return 0;
}

//----------------------------------------------------------------------

/*abc

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
Birinci sətirdə bir dənə 
а
а hərfini verin. İkinci sətirdə iki dənə 
�
b hərflərini verin. Üçüncü sətirdə üç dənə 
�
c hərflərini verin.

Giriş verilənləri
Giriş verilənləri yoxdur.

Çıxış verilənləri
Nümunədə göstərildiyi kimi hərfləri 
а
,
�
а,b və 
�
c çap edin

Nümunə
Giriş verilənləri #1 content_copy
Çıxış verilənləri #1 content_copy
a
bb
ccc*/

#include <iostream>
using namespace std;
int main()
{
    cout<<'a'<<endl;
    cout<<'b'<<'b'<<endl;
    cout<<'c'<<'c'<<'c'<<endl;

    return 0;
}


//------------------------------------------------------------------------

/*Kənardakıların cəmi

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 122 MiB
Dördrəqəmli natural ədədin kənardakı rəqəmlərinin cəmini hesablayın.

Giriş verilənləri
Bir natural dörrəqəmli ədəd.

Çıxış verilənləri
Ədədin kənardakı rəqəmlərinin cəmini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
1235
Çıxış verilənləri #1 content_copy
6*/

#include<iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;

	int number_1 = number / 1000;
	int number_4 = number % 10;
	int cem = number_1 + number_4;

	cout << cem << endl;
	return 0;
}

/*Şərt operatoru - 1*/
/*Çıxış verilənləri
Verilmiş şərtə uyğun olaraq 
�
y-in qiymətini çap edin.

Nümunə
Giriş verilənləri #1 content_copy
2
Çıxış verilənləri #1 content_copy
2
Giriş verilənləri #2 content_copy
10
Çıxış verilənləri #2 content_copy
17*/

#include <iostream>

using namespace std;

int main()
{
    long long x, y;

    cin >> x;

    if (x < 5)
    {
        y = (x * x) - 3 * x + 4;
    }

    else if (x >= 5)
    {
        y = x + 7;
    }
       
    cout << y;

    return 0;
}

//----------------------------------------------------------------------

/*Ədədə bölünmə

Zaman məhdudiyyəti 1 saniyə

Yaddaşı istafadə məhdudiyyəti 128 MiB
�
n natural ədədi verilmişdir. O həm 
�
a-ya, həm də 
�
b-yə bölünürmü?

Giriş verilənləri
1
0
9
10 
9
 -u aşmayan 
�
,
�
,
�
n,a,b ədədləri.

Çıxış verilənləri
�
n həm 
�
a-ya, həm də 
�
b-yə bölünürsə "YES", əks halda "NO" çap edin.

Nümunə
Giriş verilənləri #1 content_copy
12 4 6
Çıxış verilənləri #1 content_copy
YES
Giriş verilənləri #2 content_copy
10 5 6
Çıxış verilənləri #2 content_copy
NO*/


#include <iostream>

using namespace std;

int main()
{
    long long n, a, b;

    // Input: Read three long long integers from the user
    cin >> n >> a >> b;

    // Checking if both a and b are factors of n
    if (n % a == 0 and n % b == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}


//---------------------------------------------------------------------------
/*
Bərabər bölənlər
m natural ədədi 

�
n ədədinin o zaman bərabər böləni adlanır ki, 
�
n-nin 
�
m-ə bölünməsindən alınan tam və qalıq hissə bərabər olsun. Verilmiş 
�
n natural ədədinə görə onun bərabər bölənlərinin sayını tapın.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,say=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if((n/i)==(n%i))
        {
            say++;
        }
    }
    cout<<say;

}