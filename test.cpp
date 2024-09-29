#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int N;
	cin >> N;
	vector<int> arr(N);
	queue<int> q;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		q.push(i);
	}

	int t = 0;
	vector<int> ans(N, 0);

	while (!q.empty()) {
		int dp = q.front();
		q.pop();

		t++;

		if (--arr[dp] == 0) {
			ans[dp] = t;
		} else {
			q.push(dp);
		}
	}

	for (int i = 0; i < N; i++) {
		cout << ans[i] << " ";
	}


	cout << "\n";


	return 0;
}
