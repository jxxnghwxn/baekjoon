#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, ret, tmp;
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> N >> M;
        ret = 1;
        tmp = 1;
        for (int i = M; i > M - N; --i) {
            ret *= i;
            ret /= tmp++;
        }
        cout << ret << "\n";
    }


    return 0;
}
