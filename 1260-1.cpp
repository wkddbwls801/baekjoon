// DFS와 BFS

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int N;	// 정점의 개수
int M;	// 간선의 개수
int V;	// 탐색을 시작할 정점의 번호
vector<int> graph[1001];	// 그래프
bool check[1001];	// 방문 여부 확인
int node1;
int node2;

void DFS(int start, vector<int> graph[], bool check[]) {
	check[start] = true;	// 방문함을 표시

	cout << start << " ";

	for (int i = 0; i < graph[start].size(); i++) {
		int next_node = graph[start][i];

		if (check[next_node] == false) {
			check[next_node] = true;

			DFS(next_node, graph, check);

		}
	}
}

void BFS(int start, vector<int> graph[], bool check[]) {
	
	queue<int> q;
	q.push(start);
	check[start] = true;	// 방문함을 표시

	while (!q.empty()) {
		int cur_node = q.front();
		cout << cur_node << " ";
		q.pop();

		for (int i = 0; i < graph[cur_node].size(); i++) {
			int next_node = graph[cur_node][i];

			if (check[next_node] == false) {
				check[next_node] = true;
				q.push(next_node);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> node1 >> node2;

		graph[node1].push_back(node2);
		graph[node2].push_back(node1);
	}

	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(V, graph, check);
	cout << "\n";

	for (int i = 0; i < 1001; i++) {
		check[i] = 0;
	}

	BFS(V, graph, check);
}