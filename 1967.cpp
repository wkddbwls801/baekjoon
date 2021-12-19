// Ʈ���� ����

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct node {
	int neighor;	// ����� ���
	int distance;	// �Ÿ�
};

int n;	// ����� ����
vector<node> T[10001];
bool visited[10001];
int u;	// �θ� ���
int v;	// �ڽ� ���
int d;	// �Ÿ�
int answer;	// �����

int DFS(int n) {
	int max_distance = 0;	// ���� �� ����
	int secondmax_distance = 0;	// �� �������� ���� �� ����
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