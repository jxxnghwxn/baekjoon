#include <bits/stdc++.h>
using namespace std;

struct cont {
    int cont_num;
    int gold;
    int silver;
    int bronze;
};

bool compare(cont a, cont b) {
    if (a.gold != b.gold) return a.gold > b.gold;
    if (a.silver != b.silver) return a.silver > b.silver;
    return a.bronze > b.bronze;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const int max = 1000000;
    int N, K;
    cin >> N >> K;

    vector<cont> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i].cont_num >> v[i].gold >> v[i].silver >> v[i].bronze;
    }

    sort(v.begin(), v.end(), compare);

    int rank = 1;
    int val = 0;
    for (int i = 0; i < N; i++) {
        if (v[i].cont_num == K) {
            rank = i;
            break;
        }
    }
    for (int i = rank - 1;; i--) {
        if (v[i].gold != v[rank].gold || v[i].silver != v[rank].silver || v[i].bronze != v[rank].
            bronze) {
            break;
        }
        val++;
    }
    cout << rank - val + 1 << endl;

    return 0;
}
