// 바이러스 - DFS

#include<iostream>
#include<vector>
using namespace std;

vector<int> computer[101];
int N;	// 컴퓨터의 수
int M;	// 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수
bool visit[101];
int u;
int v;
int cnt;

void DFS(int start) {
	visit[start] = true;

	for (int i = 0; i < computer[start].size(); i++) {
		int next_node = computer[start][i];

		if (visit[next_node] == false) {
			cnt++;
			DFS(next_node);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;

		// 그래프 생성
		computer[u].push_back(v);
		computer[v].push_back(u);
	}

	DFS(1);

	cout << cnt << "\n";
}