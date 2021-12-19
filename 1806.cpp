// ºÎºĞ ÇÕ

#include<iostream>
#include<algorithm>
using namespace std;

int arr[100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int S;
	int min_len = 100000000;
	int sum = 0;

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int start = 0;
	int end = 0;
	
	while (start <=end){

		if (sum >= S) {
			min_len = min(min_len, end - start);
			sum -= arr[start++];
		}
		
		else if (end == N) {
			break;
		}

		else {
			sum += arr[end++];
		}
	}

	if (min_len == 100000000) {
		cout << 0 << "\n";
	}
	
	else {
		cout << min_len << "\n";
	}

}