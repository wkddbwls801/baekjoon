// 숨바꼭질

#include<iostream>
#include<queue>
using namespace std;

const int MAX = 100001;
bool visit[100001] = { false };	// 방문 확인
int arr[100001];	// 이동 좌표

int BFS(int start, int end) {
	queue<pair<int, int>>q;	// 위치, 시간
	q.push(make_pair(start, 0));

	visit[start] = true;

	while (!q.empty()) {
		int location = q.front().first;
		int time = q.front().second;

		q.pop();

		if (location == end) {
			return time;
		}

		// 이동할 수 있는 3가지 상황 만들기

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

	int N;	// 수빈이가 있는 위치
	int K;	// 동생이 있는 위치

	cin >> N >> K;

	cout << BFS(N, K) << "\n";

	return 0;
}