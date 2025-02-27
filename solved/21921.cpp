<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    int visit[300000]; // i 1부터 할꺼면 1 많게
    int max = 0, cur = 0, cnt = 0;

    // 입력
    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        cin >> visit[i];
    }

    // 초기값
    for (int i = 1; i <= X; i++) {
        cur += visit[i];
    }

    cnt = 1;
    max = cur;

    // i를 뺀다
    for (int i = 1; i <= N - X; i++) {
        // 계속해서 현재 위치에서의 합을 최신화 해야함
        cur = cur - visit[i] + visit[i + X];
        if (cur > max) {
            // 최대값 갱신
            max = cur;
            cnt = 1;
        } else if (max == cur) {
            // 최대값 유지, 카운트 증가
            cnt++;
        }
    }

    if (max == 0)
        cout << "SAD";
    else
        cout << max << "\n" << cnt;

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    int visit[300000]; // i 1부터 할꺼면 1 많게
    int max = 0, cur = 0, cnt = 0;

    // 입력
    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        cin >> visit[i];
    }

    // 초기값
    for (int i = 1; i <= X; i++) {
        cur += visit[i];
    }

    cnt = 1;
    max = cur;

    // i를 뺀다
    for (int i = 1; i <= N - X; i++) {
        // 계속해서 현재 위치에서의 합을 최신화 해야함
        cur = cur - visit[i] + visit[i + X];
        if (cur > max) {
            // 최대값 갱신
            max = cur;
            cnt = 1;
        } else if (max == cur) {
            // 최대값 유지, 카운트 증가
            cnt++;
        }
    }

    if (max == 0)
        cout << "SAD";
    else
        cout << max << "\n" << cnt;

    return 0;
}
>>>>>>> 01eb04a73acc8e1f2a14249a52b18833f1751e1c
