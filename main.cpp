#include <iostream>
using namespace std;

int main() {
    int s, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18;
    cin >> s;
    s1 = s / 500;
    s2 = s % 500;
    s3 = s2 / 200;
    s4 = s2 % 200;
    s5 = s4 / 100;
    s6 = s4 % 100;
    s7 = s6 / 50;
    s8 = s6 % 50;
    s9 = s8 / 20;
    s10 = s8 % 20;
    s11 = s10 / 10;
    s12 = s10 % 10;
    s13 = s12 / 5;
    s14 = s12 % 5;
    s15 = s14 / 2;
    s16 = s14 % 2;
    s17 = s16 / 1;
    s18 = s16 % 1;
    cout << s1 + s3 + s5 + s7 + s9 + s11 + s13 + s15 + s17 << endl;
    return 0;
}

//----------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

int main() {
    int a, count = 0;
    cin >> a;
    
    while (a != 0) {
        if (a >= 500) {
            a -= 500;
            count++;
        } else if (a >= 200) {
            a -= 200;
            count++;
        } else if (a >= 100) {
            a -= 100;
            count++;
        } else if (a >= 50) {
            a -= 50;
            count++;
        } else if (a >= 20) {
            a -= 20;
            count++;
        } else if (a >= 10) {
            a -= 10;
            count++;
        } else if (a >= 5) {
            a -= 5;
            count++;
        } else if (a >= 2) {
            a -= 2;
            count++;
        } else if (a >= 1) {
            a -= 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
