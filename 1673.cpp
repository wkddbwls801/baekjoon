// ġŲ ����

#include<iostream>
using namespace std;

int n;	// ġŲ ���� ����
int k;	// ������ ��

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (cin >> n >> k) {
		int result = 0;	// ġŲ ����
		int coupon = n;	// ����
		int stamp = 0;	// ����

		while (coupon) {
			result += coupon;	// ������ ��� ġŲ���� �ٲ�
			stamp += coupon;	// ����� ������ �� ��ŭ ������ ����
			coupon = 0;	// ������ ��� ����Ͽ����Ƿ� 0��
			coupon += stamp / k;	// ���� ������ �������� ����
			stamp %= k;	// ���� ������ ��
		}

		cout << result << "\n";
	}
}