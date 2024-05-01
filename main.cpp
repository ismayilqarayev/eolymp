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