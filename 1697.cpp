// ���ٲ���

#include<iostream>
#include<queue>
using namespace std;

const int MAX = 100001;
bool visit[100001] = { false };	// �湮 Ȯ��
int arr[100001];	// �̵� ��ǥ

int BFS(int start, int end) {
	queue<pair<int, int>>q;	// ��ġ, �ð�
	q.push(make_pair(start, 0));

	visit[start] = true;

	while (!q.empty()) {
		int location = q.front().first;
		int time = q.front().second;

		q.pop();

		if (location == end) {
			return time;
		}

		// �̵��� �� �ִ� 3���� ��Ȳ �����

		if (location + 1 < MAX && !visit[location + 1]) {
			q.push(make_pair(location + 1, time + 1));
			visit[location + 1] = true;
		}

		if (location - 1 >= 0 && !visit[location - 1]) {
			q.push(make_pair(location - 1, time + 1));
			visit[location - 1] = true;
		}

		if (location * 2 < MAX && !visit[location * 2]) {
			q.push(make_pair(location * 2, time + 1));
			visit[location * 2] = true;
		}
		
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// �����̰� �ִ� ��ġ
	int K;	// ������ �ִ� ��ġ

	cin >> N >> K;

	cout << BFS(N, K) << "\n";

	return 0;
}