// 숨바꼭질

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int N;
int K;
vector<int> location[100001];
int visit[100001];
queue<int> q;

int BFS(int start, int end) {
	visit[start] = 0;
	q.push(start);

	while (!q.empty()) {
		int now = q.front();
		q.pop();

		if (now == end) {
			return visit[end];
		}

		for (int i = 0; i < location[now].size(); i++) {
			if (visit[location[now][i]] > visit[now] + 1) {
				q.push(location[now][i]);
				visit[location[now][i]] = visit[now] + 1;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	
	fill(visit, visit + 100001, 100001);

	for (int i = 0; i < 100001; i++) {
		if (i - 1 >= 0 && i - 1 < 100001) {
			location[i].push_back(i - 1);
		}

		if (i + 1 >= 0 && i + 1 < 100001) {
			location[i].push_back(i + 1);
		}

		if (i * 2 >= 0 && i * 2 < 100001) {
			location[i].push_back(i * 2);
		}
	}

	cout << BFS(N, K) << "\n";
}
