// ��� ������

#include<iostream>
using namespace std;

int arr[300];	// �� ��ܿ� ���� ���� ��Ƴ��� �迭
int dp[300];	// �ִ밪 Ȯ���� �迭

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;	// ����� ��

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];	// ����� 1�� ���� ��
	dp[2] = max(arr[1] + arr[2], arr[2]);	// ����� 2�� ���� ��
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);	//����� 3�� ���� ��

	for (int i = 4; i <= n; i++) {

		// ������ ������ ����� ��ƾ� �ϹǷ� arr[i]�� ���ؾ� ��
		// i-1��° ����� ��� i��° ����� ������,
		// i-2��° ����� ��� i��° ����� �������� ����
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}

	cout << dp[n] << "\n";
}