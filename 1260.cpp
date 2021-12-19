// DFS�� BFS

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

void DFS(int start, vector<int> graph[], bool check[]) {
	stack<int> s;
	s.push(start);
	check[start] = true;	// �湮 Ȯ��

	cout << start << " ";

	while (!s.empty()) {
		int cur_node = s.top();
		s.pop();

		for (int i = 0; i < graph[cur_node].size(); i++) {
			int next_node = graph[cur_node][i];

			if (check[next_node] == false) {
				cout << next_node << " ";
				check[next_node] = true;
				s.push(cur_node);
				s.push(next_node);
				break;
			}
		}
	}
}

void BFS(int start, vector<int> graph[], bool check[]) {
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty()) {
		int front = q.front();
		q.pop();

		cout << front << " ";

		for (int i = 0; i < graph[front].size(); i++) {
			if (check[graph[front][i]] == false) {
				q.push(graph[front][i]);
				check[graph[front][i]] = true;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// ������ ����
	int M;	// ������ ����
	int V;	// Ž���� ������ ������ ��ȣ

	cin >> N >> M >> V;

	vector<int> graph[1001];
	bool check_dfs[1001] = { false };
	bool check_bfs[1001] = { false };

	for (int i = 0; i < M; i++) {
		int u, v;

		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(V, graph, check_dfs);
	cout << "\n";
	BFS(V, graph, check_bfs);
}