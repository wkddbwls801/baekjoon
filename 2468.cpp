// 안전 영역

#include<iostream>
#include<cstring>
using namespace std;

int N;
int arr[101][101];
bool visit[101][101];
int move_x[4] = { -1, 1, 0, 0 };
int move_y[4] = { 0, 0, -1, 1 };
int temp;
int output;
int high;

void DFS(int x, int y, int l) {
	visit[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = x + move_x[i];
		int next_y = y + move_y[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
			if (arr[next_x][next_y] > l) {
				if (visit[next_x][next_y] == false) {
					visit[next_x][next_y] = true;
					DFS(next_x, next_y, l);
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
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];

			if (high < arr[i][j]) {
				high = arr[i][j];
			}
		}
	}
	
	for (int i = 0; i <= high; i++) {
		memset(visit, false, sizeof(visit));
		temp = 0;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (arr[j][k] > i) {
					if (visit[j][k] == false) {
						temp++;
						DFS(j, k, i);
					}
				}
			}
		}

		if (output < temp) {
			output = temp;
		}
	}
	
	cout << output << "\n";
}