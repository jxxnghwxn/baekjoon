<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int n;
int64_t ret = 0;
const int overflow = 1000000000;
int dp[100][10];

int64_t solve() {
    dp[0][0] = 0;
    for (int i = 1; i < 10; ++i) {
        dp[0][i] = 1;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == 0) {
                dp[i][0] = dp[i - 1][1] % overflow;
            }
            else if (j == 9) {
                dp[i][9] = dp[i - 1][8] % overflow;
            }
            else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % overflow;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        ret += dp[n - 1][i];
    }
    return (ret % overflow);
}


int main() {
    cin >> n;
    cout << solve();
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int n;
int64_t ret = 0;
const int overflow = 1000000000;
int dp[100][10];

int64_t solve() {
    dp[0][0] = 0;
    for (int i = 1; i < 10; ++i) {
        dp[0][i] = 1;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == 0) {
                dp[i][0] = dp[i - 1][1] % overflow;
            }
            else if (j == 9) {
                dp[i][9] = dp[i - 1][8] % overflow;
            }
            else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % overflow;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        ret += dp[n - 1][i];
    }
    return (ret % overflow);
}


int main() {
    cin >> n;
    cout << solve();
    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
