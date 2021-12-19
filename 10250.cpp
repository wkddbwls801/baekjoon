// ACM 호텔

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 0;	// 테스트 케이스
	int H = 0;	// 호텔의 높이
	int W = 0;	// 각 층에 이쓴 방 개수
	int N = 0;	// 손님


	cin >> T;

	for (int i = 0; i < T; i++) {
		int count = 0;
		cin >> H >> W >> N;

		for (int j = 1; j <= W; j++) {
			for (int k = 1; k <= H; k++) {
				count++;

				if (count == N) {
					cout << k * 100 + j << "\n";
				}
			}
		}
	}
}