// 마인크래프트

#include<iostream>
#include<limits.h>
using namespace std;

int N;	// 집터의 세로
int M;	// 집터의 가로
int B;	// 인벤토리에 들어있는 블록의 개수
int land[501][501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M >> B;

	int min = INT_MAX;
	int max = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> land[i][j];

			if (land[i][j] < min) {
				min = land[i][j];
			}

			if (land[i][j] > max) {
				max = land[i][j];
			}
		}
	}

	int time = INT_MAX;
	int height = 0;
	bool check = false;

	for (int i = min; i <= max; i++) {
		int sum_build = 0;	// 쌓는데 필요한 블록의 수
		int sum_remove = 0;	// 제거하는데 필요한 블록의 수

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				int temp = i - land[j][k];	// 원하는 높이와 해당 위치의 높이 차

				if (temp < 0) {	// 해당 위치의 높이가 더 높은 경우 -> 제거
					sum_remove += temp * -1;
				}

				else {
					sum_build += temp;
				}
			}
		}

		// 제거한 블록과 기존의 블록으로 완성할 수 있는 경우
		if (sum_build <= sum_remove + B) {
			int temp = sum_build + sum_remove * 2;
			
			if (time > temp) {
				time = temp;
				height = i;
			}

			// 동일한 시간이면 높이가 더 높은 것을 출력
			if (temp == time) {
				if (height < i) {
					height = i;
				}
			}
		}
	}

	cout << time << " " << height << "\n";
}