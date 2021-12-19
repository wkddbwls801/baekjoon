// 비숍

#include<iostream>
using namespace std;

bool chess[11][11];
bool visited1[11];	// 오른쪽에서 왼쪽으로 가는 대각선
bool visited2[11];	// 왼쪽에서 오른쪽으로 가는 대각선
int bishop[2];	// 0은 검은색, 1은 흰색
int N;

void DFS(int cnt, int x, int y, int color) {
	if (y >= N) {
		x++;

		// 검은색끼리 흰색끼리 보기 때문에 각 행의 시작 위치는 다름
		// 이를 고려하는 코드
		if (y % 2 == 0) {
			y = 1;
		}

		else {
			y = 0;
		}
	}
	
	// 끝까지 다 탐색 완료
	if (x >= N) {
		if (cnt > bishop[color]) {
			bishop[color] = cnt;
		}

		return;
	}

	// 비숍을 놓을 수 있으면서 대각선에 다른 비숍들이 없는 경우
	if (chess[x][y] && !visited1[x + y + 1] && !visited2[y - x + N]) {
		
		visited1[x + y + 1] = true;
		visited2[y - x + N] = true;

		DFS(cnt + 1, x, y + 2, color);

		// 백트래킹으로 돌아오면 비숍을 제거하고 다음으로 넘어가야함.
		visited1[x + y + 1] = false;
		visited2[y - x + N] = false;
	}

	DFS(cnt, x, y + 2, color);
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> chess[i][j];
		}
	}


	DFS(0, 0, 0, 0);
	DFS(0, 0, 1, 1);

	cout << bishop[0] + bishop[1] << "\n";
}