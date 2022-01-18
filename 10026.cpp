// 적록색약

#include<iostream>
using namespace std;

int N;
string arr[101];
int move_x[4] = { -1, 1, 0, 0 };
int move_y[4] = { 0, 0, -1, 1 };
bool visit1[101][101];
bool visit2[101][101];
int output1;
int output2;

void DFS1(int x, int y) {
	visit1[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = x + move_x[i];
		int next_y = y + move_y[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
			if (arr[x][y] == arr[next_x][next_y]) {
				if (visit1[next_x][next_y] == false) {
					DFS1(next_x, next_y);
				}
			}
		}
	}
}

void DFS2(int x, int y) {
	visit2[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = x + move_x[i];
		int next_y = y + move_y[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N) {
			if (arr[x][y] == 'R' || arr[x][y] == 'G') {
				if (arr[next_x][next_y] == 'G' || arr[next_x][next_y] == 'R') {
					if (visit2[next_x][next_y] == false) {
						DFS2(next_x, next_y);
					}
				}
			}

			else {
				if (arr[x][y] == arr[next_x][next_y]) {
					if (visit2[next_x][next_y] == false) {
						DFS2(next_x, next_y);
					}
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
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visit1[i][j] == false) {
				output1++;
				//memset(visit1, false, sizeof(visit1));
				DFS1(i, j);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visit2[i][j] == false) {
				output2++;
				//memset(visit2, false, sizeof(visit2));
				DFS2(i, j);
			}
		}
	}


	cout << output1 << " " << output2 << "\n";
}