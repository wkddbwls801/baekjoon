// 연결 요소의 개수

#include<iostream>
#include<vector>
using namespace std;

int N;
int M;
int u;
int v;
vector<int> graph[1001];
bool visit[1001];
int result;

void DFS(int start) {
	visit[start] = true;

	for (int i = 0; i < graph[start].size(); i++) {
		if (visit[graph[start][i]] == false) {
			visit[graph[start][i]] = true;
			DFS(graph[start][i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		if (visit[i] == false) {
			result++;
			DFS(i);
		}
	}

	cout << result << "\n";
}
