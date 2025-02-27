#include <bits/stdc++.h>
using namespace std;

enum class Method {
    add,
    remove,
    check,
    toggle,
    all,
    empty,
    unknown,
};

Method stringMethod(const std::string &method) {
    if (method == "add") return Method::add;
    else if (method == "remove") return Method::remove;
    else if (method == "check") return Method::check;
    else if (method == "toggle") return Method::toggle;
    else if (method == "all") return Method::all;
    else if (method == "empty") return Method::empty;
    else return Method::unknown;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> M;

    string method;
    int x, S = 0;

    for (int i = 0; i < M; i++) {
        cin >> method;
        Method m = stringMethod(method);
        switch (m) {
            case Method::add: //or
                cin >> x;
                S |= (1 << x);
                break;
            case Method::remove: //not + and
                cin >> x;
                S &= ~(1 << x);
                break;
            case Method::check: //and
                cin >> x;
                if (S & (1 << x)) {
                    cout << "1\n";
                } else {
                    cout << "0\n";
                }
                break;
            case Method::toggle:
                cin >> x;
                S ^= (1 << x);
                break;
            case Method::all:
                S = (1 << 21) - 1;
                break;
            case Method::empty:
                S = 0;
                break;
            default:
                break;
        }
    }
    return 0;
}
