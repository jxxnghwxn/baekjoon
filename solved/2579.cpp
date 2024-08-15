#include <bits/stdc++.h>
using namespace std;

int n;
int score[300];
int dp[300];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> score[i];
    }

    dp[0] = score[0];
    dp[1] = score[0] + score[1];
    dp[2] = score[2] + max(score[0], score[1]);
    for (int i = 3; i < n; ++i) {
        dp[i] = score[i] + max(dp[i - 2], dp[i - 3] + score[i - 1]);
    }

    cout << dp[n - 1];
    return 0;
}
