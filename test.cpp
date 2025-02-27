<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


int main() {
    cout << "hello world" << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;


int main() {
    int N, K;
    cin >> N >> K;

    vector<bool> visited(MAX + 1, false);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

    pq.push(make_pair(0, N));
    while (!pq.empty()) {
        int time = pq.top().first;
        int x = pq.top().second;
        pq.pop();

        visited[x] = true;
        if (x == K) {
            cout << time;
            break;
        }
        if (x * 2 <= 100000 && !visited[x * 2])
            pq.push({time, x * 2});
        if (x + 1 <= 100000 && !visited[x + 1])
            pq.push({time + 1, x + 1});
        if (x - 1 >= 0 && !visited[x - 1])
            pq.push({time + 1, x - 1});
    }
    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
