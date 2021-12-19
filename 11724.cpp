// 연결 요소

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<int> s;
bool check[1001] = { false };

void DFS(vector<int> graph[], int node) {
	s.push(node);
	check[node] = true;

	while (!s.empty()) {
		int cur_node = s.top();
		s.pop();

		for (int i = 0; i < graph[cur_node].size(); i++) {
			int next_node = graph[cur_node][i];
			
			if (check[graph[cur_node][i]] == false) {
				check[graph[cur_node][i]] = true;
				s.push(cur_node);
				s.push(next_node);
				break;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// 정점의 개수
	int M;	// 간선의 개수
	int component = 0;

	cin >> N >> M;

	vector<int> graph[1001];

	for (int i = 0; i < M; i++) {
		int u, v;

		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= N; i++) {
		if (check[i] == false) {
			DFS(graph, i);
			component++;
		}
	}

	cout << component << "\n";
}