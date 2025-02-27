#include <bits/stdc++.h>
using namespace std;

int n, m; // 1 ≤ N ≤ 1024, 1 ≤ M ≤ 100,000
int dp[1025][1025];
int input[1025][1025];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> input[i][j];
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + input[i][j];
        }
    }

    int x1, y1, x2, y2, sum = 0;
    for (int i = 0; i < m; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;

        sum = dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
        cout << sum << "\n";
    }

    return 0;
}
