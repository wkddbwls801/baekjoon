// 공유기 설치

#include<iostream>
#include<algorithm>
using namespace std;

int home[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// 집의 개수
	int C;	// 공유기의 개수

	cin >> N >> C;

	for (int i = 0; i < N; i++) {
		cin >> home[i];
	}

	sort(home, home + N);	// 입력 받은 집들을 정렬시킴.

	int min = 1;
	int max = home[N - 1];
	int mid = 0;	// 공유기 간의 거리
	int count = 0;	// 공유기의 개수 확인
	int pos;	// 공유기 위치 index 값으로 표현
	int answer = 0;

	while (min <= max) {
		mid = (min + max) / 2;

		pos = 0;	// arr[0]번에 첫번째로 설치
		count = 1;

		for (int i = 1; i < N; i++) {
			if (home[i] - home[pos] >= mid) {
				pos = i;	// pos 위치에 설치한 후, 그 위치부터 다시 거리 계산
				count++;
			}
		}

		if (count >= C) {
			answer = mid;
			min = mid + 1;	// 공유기 간의 늘이기
		}

		else {
			max = mid - 1;	// 공유기 간의 거리 줄이기
		}
		
	}

	cout << answer << "\n";
}