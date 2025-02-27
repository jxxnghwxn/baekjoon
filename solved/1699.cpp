<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int dp[100001];
    for (int i = 0; i <= n; i++) {
        dp[i] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    cout << dp[n];

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int dp[100001];
    for (int i = 0; i <= n; i++) {
        dp[i] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    cout << dp[n];

    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
