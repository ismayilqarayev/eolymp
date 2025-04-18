//----------------------------------
//08.02.2025 10:39

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    void fun1(deque<int>*d1);
    void fun2(deque<int>*d2);
    void fun3(deque<int>*d1, deque<int>*d2);

    deque<int> d1;
    deque<int> d2;

    fun1(&d1);  // d1 üçün elementləri daxil edirik
    fun2(&d2);  // d2 üçün elementləri daxil edirik
    fun3(&d1, &d2);  // d1 və d2-nin ikinci elementlərini çap edirik
}

void fun1(deque<int>* d1)
{
    cout << "Deque d1 üçün elementlərin sayını daxil edin: ";
    int number1;
    cin >> number1;

    for (int i = 0; i < number1; i++)
    {
        cout << "Element " << i + 1 << "-i daxil edin: ";
        int element1;
        cin >> element1;
        d1->push_back(element1);
    }
}

void fun2(deque<int>* d2)
{
    cout << "Deque d2 üçün elementlərin sayını daxil edin: ";
    int number2;
    cin >> number2;

    for (int i = 0; i < number2; i++)
    {
        cout << "Element " << i + 1 << "-i daxil edin: ";
        int element2;
        cin >> element2;
        d2->push_back(element2);
    }
}

void fun3(deque<int>* d1, deque<int>* d2)
{
    if (d1->size() > 1 && d2->size() > 1)  // Ən azı 2 element olduğuna əmin oluruq
    {
        int sum1 = (*d1)[1];  // d1-in ikinci elementi (indeks 1)
        int sum2 = (*d2)[1];  // d2-nin ikinci elementi (indeks 1)

        cout << "d1-in ikinci elementi: " << sum1 << endl;
        cout << "d2-nin ikinci elementi: " << sum2 << endl;

        // Alternativ üsul .at() metodundan istifadə etməklə
        int number3 = (*d1).at(1);
        int number4 = (*d2).at(1);

        cout << ".at() metodu ilə d1-in ikinci elementi: " << number3 << endl;
        cout << ".at() metodu ilə d2-nin ikinci elementi: " << number4 << endl;
    }
    else
    {
        cout << "Bir və ya hər iki deque-də 2-dən az element var." << endl;
    }
}



//-------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;


deque<string> melumat_bazasi_1;
deque<string> melumat_bazasi_2;

int main()
{
    cout << "Daxil edin: ";
    string daxil_etme = " ";
    cin >> daxil_etme;

    for(int i = 0; i < daxil_etme.length(); i++)
    {
        cout << daxil_etme[i] << endl;
        string simvol = " ";
        cin >> simvol;

        melumat_bazasi_1.push_back(simvol);
    }


    for (auto i : melumat_bazasi_1)
    {
        cout << i << endl;

        string  firs = melumat_bazasi_1.front();
        cout << firs << endl;
    }
}


//------------------------------------------------------
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> dq;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (dq.empty())
    {
        dq.resize(n);
    }

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    sort(dq.begin(), dq.end());

    cout << "Sorted elements: ";
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}


//----------------------------------------------------

#include <iostream>
#include <deque>
using namespace std;

void fun1(deque<int> *d1);
void fun2(deque<int> *d2);
void fun3(deque<int> *d1, deque<int> *d2);

deque<int> d1;
deque<int> d2;

void fun1(deque<int> *d1)
{
    cout << "Enter the number of elements in deque d1: ";
    int number1;
    cin >> number1;

    for (int i = 0; i < number1; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        int element1;
        cin >> element1;
        d1->push_back(element1);
    }
}

void fun2(deque<int> *d2)
{
    cout << "Enter the number of elements in deque d2: ";
    int number2;
    cin >> number2;

    for (int i = 0; i < number2; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        int element2;
        cin >> element2;
        d2->push_back(element2);
    }
}

