// 나무 자르기

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N;	// 나무의 수
int M;	// 가져가려고 하는 나무의 길이
vector <int> H;	// 나무의 높이
int height;
int result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> height;
		H.push_back(height);
	}

	sort(H.begin(), H.end());

	int min = 0;
	int max = H.back();
	int mid = 0;

	while (min <= max) {
		long long sum = 0;
		mid = (min + max) / 2;

		for (int i = 0; i < N; i++) {
			if (H[i] >= mid) {
				sum += H[i] - mid;
			}
		}

		if (sum >= M) {
			if (result < mid) {
				result = mid;
			}
			min = mid + 1;
		}

		else {
			max = mid - 1;
		}
	}

	cout << result << "\n";
}