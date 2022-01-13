// 단지 번호 붙이기

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;	// 지도의 크기
string map[26];
int danzi_cnt;	// 총 단지수
int home;	// 단지 내 집의 수
int move_x[4] = { -1, 1, 0, 0 };
int move_y[4] = { 0, 0, -1, 1 };
bool visit[26][26];
vector<int> cnt;

// 한 단지 내의 집의 수 찾는 함수
void DFS(int x, int y) {
	home++;	// 단지 수 증가
	visit[x][y] = true;	// 방문했음을 표시

	for (int i = 0; i < 4; i++) {
		// 상하좌우 확인

		int next_x = move_x[i] + x;
		int next_y = move_y[i] + y;

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
			if (map[next_x][next_y] == '1') {
				if (visit[next_x][next_y] == false) {
					DFS(next_x, next_y);
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] != '0') {
				if (visit[i][j] == false) {
					danzi_cnt++;

					home = 0;
					DFS(i, j);

					cnt.push_back(home);
				}
			}
		}
	}

	cout << danzi_cnt << "\n";

	sort(cnt.begin(), cnt.end());

	for (int i = 0; i < danzi_cnt; i++) {
		cout << cnt[i] << "\n";
	}
}