void fun3(deque<int> *d1, deque<int> *d2)
{
    if (d1->size() > 1 && d2->size() > 1)  // Проверяем, что есть как минимум 2 элемента
    {
        int sum1 = (*d1)[1];  // Второй элемент из d1 (индекс 1)
        int sum2 = (*d2)[1];  // Второй элемент из d2 (индекс 1)

        cout << "Second element in d1: " << sum1 << endl;
        cout << "Second element in d2: " << sum2 << endl;

        // Альтернативный способ через .at(), который выполняет проверку границ
        int number3 = (*d1).at(1);
        int number4 = (*d2).at(1);

        cout << "Second element using .at() in d1: " << number3 << endl;
        cout << "Second element using .at() in d2: " << number4 << endl;
    }
    else
    {
        cout << "One or both deques have less than 2 elements." << endl;
    }
}

int main()
{
    fun1(&d1);  // Вводим элементы для d1
    fun2(&d2);  // Вводим элементы для d2
    fun3(&d1, &d2);  // Печатаем вторые элементы из d1 и d2
}



//-------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>

using namespace std;

class Program1;
class Program2;

void fun2(vector<int>*v1, vector<int>*v2);
void fun1(vector<int>*v1, vector<int>*v2);
void fun3(deque<int>*d1);

vector<int> vec1;
vector<int> vec2;
deque<int> deq1;

class Program1
{
public:
    void fun1(vector<int>*v1, vector<int>*v2)
    {
        int add_vector_number = 0;
        cout << "Enter the number of elements in the vector1: ";
        cin >> add_vector_number;

        for (int i = 0; i < add_vector_number; i++)
        {
            int a;
            cout << "Enter the elements of the vector1: ";
            cin >> a;
            v1->push_back(a);  // vec1 əvəzinə v1 istifadə olunur
        }

        int add_vector_number2 = 0;
        cout << "Enter the number of elements in the vector2: ";
        cin >> add_vector_number2;

        for (int i = 0; i < add_vector_number2; i++)
        {
            int a;
            cout << "Enter the elements of the vector2: ";
            cin >> a;
            v2->push_back(a);  // vec2 əvəzinə v2 istifadə olunur
        }
    }

    void fun2(vector<int>*v1, vector<int>*v2)
    {
        auto begin = v1->begin();
        v1->insert(begin + 1, 2, 5);

        for (auto i : *v1)
        {
            cout << i << " ";
        }

        auto begin2 = v1->begin();
        v1->erase(begin + 1);
    }
};

class Program2
{
public:
    void fun3(deque<int>*d1)
    {
        int add_deque_number = 0;
    }
};

int main()
{
    Program1* p1 = new Program1();
    p1->fun1(&vec1, &vec2);
    p1->fun2(&vec1, &vec2);
    
    
    Program2* p2 = new Program2();
    p2->fun3(&deq1);
    
    delete p1;
    delete p2;
    return 0;
}



//------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

// Funksiyaların prototipləri
void fun1(vector<string>*v1, vector<string>*v2);
void fun2(vector<string>*v1, vector<string>*v2);

// Qlobal vektorlar
vector<string> vec1;
vector<string> vec2;

int main()
{
    // fun1 funksiyasını çağırır və vec1, vec2 vektorlarını ötürür
    fun1(&vec1, &vec2);

    // fun2 funksiyasını çağırır və vec1, vec2 vektorlarını ötürür
    fun2(&vec1, &vec2);
}

void fun1(vector<string>*v1, vector<string>*v2)
{
    // Vektor v1 üçün mətn daxil etmək
    string add_text_vector = " ";
    cout << "Enter text v1: ";
    cin >> add_text_vector;

    // Daxil edilən mətnin hər bir simvolu üçün v1 vektoruna mətn əlavə etmək
    for (int i = 0; i < add_text_vector.length(); i++)
    {
        string c;
        cout << "Enter text v1: ";
        cin >> c;
        v1 ->push_back(c);

    }

    

    // Vektor v2 üçün mətn daxil etmək
    cout << "Enter text v2: ";
    cin >> add_text_vector;

    // Daxil edilən mətnin hər bir simvolu üçün v2 vektoruna mətn əlavə etmək
    for (int i = 0; i < add_text_vector.length(); i++)
    {
        string c;
        cout << "Enter text v2: ";
        cin >> c;
        v2 ->push_back(c);
    }
}

