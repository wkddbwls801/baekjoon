// 섬의 개수

#include<iostream>
#include<cstring>
using namespace std;

int T;
int w;	// 지도의 너비
int h;	// 지도의 높이
int map[51][51];
bool visit[51][51];
int move_x[8] = { -1, - 1, -1, 0, 1, 1, 1, 0 };
int move_y[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int result;

void DFS(int x, int y) {
	visit[x][y] = true;

	for (int i = 0; i < 8; i++) {
		int next_x = x + move_x[i];
		int next_y = y + move_y[i];

		if (next_x >= 0 && next_x < h && next_y >= 0 && next_y < w) {
			if (map[next_x][next_y] == 1) {
				if (visit[next_x][next_y] == false) {
					visit[next_x][next_y] = true;
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

	while (1) {
		cin >> w >> h;

		// 종료 조건
		if (w == 0 && h == 0) {
			return 0;
		}
		memset(visit, 0, sizeof(visit));
		result = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1) {
					if (visit[i][j] == false) {
						result++;
						DFS(i, j);
					}
				}
			}
		}

		cout << result << "\n";
	}
}