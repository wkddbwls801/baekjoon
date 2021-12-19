// 방 번호

#include<iostream>
using namespace std;

string N;	// 방 번호
int arr[10];	// 0~9 확인
int check;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N.size(); i++) {
		check = N[i] - '0';	// int로 변환

		// 숫자 9가 들어오면 6을 증가시켜
		// arr[6]에서 6과 9를 같이 관리
		if (check == 9) {
			arr[6]++;
		}

		else {
			arr[check]++;
		}
	}

	int answer = 1;

	if (arr[6] % 2 == 0) {
		arr[6] = arr[6] / 2;
	}

	else {
		arr[6] = arr[6] / 2 + 1;
	}

	for (int i = 0; i < 9; i++) {
		if (answer < arr[i]) {
			answer = arr[i];
		}
	}

	cout << answer << "\n";
}