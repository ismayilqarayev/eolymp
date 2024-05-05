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



