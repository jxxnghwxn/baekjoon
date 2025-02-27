#include <bits/stdc++.h>
using namespace std;

int n, m, v;

const int MAX = 999;


vector<vector<int>> adj;


stack<int, int> s;


void INPUT() {
    cin >> n >> m >> v;


    adj.resize(m, vector(2, 0));
    for (int i = 0; i < m; ++i) {
        cin >> adj[i][0] >> adj[i][1];
    }
}

void test() {
    for (int i = 0; i < m; ++i) {
        cout << adj[i][0] << " " << adj[i][1] << endl;;
    }
}

void DPS() {
}

void BFS() {
    vector<bool> visited;
    visited.resize(n, false);
    queue<int> q;

    visited[v] = true;
    q.push(v);

    while (!q.empty()) {
        int j = q.front();
        cout << j << " ";
        q.pop();

        for (int k : adj[j]) {
            if (!visited[k]) {
                visited[k] = true;
                q.push(k);
            }
        }
    }
}

int main() {
    INPUT();
    test();

    return 0;
}
