#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int H, W;
int N, M;

void Input() {
    cin >> H >> W >> N >> M;
}

void Solve() {
    // 0,0 을 채우고 나머지 빈칸 + 1(사람) 을 계산하고
    // 1을 더함
    // 1+N 칸 차지함
    int col = (H - 1) / (N + 1) + 1;
    // 1+M 칸 차지함
    int row = (W - 1) / (M + 1) + 1;
    cout << col * row;
}

int main() {
    Input();
    Solve();
    return 0;
}
