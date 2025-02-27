#include <bits/stdc++.h>
using namespace std;

int m, n, k;
int rect[100][4];
int temp;
const int divider = 9901;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> rect[i][0] >> rect[i][1] >> rect[i][2] >> rect[i][3];
    }


    return 0;
}

void BFS(int startVertex) {
    int visited[100][100] = {1};
    std::queue<int> queue;

    int x_move[4] = {-1, 1, 0, 0};
    int y_move[4] = {0, 0, -1, 1};

    visited[0][0] = true;
    queue.push(startVertex);

    while (!queue.empty()) {
        int vertex = queue.front();
        std::cout << vertex << " ";
        queue.pop();

        for (int adjVertex: adjList[vertex]) {
            if (!visited[adjVertex]) {
                visited[adjVertex] = true;
                queue.push(adjVertex);
            }
        }
    }
}
