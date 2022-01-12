// 요세푸스 문제 0

#include<iostream>
#include<queue>
using namespace std;

int N;
int K;
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";

	while (q.size()) {
		if (q.size() == 1) {
			cout << q.front() << ">";
			q.pop();
			break;
		}

		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}

		cout << q.front() << ", ";
		q.pop();
	}

	cout << "\n";
}
