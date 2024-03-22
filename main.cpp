#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    long long n;
    double x;
    double k = 0;
    double s = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0) 
        {
            s += x;
            k++;
        }
    }

    cout << fixed << setprecision(2) << s / k << "Not Found" << endl;
    return 0;
}
