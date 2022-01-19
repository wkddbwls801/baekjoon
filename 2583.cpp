// 영역 구하기

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int M;
int K;
int arr[101][101];
bool visit[101][101];
int low_x;
int low_y;
int high_x;
int high_y;
int move_x[4] = { -1, 1, 0, 0 };
int move_y[4] = { 0, 0, -1, 1 };
int output1;
int temp;
vector<int> output2;

void DFS(int x, int y) {
	visit[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = x + move_x[i];
		int next_y = y + move_y[i];

		if (next_x >= 0 && next_x < M && next_y >= 0 && next_y < N) {
			if (arr[next_x][next_y] == 0) {
				if (visit[next_x][next_y] == false) {
					temp++;
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

	cin >> M >> N >> K;
	
	for (int i = 0; i < K; i++) {
		cin >> low_x >> low_y >> high_x >> high_y;

		for (int j = low_y; j < high_y; j++) {
			for (int k = low_x; k < high_x; k++) {
				arr[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 0) {
				if (visit[i][j] == false) {
					output1++;
					temp = 1;
					DFS(i, j);
					output2.push_back(temp);
				}
			}
		}
	}

	cout << output1 << "\n";
	sort(output2.begin(), output2.end());

	for (int i = 0; i < output2.size(); i++) {
		cout << output2[i] << " ";
	}
}