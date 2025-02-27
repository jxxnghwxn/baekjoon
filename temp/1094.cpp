<<<<<<< HEAD
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
=======
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
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
