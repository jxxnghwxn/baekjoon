<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int N = 0; // list count
int score = 0; // new score
int P = 0; // ranking count
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    cin >> N >> score >> P;

    int tmp;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    v.push_back(score);

    int rank = 1;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (v[i] > score)
            rank++;
        else if (v[i] == score)
            rank = rank;
        else break;
        ++count;
    }

    if (count + 1 > P)
        rank = -1;

    if (N == 0)
        rank = 1;

    cout << rank;


    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int N = 0; // list count
int score = 0; // new score
int P = 0; // ranking count
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    cin >> N >> score >> P;

    int tmp;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    v.push_back(score);

    int rank = 1;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (v[i] > score)
            rank++;
        else if (v[i] == score)
            rank = rank;
        else break;
        ++count;
    }

    if (count + 1 > P)
        rank = -1;

    if (N == 0)
        rank = 1;

    cout << rank;


    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
