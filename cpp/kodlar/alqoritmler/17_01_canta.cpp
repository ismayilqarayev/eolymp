#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> agirliq = {2, 3, 4, 5}, deyer = {3, 4, 5, 6}; int tutum = 5;
    vector<int> dp(tutum + 1, 0);
    for (int i = 0; i < (int)agirliq.size(); ++i)
        for (int w = tutum; w >= agirliq[i]; --w) dp[w] = max(dp[w], dp[w - agirliq[i]] + deyer[i]);
    cout << dp[tutum] << '\n';
}