void fun2(vector<string>*v1, vector<string>*v2)
{
    // Vektor v1-in başlanğıcından birinci elementin ardına boşluq əlavə etmək
    auto get1 = v1->begin();
    v1->insert(get1 + 1, " ");

    // Vektor v1-dəki bütün elementləri ekrana yazdırmaq
    for (string ss : *v1)
    {
        cout << ss << endl;
    }
}
// ozum ucun yeniden yazmisam mesq ucun

//----------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void fun1(vector<string>*v1, vector<string>*v2);
void fun2(vector<string>*v1, vector<string>*v2);

vector<string> vec1;
vector<string> vec2;

int main()
{
    fun1(&vec1, &vec2);
    fun2(&vec1, &vec2);
    return 0;
}

void fun1(vector<string>*v1, vector<string>*v2)
{
    string add_text_for_v1 = " ";
    cout << "Enter the text for vector 1: ";
    cin >> add_text_for_v1;

    for (int i = 0; i < add_text_for_v1.length(); i++)
    {
        string c;
        cin >> c;
        v1->push_back(c);
    }

    string add_text_for_v2 = " ";
    cout << "Enter the text for vector 2: ";
    cin >> add_text_for_v2;

    for (int i = 0; i < add_text_for_v2.length(); i++)
    {
        string c;
        cin >> c;
        v2->push_back(c);
    }
}

void fun2(vector<string>*v1, vector<string>*v2)
{
    auto get1 = v1->begin();
    v1-> insert(get1 + 1, " ");

    for (string ss : *v1)
    {
        cout << ss << " ";
    }
}


//---------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void fun2(vector<int>*v1, vector<int>*v2);
void fun1(vector<int>*v1, vector<int>*v2);

vector<int> vec1;
vector<int> vec2;

int main()
{
    fun2(&vec1, &vec2);
    fun1(&vec1, &vec2);
    return 0;
}

void fun2(vector<int>*v1, vector<int>*v2)
{
    int add_vector_number = 0;
    cout << "Enter the number of elements in the vector1: ";
    cin >> add_vector_number;

    for (int i = 0; i < add_vector_number; i++)
    {
        int a;
        cout << "Enter the elements of the vector1: ";
        cin >> a;
        v1->push_back(a);  // vec1 əvəzinə v1 istifadə olunur
    }

    int add_vector_number2 = 0;
    cout << "Enter the number of elements in the vector2: ";
    cin >> add_vector_number2;

    for (int i = 0; i < add_vector_number2; i++)
    {
        int a;
        cout << "Enter the elements of the vector2: ";
        cin >> a;
        v2->push_back(a);  // vec2 əvəzinə v2 istifadə olunur
    }
}

void fun1(vector<int>*v1, vector<int>*v2)
{
    auto get1 = v1->begin();
    v1->insert(get1 + 1, v2->begin(), v2->end());
    
    for (auto i : *v1)
    {
        cout << i << " ";  // elementləri boşluqla ayırır
    }
    cout << endl;  // çapdan sonra sətir keçidi
}


//-----------------------------------------------------------
#include <iostream>  // İstifadə ediləcək kitabxananı daxil edir

using namespace std;

int fun1(int **);  // fun1 funksiyasının protipi
int number = 0;    // Qlobal dəyişən number

int main()
{
    int *ptr = &number;  // number dəyişəninin ünvanını ptr pointerinə təyin edirik
    fun1(&ptr);          // ptr-ın ünvanını fun1 funksiyasına göndəririk

    // Yaddaşı azad etmək
    delete ptr;

    return 0;
}

int fun1(int **num)
{
    *num = new int {};  // Yeni int üçün yaddaş ayırırıq və dəyəri 0-a təyin edirik
    cout << **num;      // **num ilə həmin ünvanın dəyərini göstəririk
    return 0;
}

//----------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

class Runner
{
private:
    vector<int> number1{};
    vector<int> number2{};

