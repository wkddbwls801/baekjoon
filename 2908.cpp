// 상수

#include<iostream>
#include<string>
using namespace std;

int main() {
	string A;
	string B;
	char temp;

	cin >> A >> B;

	//수 바꾸기
	temp = A[0];
	A[0] = A[2];
	A[2] = temp;

	temp = B[0];
	B[0] = B[2];
	B[2] = temp;

	if (A > B) {
		cout << A << endl;
	}

	else {
		cout << B << endl;
	}

	return 0;
}