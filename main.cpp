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