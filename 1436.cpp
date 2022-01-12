// 영화감독 숌

#include<iostream>
#include<string>
using namespace std;

int N;

int FindSeries(int N) {
	int i = 666;	// Á¦ÀÏ ÀÛÀº ¼ö
	int series = 0;	// count
	string target;

	while (1) {
		target = to_string(i);

		for (int j = 0; j < target.length() - 2; j++) {
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6') {
				series++;

				if (series == N) {
					return i;
				}

				break;
			}
		}

		i++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cout << FindSeries(N);

}
