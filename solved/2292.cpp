#include <bits/stdc++.h>
using namespace std;

int N;

void Solve() {
    cin >> N;
    if (N == 1) {
        cout << N << endl;
        return;
    }
    for (int i = 0; i < 100000; ++i) {
        int min = 1 + 3 * i * (i + 1);
        int max = 1 + 3 * (i + 1) * (i + 2);
        if (N > min && N <= max) {
            cout << (i + 2) << endl;
            break;
        }
    }
}

int main() {
    Solve();
    return 0;
}