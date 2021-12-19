// 단지 번호 붙이기

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string danzi[26];
bool visit[26][26];
int N;
int danzi_cnt;
int cnt;
int move_x[4] = { -1, 1, 0, 0 };	// 상하좌우
int move_y[4] = { 0, 0, -1, 1 };	// 상하좌우

void DFS(int value_x, int value_y) {
	cnt++;
	visit[value_x][value_y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = value_x + move_x[i];
		int next_y = value_y + move_y[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
			if (danzi[next_x][next_y] == '1') {
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

	vector<int> cnt_vector;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> danzi[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (danzi[i][j] == '1') {
				if (!visit[i][j]) {
					danzi_cnt++;

					cnt = 0;
					DFS(i, j);

					cnt_vector.push_back(cnt);
				}
			}
		}
	}
	
	cout << danzi_cnt << "\n";

	for (int i = 0; i < cnt_vector.size(); i++) {
		sort(cnt_vector.begin(), cnt_vector.end());
	}

	for (int i = 0; i < cnt_vector.size(); i++) {
		cout << cnt_vector[i] << "\n";
	}

}