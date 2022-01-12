// 색종이 만들기

#include<iostream>
using namespace std;

int N;	// 전체 종이의 한 변의 길이
int arr[129][129];	// 종이

struct paper_info {
	int white_count = 0;
	int blue_count = 0;
};

paper_info func(int x, int y, int size) {
	paper_info temp;

	if (size == 1) {
		if (arr[x][y] == 1) {
			temp.blue_count = 1;
		}

		else {
			temp.white_count = 1;
		}

		return temp;
	}

	paper_info status[4];

	status[0] = func(x, y, size / 2);
	status[1] = func(x + size / 2, y, size / 2);
	status[2] = func(x, y + size / 2, size / 2);
	status[3] = func(x + size / 2, y + size / 2, size / 2);

	for (int i = 0; i < 4; i++) {
		temp.blue_count += status[i].blue_count;
		temp.white_count += status[i].white_count;
	}

	if (temp.white_count == 0) {
		temp.blue_count = 1;
	}

	if (temp.blue_count == 0) {
		temp.white_count = 1;
	}

	return temp;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	paper_info result = func(0, 0, N);

	cout << result.white_count << "\n" << result.blue_count << "\n";
}