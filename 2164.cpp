// 카드2

#include<iostream>
#include<queue>
using namespace std;

int N;
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() != 1) {
		// 제일 위의 한장 버리기
		q.pop();

		// 제일 아래로 옮기기
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << "\n";
}