    void runner1(vector<int>*vec1);
    void runner2(vector<int>*vec2);


    int main()
    {
        Runner get1;
        get1.runner1(&number1);
        get1.runner2(&number2);

        runner1(&number1);
        runner2(&number2);
        return 0;
    }

    static void runner1(vector<int> *vec1)
    {
        int add_vector_number = 0;
        cin >> add_vector_number;

        for (int i = 0; i < add_vector_number; i++)
        {
            int a;
            cin >> a;
            vec1 -> push_back(a);
        }
    }


    static void runner2(vector<int> *vec2)
    {
        int add_vector_number = 0;
        cin >> add_vector_number;

        for (int i = 0; i < add_vector_number; i++)
        {
            int b;
            cin >> b;
            vec2 ->push_back(b);
        }

        for (int n1 : *vec2)
        {
            cout << n1 << " ";
        }
        cout << endl;
    }
};



#include <iostream>
#include <vector>

using namespace std;

void runner1(vector<int>*vec1);
void runner2(vector<int>*vec2);

vector<int> number1{};
vector<int> number2{};

int main()
{
    runner1(&number1);
    runner2(&number2);
    return 0;
}

void runner1(vector<int>*vec1)
{
    int add_vector_number = 0;
    cin >> add_vector_number;

    for (int i = 0; i < add_vector_number; i++)
    {
        int a;
        cin >> a;
        //number1.push_back(a);
        vec1 ->push_back(a);
    }

    cout << "number1";
    for (int n1 : *vec1)
    {
        cout << n1 << " ";
    }
    cout << endl;
}

void runner2(vector<int>*vec2)
{
    int add_vector_number2 = 0;
    cin >> add_vector_number2;

    for (int i = 0; i < add_vector_number2; i++)
    {
        int b;
        cin >> b;
        //number2.push_back(a);
        vec2 ->push_back(b);
    }

    cout << "number2";
    for (int n2 : *vec2)
    {
        cout << n2 << " ";
    }
    cout << endl;
}

//--------------------------------------------------------------
#include <iostream>

using namespace std;

void fun1(int& number);  // fun1 funksiyasının prototipi
void fun2(int& number);  // fun2 funksiyasının prototipi

int main() {
    float value = 5.5;  // float tipli dəyişən
    auto v = static_cast<int>(value);  // value dəyişənini int tipinə çevirir

    fun1(v);  // v dəyişənini fun1 funksiyasına ötürür
    fun2(v);  // v dəyişənini fun2 funksiyasına ötürür

    return 0;
}

void fun1(int& number) {
    cout << number << endl;  // number dəyərini çap edir
}

void fun2(int& number) {
    cout << number << endl;  // number dəyərini çap edir
}

//-----------------------------------------------------
#include <iostream>

using namespace std;

int Fun2(int num1, int num2);
int Fun3(int run1, int run2);

auto number1 = 10;
auto number2 = 20;
auto number3 = 30;
auto number4 = 40;

int main()
{
    Fun2(number1, number2);
    Fun3(number3, number4);

    {
        int number10{2}; // Bu blokda dəyişənlər təyin edilib, amma istifadə olunmur.
        int number20{3};
    }

    {
        int number10; // Bu blokda dəyişən təyin edilib, amma istifadə olunmur.
    }

    return 0;
}

int Fun2(int num1, int num2)
{
    int sum = num1 + num2;
    cout << "Sum in Fun2: " << sum << endl; // Nəticəni ekrana çıxarırıq.
    return sum;
}

int Fun3(int run1, int run2)
{
    int sum2 = run1 + run2;
    cout << "Sum in Fun3: " << sum2<< endl; // Nəticəni ekrana çıxarırıq.
    return sum2;
}

//------------------------------------------------------
#include <iostream>

void fun1(int, int);
void fun2(int, long);

const int n1 = 3;
const int n2 = 4;
const int n3 = 5;
const int n4 = 6;

int main(){
    fun1(n1, n2);
    fun2(n3, n4);
}

void fun1(int a, int b){
    auto result = a + b;
    std::cout << a << " + " << b << " = " << result << std::endl;
}

