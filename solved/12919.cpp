#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void solve(string s, string t) {
    if (s.length() > t.length()) {
        return;
    }
    if (s == t) {
        ans = 1;
        return;
    }
    if (t[0] == 'A' && t[t.size() - 1] == 'A') {
        t.pop_back();
        solve(s, t);
    }
    if (t[0] == 'B' && t[t.size() - 1] == 'B') {
        reverse(t.begin(), t.end());
        t.pop_back();
        solve(s, t);
    }
    if (t[0] == 'A' && t[t.size() - 1] == 'B') {
        return;
    }
    if (t[0] == 'B' && t[t.size() - 1] == 'A') {
        //1
        string tmp = t;
        tmp.pop_back();
        solve(s, tmp);
        //2
        reverse(t.begin(), t.end());
        t.pop_back();
        solve(s, t);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    solve(s, t);

    cout << ans;

    return 0;
}
