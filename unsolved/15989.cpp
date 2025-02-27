<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<bool> visited(MAX + 1, false);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

    pq.push({0, N});
    while (!pq.empty()) {
        int time = pq.top().first;
        int x = pq.top().second;
        pq.pop();

        visited[x] = true;
        if (x == K) {
            cout << time;
            break;
        }
        if (x * 2 < MAX && !visited[x * 2]) {
            pq.push({time, x * 2});
        }
        if (x + 1 < MAX && !visited[x + 1]) {
            pq.push({time + 1, x + 1});
        }
        if (x - 1 >= 0 && !visited[x - 1]) {
            pq.push({time + 1, x - 1});
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<bool> visited(MAX + 1, false);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

    pq.push({0, N});
    while (!pq.empty()) {
        int time = pq.top().first;
        int x = pq.top().second;
        pq.pop();

        visited[x] = true;
        if (x == K) {
            cout << time;
            break;
        }
        if (x * 2 < MAX && !visited[x * 2]) {
            pq.push({time, x * 2});
        }
        if (x + 1 < MAX && !visited[x + 1]) {
            pq.push({time + 1, x + 1});
        }
        if (x - 1 >= 0 && !visited[x - 1]) {
            pq.push({time + 1, x - 1});
        }
    }
    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
