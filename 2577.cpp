// ������ ����
// ������ ����Ʈ : ���ڸ� �迭�� �μ��� �־ Ǯ��!

#include<iostream>
#include<string>
using namespace std;

int main() {
	int A;
	int B;
	int C;
	int result;
	int arr[10] = { 0, };	//0~9���� �� �迭

	cin >> A >> B >> C;

	result = A * B * C;

	while (result != 0) {
		arr[result % 10] ++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;

}