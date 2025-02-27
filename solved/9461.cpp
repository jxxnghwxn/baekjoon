#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    long long test_case[200];
    long long dp[101];
    long long MAX = 0;

    for (int i = 0; i < T; i++) {
        cin >> test_case[i];
        MAX = max(test_case[i], MAX);
    }

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    for (int i = 6; i <= MAX; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    for (int i = 0; i < T; i++) {
        cout << dp[test_case[i]] << "\n";
    }

    return 0;
}
