#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, W, X, Y, tmp;
    vector<vector<int> > mat(0);
    cin >> H >> W >> X >> Y;

    mat.resize(H + X, vector<int>(W + Y, 0));

    //입력
    for (int i = 0; i < H + X; i++) {
        for (int j = 0; j < W + Y; j++) {
            cin >> tmp;
            mat[i][j] = tmp;
        }
    }

    for (int i = X; i < H; ++i) {
        for (int j = Y; j < W; ++j) {
            mat[i][j] -= mat[i - X][j - Y];
        }
    }

    // 출력
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