void fun2(int nn3, int nn4){
    int a = 10;
}

//----------------------------------------------------

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void fun2(){
    list<long long> n = {34, 45, 56, 67};
    long long vertical = n.size();

    for (long long aa : n){
        cout << aa << " ";
    }
    cout << endl;
}

int main(){

    vector<int> number1;
    vector<int> number2{10, 20, 30, 40};

    int size;
    cin >> size;

    for (int i = 0; i < size; ++i){
        int element;
        cin >> element;
        number1.push_back(element);
    }

    auto get = number1.cbegin();

    sort(number1.begin(), number1.end());

    number1.insert(get + 1, number2.begin(), number2.begin() + 3);

    number1.erase(number1.cbegin());

    for (int run : number1){
        cout << run;
    }
    cout << endl;

    fun2();
    return 0;
}


//----------------------------------------------------------------
#include <iostream>
#include <vector>

using namespace std;


struct Test
{
	vector<int> num1{ 1,2,3,4,5 };

	Test()
	{
		auto run1 = num1.begin();
		num1.insert(run1 + 1, 3);

		run1 = num1.begin();

		//for (auto& ss : num1)
		//{
		//	cout << ss << " ";
		//}
	}
};


struct Vest
{
	vector <int> number1{ 1,2,3,4,5 };
	vector <int> number2{ 10,20,30,40,50 };

	Vest()
	{
		auto run2 = number1.begin();
		run2 = number1.begin();

		number1.insert(run2 + 0, number2.begin(), number2.begin() + 3);

		for (auto& getdir : number1)
		{
			cout << getdir;
		}
	}
};


int main()
{
	Vest testInstance;
}


//-----------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fun1()
{
	vector<int> num3{ 1,2,3,4 };

	auto get1 = num3.begin();
	num3.emplace(get1 + 4, 5);
	
	//for (auto run : num3)
	//{
	//	cout << run;
	//}
}


void fun2()
{
	vector<int> num4{ 1,2,4,5,6,7 };
	auto get2 = num4.begin();
	num4.insert(get2 + 2, 2, 3);
}


void fun3()
{
	vector<int> num5{ 1,2,3,4,5,6,7,8,9 };
	vector<int> num6{ 10,20,30,40,50,60,70,80,90 };

	auto get3 = num5.begin();
	num5.insert(get3 + 1, num6.begin(), num6.begin() + 3);

	for (auto run4 : num5)
	{
		cout << run4;
	}
}


void fun4()
{
	vector<int> num7{ 1,2,3,4,5,6,7,8 };
	auto get4 = num7.cend();

	num7.insert(get4, { 21 });

	for (auto as : num7)
	{
		cout << as << endl;
	}
}


int main()
{
	fun1();
	fun2();
	fun3();
	fun4();
}
//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------
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
//------------------------------------------------------------------------





//##########################################################################//
//-------------------------------------vector-------------------------------//
//##########################################################################//
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

//-------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers[6]{
        {1},
        {2},
        {3}
    };

    int get = numbers[1].at(0); // Accessing the first element of numbers[1]
    cout << get;

    return 0;
}

//------------------------------------------------------



#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> textb;

    string input;
    cin >> input;

    textb.push_back(input);

    for (const auto texta : textb) {
        cout << texta << endl;
    }

    return 0;
}

//-----------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers[6]{
        {1},
        {2},
        {3}
    };

    
    int n = numbers[1][0] + numbers[2][0];
    int n1 = numbers[2].at(0); 
    cout << n;
    return 0;
}

//-----------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> number;

    number.push_back(1);
    number.push_back(2);
    number.push_back(3);

    for (int i = 0; i < number.size(); ++i){
        cout << number[i];
        return 0;
    }
}

//------------------------------------------------------------


#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> texts;
void fun_2(){
    for(const auto& text : texts){
        cout << text;
    }
}


int main() {
    string input_text;
    while (cin >> input_text and input_text != "end"){
        texts.push_back(input_text);
    }
    fun_2();
}





