// 직각삼각형

#include<iostream>
#include<cmath>
using namespace std;

int diagonal;
int width;
int height;
int arr[3];

int* check_diagonal(int A, int B, int C) {
	// 가장 긴 변 확인
	if (A > B && A > C) {
			diagonal = A;
			width = B;
			height = C;
	}

	else if (B > A && B > C) {
			diagonal = B;
			width = A;
			height = C;
	}

	else if (C > A && C > B) {
			diagonal = C;
			width = A;
			height = B;
	}

	arr[0] = diagonal;
	arr[1] = width;
	arr[2] = height;
	
	return arr;
}

void result(int diagonal, int width, int height) {
	// 직각삼각형인지 판단
	if ((pow(diagonal, 2)) == (pow(height, 2) + pow(width, 2))) {
		cout << "right" << "\n";
	}

	else {
		cout << "wrong" << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A = 0;
	int B = 0;
	int C = 0;
	
	while (true) {
		cin >> A >> B >> C;

		// 종료조건
		if (A == 0 && B == 0 && C == 0) {
			break;
		}

		int *output = check_diagonal(A, B, C);

		result(output[0], output[1], output[2]);
		
	}
	
	return 0;
}