<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int n;

vector<int> fi;

int main() {
    cin >> n;
    fi.resize(n + 1, -1);

    fi[1] = 1;
    fi[2] = 2;

    if (n > 2) {
        for (int i = 3; i < n + 1; ++i) {
            fi[i] = (fi[i - 1] + fi[i - 2]) % 10007;
        }
    }
    cout << fi[n];

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int n;

vector<int> fi;

int main() {
    cin >> n;
    fi.resize(n + 1, -1);

    fi[1] = 1;
    fi[2] = 2;

    if (n > 2) {
        for (int i = 3; i < n + 1; ++i) {
            fi[i] = (fi[i - 1] + fi[i - 2]) % 10007;
        }
    }
    cout << fi[n];

    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
