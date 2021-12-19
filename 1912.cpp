// ������

#include<iostream>
using namespace std;

int num[100000];	// ������ �迭
int dp[100000];	// dp �迭

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// ���� ����
	int output;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	output = dp[0] = num[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(num[i], dp[i - 1] + num[i]);
		output = max(output, dp[i]);	// dp �迭�� �ִ� �����յ� �� ���� ū �� ����
	}


	cout << output << "\n";
}