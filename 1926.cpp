// �׸�

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int draw[501][501];
bool visit[501][501];
int n;	// ���� ũ��
int m;	// ���� ũ��
int cnt;	// �׸��� ����
int draw_cnt;	// �׸��� ����

int move_x[4] = { -1, 1, 0, 0 };	// �����¿�
int move_y[4] = { 0, 0, -1, 1 };	// �����¿�

void DFS(int value_x, int value_y) {
	visit[value_x][value_y] = true;
	cnt++;

	for (int i = 0; i < 4; i++) {
		int next_x = value_x + move_x[i];
		int next_y = value_y + move_y[i];

		if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < m) {
			if (draw[next_x][next_y] == 1) {
				if (!visit[next_x][next_y]) {
					DFS(next_x, next_y);

				}
			}
		}

		else {
			continue;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> draw[i][j];
		}
	}

	// ���� ó��
	// ����, ���� ��� 1�̰�
	// �׸��� ���� ���, ��, 0�� ���� ���
	// v�� �ƹ��͵� ���� �����Ƿ� ���� �߻�
	// ���� ó�� �ʼ�!
	v.push_back(draw[0][0]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (draw[i][j] == 1) {
				if (!visit[i][j]) {
					
					cnt = 0;
					draw_cnt++;

					DFS(i, j);
					v.push_back(cnt);
				}
			}
		}
	}

	int max = *max_element(v.begin(), v.end());

	cout << draw_cnt << "\n";
	cout << max << "\n";
}