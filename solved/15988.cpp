<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int t;
int test_case[1000001];
long long dp[1000001];
const int mod = 1000000009;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    test_case[0] = 2;

    for (int i = 1; i <= t; ++i) {
        cin >> test_case[i];
        for (int j = test_case[i - 1] + 1; j <= test_case[i]; ++j) {
            dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3]) % mod;
        }
        cout << dp[test_case[i]] << '\n';
    }

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int t;
int test_case[1000001];
long long dp[1000001];
const int mod = 1000000009;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    test_case[0] = 2;

    for (int i = 1; i <= t; ++i) {
        cin >> test_case[i];
        for (int j = test_case[i - 1] + 1; j <= test_case[i]; ++j) {
            dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3]) % mod;
        }
        cout << dp[test_case[i]] << '\n';
    }

    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
