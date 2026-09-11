#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Abstrakt sinif
class Telebe
{
private:
    string ad;
    string soyad;
    string telefon;
    string email;

public:

    Telebe(string ad, string soyad, string telefon, string email)
    {
        this->ad = ad;
        this->soyad = soyad;
        this->telefon = telefon;
        this->email = email;
    }

    string getAd()
    {
        return ad;
    }

    string getSoyad()
    {
        return soyad;
    }

    string getTelefon()
    {
        return telefon;
    }

    string getEmail()
    {
        return email;
    }

    void setAd(string ad)
    {
        this->ad = ad;
    }

    void setSoyad(string soyad)
    {
        this->soyad = soyad;
    }

    void setTelefon(string telefon)
    {
        this->telefon = telefon;
    }

    void setEmail(string email)
    {
        this->email = email;
    }

    virtual void melumatGoster() = 0;

    virtual ~Telebe()
    {
    }
};


// Telebe-dən miras alır
class MagistrTelebe : public Telebe
{
private:
    string universitet;

public:

    MagistrTelebe(
        string ad,
        string soyad,
        string telefon,
        string email,
        string universitet
    ) : Telebe(ad, soyad, telefon, email)
    {
        this->universitet = universitet;
    }

    void melumatGoster() override
    {
        cout << "Ad: " << getAd() << endl;
        cout << "Soyad: " << getSoyad() << endl;
        cout << "Telefon: " << getTelefon() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Universitet: " << universitet << endl;
    }
};


// MagistrTelebe-dən miras alır
class DoktorantTelebe : public MagistrTelebe
{
private:
    string tedqiqatMovzusu;

public:

    DoktorantTelebe(
        string ad,
        string soyad,
        string telefon,
        string email,
        string universitet,
        string tedqiqatMovzusu
    ) : MagistrTelebe(ad, soyad, telefon, email, universitet)
    {
        this->tedqiqatMovzusu = tedqiqatMovzusu;
    }

    void melumatGoster() override
    {
        MagistrTelebe::melumatGoster();

        cout << "Tedqiqat movzusu: "
             << tedqiqatMovzusu << endl;
    }
};


int main()
{
    vector<Telebe*> telebeler;

    int n;

    cout << "Nece telebe daxil edeceksiniz: ";
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int secim;

        cout << "\n" << i + 1 << "-ci telebe" << endl;
        cout << "1 - Magistr" << endl;
        cout << "2 - Doktorant" << endl;
        cout << "Seciminiz: ";
        cin >> secim;

        cin.ignore();

        string ad;
        string soyad;
        string telefon;
        string email;
        string universitet;
        string movzu;

        cout << "Ad: ";
        getline(cin, ad);

        cout << "Soyad: ";
        getline(cin, soyad);

        cout << "Telefon: ";
        getline(cin, telefon);

        cout << "Email: ";
        getline(cin, email);

        cout << "Universitet: ";
        getline(cin, universitet);

        if (secim == 1)
        {
            telebeler.push_back(
                new MagistrTelebe(
                    ad,
                    soyad,
                    telefon,
                    email,
                    universitet
                )
            );
        }
        else if (secim == 2)
        {
            cout << "Tedqiqat movzusu: ";
            getline(cin, movzu);

            telebeler.push_back(
                new DoktorantTelebe(
                    ad,
                    soyad,
                    telefon,
                    email,
                    universitet,
                    movzu
                )
            );
        }
    }


    cout << "\n\n===== TELEBELER =====" << endl;

    for (int i = 0; i < telebeler.size(); i++)
    {
        cout << "\n" << i + 1 << "-ci telebe:" << endl;

        telebeler[i]->melumatGoster();
    }


    // Yaddasi temizleyirik
    for (int i = 0; i < telebeler.size(); i++)
    {
        delete telebeler[i];
    }

    return 0;
}