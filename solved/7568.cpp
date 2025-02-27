#include <bits/stdc++.h>
using namespace std;

struct node {
    int height;
    int weight;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int x, y;
    vector<node> ve(0, {0, 0});
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        ve.push_back({x, y});
    }

    int rank = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (ve[i].height < ve[j].height && ve[i].weight < ve[j].weight) {
                rank++;
            }
        }
        cout << rank << ' ';
        rank = 1;
    }


    return 0;
}
