<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int t; //1~1000
int w; //1 ~ 30
int temp, ret;
vector<int> input(1001);
vector<vector<vector<int>>> dp(0); // time, w_cnt, current_tree_num

int main() {
    // input
    cin >> t >> w;
    input[0] = 0;
    for (int i = 1; i <= t; ++i) {
        cin >> temp;
        input[i] = temp;
    }
    dp.resize(t + 1, vector<vector<int>>(w + 1, vector<int>(2)));

    //solve
    // initialize when i==0
    for (int j = 0; j <= w; ++j) {
        dp[0][j][0] = 0;
        dp[0][j][1] = 0;
    }
    for (int i = 1; i <= t; ++i) {
        //initialize when j==0
        if (input[i] == 1) {
            dp[i][0][0] = dp[i - 1][0][0] + 1;
            dp[i][0][1] = dp[i - 1][0][0];
        }
        else if (input[i] == 2) {
            dp[i][0][0] = dp[i - 1][0][0];
            dp[i][0][1] = dp[i - 1][0][0] + 1;
        }
        else {
            break;
        }

        // dp
        for (int j = 1; j <= w; ++j) {
            if (input[i] == 1) {
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j - 1][1]) + 1;
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0]);
            }
            else if (input[i] == 2) {
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j - 1][1]);
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0]) + 1;
            }
            else {
                break;
            }
            ret = max({ret, dp[i][j][0], dp[i][j][1]});
        }
    }
    cout << ret;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int t; //1~1000
int w; //1 ~ 30
int temp, ret;
vector<int> input(1001);
vector<vector<vector<int>>> dp(0); // time, w_cnt, current_tree_num

int main() {
    // input
    cin >> t >> w;
    input[0] = 0;
    for (int i = 1; i <= t; ++i) {
        cin >> temp;
        input[i] = temp;
    }
    dp.resize(t + 1, vector<vector<int>>(w + 1, vector<int>(2)));

    //solve
    // initialize when i==0
    for (int j = 0; j <= w; ++j) {
        dp[0][j][0] = 0;
        dp[0][j][1] = 0;
    }
    for (int i = 1; i <= t; ++i) {
        //initialize when j==0
        if (input[i] == 1) {
            dp[i][0][0] = dp[i - 1][0][0] + 1;
            dp[i][0][1] = dp[i - 1][0][0];
        }
        else if (input[i] == 2) {
            dp[i][0][0] = dp[i - 1][0][0];
            dp[i][0][1] = dp[i - 1][0][0] + 1;
        }
        else {
            break;
        }

        // dp
        for (int j = 1; j <= w; ++j) {
            if (input[i] == 1) {
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j - 1][1]) + 1;
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0]);
            }
            else if (input[i] == 2) {
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j - 1][1]);
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0]) + 1;
            }
            else {
                break;
            }
            ret = max({ret, dp[i][j][0], dp[i][j][1]});
        }
    }
    cout << ret;
    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
