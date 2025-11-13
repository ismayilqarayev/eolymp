#include <iostream>
#include <vector>

using namespace std;

class Runner
{

private:
	vector<int> number1;
	vector<int> number2;
	int* add_vec_num;
	

public:
	Runner()
	{
		add_vec_num = new int(0);
		cout << "Runner initialized." << endl;
	}

	~Runner()
	{
		delete add_vec_num;
		cout << "Runner destroyed." << endl;
	}

	void inputVector(vector<int> *vec)
	{
		cout << "Enter number of elements for vector 1: ";
		cin >> *add_vec_num;

		vec->resize(*add_vec_num);
	}

	void inputVector2()
	{
		cout << "Enter number of elements for vector 2: ";
		cin >> *add_vec_num;
	}

	void display()
	{

	}
};

int main()
{
	Runner run;

	run.inputVector();
	return 0;
}

//---------------------------------------------------------------


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Runner sinfi — iki vektoru idarə edir və onlarla müxtəlif əməliyyatlar aparır
class Runner
{
private:
    vector<int> vektor1;
    vector<int> vektor2;

protected:
    // Daxili funksiya — istənilən vektor üçün məlumatları daxil edir
    void daxilEt(vector<int>& vektor, const string& ad)
    {
        int say;
        cout << ad << " üçün elementlərin sayını daxil edin: ";
        cin >> say;

        vektor.clear();           // əvvəlki məlumatları təmizlə
        vektor.reserve(say);      // yaddaşı əvvəlcədən ayır

        for (int i = 0; i < say; i++)
        {
            int qiymet;
            cout << ad << " üçün " << i + 1 << "-ci elementi daxil edin: ";
            cin >> qiymet;
            vektor.push_back(qiymet);
        }
    }

public:
    // İstifadəçidən hər iki vektoru daxil etmə funksiyası
    void vektorDaxilEt()
    {
        daxilEt(vektor1, "Vektor1");
        daxilEt(vektor2, "Vektor2");
    }

    // İki vektoru birləşdirir (vektor2-ni vektor1-in ikinci elementindən sonra yerləşdirir)
    void birlesdir()
    {
        if (vektor1.empty())
        {
            cout << "Vektor1 boşdur! Əvvəlcə onu daxil edin.\n";
            return;
        }

        auto yer = vektor1.begin() + 1;
        vektor1.insert(yer, vektor2.begin(), vektor2.end());
        cout << "Vektorlar uğurla birləşdirildi!\n";
    }

    // Hər iki vektoru ayrıca göstərir
    void vektorGoster() const
    {
        cout << "\nVektor1 elementləri: ";
        for (int x : vektor1)
            cout << x << " ";

        cout << "\nVektor2 elementləri: ";
        for (int x : vektor2)
            cout << x << " ";

        cout << "\n";
    }

    // Vektor1-i çeşidləyir (artan qaydada)
    void sirala()
    {
        sort(vektor1.begin(), vektor1.end());
        cout << "Vektor1 artan qaydada çeşidləndi.\n";
    }

    // Birləşdirilmiş nəticə vektorunu göstərir
    void neticeniGoster() const
    {
        cout << "\nBirləşdirilmiş vektor elementləri: ";
        for (int x : vektor1)
            cout << x << " ";
        cout << "\n";
    }

    // Menyu interfeysi — istifadəçi əməliyyat seçir
    void menyu()
    {
        int secim;
        do
        {
            cout << "\n========== VEKTOR İDARƏETMƏ MENYUSU ==========\n";
            cout << "1. Vektorları daxil et\n";
            cout << "2. Vektorları göstər\n";
            cout << "3. Vektorları birləşdir\n";
            cout << "4. Vektoru çeşidlə (artan qayda ilə)\n";
            cout << "5. Nəticəni göstər\n";
            cout << "0. Çıxış\n";
            cout << "Seçiminizi daxil edin: ";
            cin >> secim;

            switch (secim)
            {
            case 1:
                vektorDaxilEt();
                break;
            case 2:
                vektorGoster();
                break;
            case 3:
                birlesdir();
                break;
            case 4:
                sirala();
                break;
            case 5:
                neticeniGoster();
                break;
            case 0:
                cout << "Proqramdan çıxılır...\n";
                break;
            default:
                cout << "Yanlış seçim! Zəhmət olmasa yenidən cəhd edin.\n";
            }
        } while (secim != 0);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Runner proqram;
    proqram.menyu(); // menyunu işə salır

    return 0;
}


