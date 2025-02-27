#include <bits/stdc++.h>
using namespace std;

int n;
int temp;
vector<int> input(0);
int dp[10000];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        input.push_back(temp);
    }

    //solve
    dp[0] = input[0];
    dp[1] = input[0] + input[1];
    for (int i = 2; i < n; ++i) {
        dp[i] = max({dp[i - 1], dp[i - 3] + input[i - 1] + input[i], dp[i - 2] + input[i]});
    }

    cout << dp[n - 1];
    return 0;
}
