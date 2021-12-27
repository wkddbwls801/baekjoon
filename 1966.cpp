#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int T;
int N;
int M;
int priority;

int main() {
	ios::sync_with_stdio(false);

	cin >> T;

	while (T--) {
		int cnt = 0;	// 순서
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue<int> result;

		for (int i = 0; i < N; i++) {
			cin >> priority;

			q.push({ i, priority });
			result.push(priority);	// 우선순위 큐
		}

		while (!q.empty()) {
			int index = q.front().first;	// 문서 번호
			int value = q.front().second;	// 문서 중요도

			q.pop();

			if (result.top() == value) {
				result.pop();
				++cnt;

				if (index == M) {
					cout << cnt << "\n";
					break;
				}
			}

			else {
				q.push({ index, value });
			}
		}
	}
}