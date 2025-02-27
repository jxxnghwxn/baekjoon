#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<vector<int>> tri;
int t1, t2, t3;

void Input() {
    for (;;) {
        cin >> t1 >> t2 >> t3;
        if (t1 == 0 && t2 == 0 && t3 == 0) {
            tri.push_back(vector<int>{t1, t2, t3});
            break;
        } else
            tri.push_back(vector<int>{t1, t2, t3});
    }
}

void Solve() {
    int i = 0;
    while (true) {
        int a = tri[i][0];
        int b = tri[i][1];
        int c = tri[i][2];
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        if ((a + b) > c && (b + c) > a &&
            (a + c) > b) {
            if (a == b && a == c) {
                cout << "Equilateral" << endl;
                i++;
            } else if (a == b || b == c || a == c) {
                cout << "Isosceles" << endl;
                i++;
            } else {
                cout << "Scalene" << endl;
                i++;
            }
        } else {
            cout << "Invalid" << endl;
            i++;

        }


    }
}

int main() {
    Input();
    Solve();
}