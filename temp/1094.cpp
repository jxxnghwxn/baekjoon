#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int ret = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            ret++;
        }
        n /= 2;
    }

    cout << ret;

    return 0;
}
