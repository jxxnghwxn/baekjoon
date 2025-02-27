<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

const int mod = 15746;
int n;

vector<int> dp(0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    dp.resize(n);

    //solve
    // 1 or 00
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }

    cout << dp[n - 1] << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

const int mod = 15746;
int n;

vector<int> dp(0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    dp.resize(n);

    //solve
    // 1 or 00
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }

    cout << dp[n - 1] << endl;
    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
