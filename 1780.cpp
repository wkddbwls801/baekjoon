// 종이의 개수

#include<iostream>
using namespace std;

int N;	// 종이의 길이
int arr[2190][2190];	// 종이

struct paper_info {
	int zero_count = 0;
	int minus_count = 0;
	int plus_count = 0;
};

paper_info func(int x, int y, int size) {
	paper_info ret;

	if (size == 1) {
		if (arr[x][y] == 0) {
			ret.zero_count = 1;
		}

		else if (arr[x][y] == -1) {
			ret.minus_count = 1;
		}

		else {
			ret.plus_count = 1;
		}

		return ret;
	}

	paper_info status[9];
	status[0] = func(x, y, size / 3);
	status[1] = func(x + size / 3, y, size / 3);
	status[2] = func(x + (size / 3) * 2, y, size / 3);
	status[3] = func(x, y + size / 3, size / 3);
	status[4] = func(x + size / 3, y + size / 3, size / 3);
	status[5] = func(x + (size / 3) * 2, y + size / 3, size / 3);
	status[6] = func(x, y + (size / 3) * 2, size / 3);
	status[7] = func(x + size / 3, y + (size / 3) * 2, size / 3);
	status[8] = func(x + (size / 3) * 2, y + (size / 3) * 2, size / 3);

	for (int i = 0; i < 9; i++) {
		ret.zero_count += status[i].zero_count;
		ret.minus_count += status[i].minus_count;
		ret.plus_count += status[i].plus_count;
	}

	if (ret.zero_count == 0 && ret.minus_count == 0) {
		ret.plus_count = 1;
	}

	if (ret.zero_count == 0 && ret.plus_count == 0) {
		ret.minus_count = 1;
	}

	if (ret.minus_count == 0 && ret.plus_count == 0) {
		ret.zero_count = 1;
	}

	return ret;
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

	cout << result.minus_count << "\n" << result.zero_count << "\n" << result.plus_count << "\n";
}