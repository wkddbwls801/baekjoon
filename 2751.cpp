// 수 정렬하기2

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
vector <int> arr;
int num;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
}