// �Ǻ���ġ �Լ�

#include<iostream>
using namespace std;

int fibo_zero[50];
int fibo_one[50];

//fibo(n) = fibo(n-1) + fibo(n-2)
// ��, fibo(n-1)������ 0�� ������ 1�� ���� + fibo(n-2)������ 0�� ������ 1�� ������ ���Ѱ���
// fibo(n)������ 0�� ������ 1�� ������.

//fibo(n) : 0�� ����	1�� ����
//fibo(0) :		1			0
//fibo(1) :		0			1
//fibo(2) :		1			1
//fibo(3) :		1			2
//fibo(4) :		2			3

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;	// �׽�Ʈ ���̽�
	int N;	// ����
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;

		fibo_zero[0] = 1;
		fibo_zero[1] = 0;
		fibo_one[0] = 0;
		fibo_one[1] = 1;

		for (int i = 2; i <= N; i++) {
			fibo_zero[i] = fibo_zero[i - 1] + fibo_zero[i - 2];
			fibo_one[i] = fibo_one[i - 1] + fibo_one[i - 2];
		}

		cout << fibo_zero[N] << " " << fibo_one[N] << "\n";
	}

	return 0;

}