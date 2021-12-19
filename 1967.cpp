// 트리의 지름

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct node {
	int neighor;	// 연결된 노드
	int distance;	// 거리
};

int n;	// 노드의 개수
vector<node> T[10001];
bool visited[10001];
int u;	// 부모 노드
int v;	// 자식 노드
int d;	// 거리
int answer;	// 결과값

int DFS(int n) {
	int max_distance = 0;	// 가장 긴 길이
	int secondmax_distance = 0;	// 그 다음으로 가장 긴 길이
	int temp_distance;

	visited[n] = true;

	for (int i = 0; i < T[n].size(); i++) {
		if (visited[T[n][i].neighor] == false) {
			temp_distance = DFS(T[n][i].neighor) + T[n][i].distance;

			if (temp_distance > max_distance) {
				swap(temp_distance, max_distance);
			}

			if (temp_distance > secondmax_distance) {
				swap(temp_distance, secondmax_distance);
			}
		}
	}

	answer = max(answer, max_distance + secondmax_distance);

	return max_distance;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		cin >> u >> v >> d;

		T[u].push_back({ v, d });
		T[v].push_back({ u, d });
	}

	DFS(1);

	cout << answer << "\n";
}