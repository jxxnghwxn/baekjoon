<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> maze(0);

int main() {
    // input
    string str;

    cin >> n >> m;
    maze.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> str;
        for (int j = 0; j < m; ++j) {
            maze[i].push_back(str[j] - '0');
        }
    }

    // solve, bfs with dp updating maze
    vector<vector<bool>> visited(0);
    visited.resize(n, vector<bool>(m));
    queue<pair<int, int>> q;
    int x_move[4] = {-1, 1, 0, 0};
    int y_move[4] = {0, 0, -1, 1};


    // 출발 {0,0} 도착 {n-1,m-1}
    q.push({0, 0});
    visited[0][0] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // check next index
        for (int i = 0; i < 4; ++i) {
            int x_next = x + x_move[i];
            int y_next = y + y_move[i];

            // skip unvalid
            if (x_next < 0 || x_next >= n || y_next < 0 || y_next >= m) continue;
            if (maze[x_next][y_next] == 0) continue;
            if (visited[x_next][y_next] == true) continue;

            // check valid
            if (maze[x_next][y_next] >= 1) {
                maze[x_next][y_next] = maze[x][y] + 1;
                q.push({x_next, y_next});
                visited[x_next][y_next] = true;
            }
        }
    }

    cout << maze[n - 1][m - 1];
}
=======
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> maze(0);

int main() {
    // input
    string str;

    cin >> n >> m;
    maze.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> str;
        for (int j = 0; j < m; ++j) {
            maze[i].push_back(str[j] - '0');
        }
    }

    // solve, bfs with dp updating maze
    vector<vector<bool>> visited(0);
    visited.resize(n, vector<bool>(m));
    queue<pair<int, int>> q;
    int x_move[4] = {-1, 1, 0, 0};
    int y_move[4] = {0, 0, -1, 1};


    // 출발 {0,0} 도착 {n-1,m-1}
    q.push({0, 0});
    visited[0][0] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // check next index
        for (int i = 0; i < 4; ++i) {
            int x_next = x + x_move[i];
            int y_next = y + y_move[i];

            // skip unvalid
            if (x_next < 0 || x_next >= n || y_next < 0 || y_next >= m) continue;
            if (maze[x_next][y_next] == 0) continue;
            if (visited[x_next][y_next] == true) continue;

            // check valid
            if (maze[x_next][y_next] >= 1) {
                maze[x_next][y_next] = maze[x][y] + 1;
                q.push({x_next, y_next});
                visited[x_next][y_next] = true;
            }
        }
    }

    cout << maze[n - 1][m - 1];
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
