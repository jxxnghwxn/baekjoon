#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N, cnt = 0;
    cin >> N;

    for (int i = 1; i <= N; i *= 10) {
        cnt += N - (i - 1);
    }

    cout << cnt;

    return 0;
}
