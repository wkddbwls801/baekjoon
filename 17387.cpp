// 선분교차2

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int CCW(pair<long, long> p1, pair<long, long> p2, pair<long, long>p3) {
	// 삼각형 넓이 구하기 중 벡터 외적 활용
	long long temp = (p2.first - p1.first) * (p3.second - p1.second) - (p2.second - p1.second) * (p3.first - p1.first);

	if (temp > 0) {
		return 1;	// 반시계
	}

	else if (temp == 0) {
		return 0;	// 일직선
	}

	else if (temp < 0) {
		return -1;	// 시계방향
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	pair<int, int> A;
	pair<int, int> B;
	pair<int, int> C;
	pair<int, int> D;

	cin >> A.first >> A.second;
	cin >> B.first >> B.second;
	cin >> C.first >> C.second;
	cin >> D.first >> D.second;

	//ABC
	int abc = CCW(A, B, C);

	//ABD
	int abd = CCW(A, B, D);

	//CDA
	int cda = CCW(C, D, A);

	//CDB
	int cdb = CCW(C, D, B);

	// 일직선상일 때
	if(abc * abd == 0 && cda * cdb == 0) {
		if (A > B) {
			swap(A, B);
		}

		if (C > D) {
			swap(C, D);
		}

		// 중간에 겹쳐지는 경우
		if (A <= D && C <= B) {
			cout << 1 << "\n";
		}

		else {
			cout << 0 << "\n";
		}

		return 0;
	}

	if (abc * abd <= 0 && cda * cdb <= 0) {
		cout << 1 << "\n";
	}

	else {
		cout << 0 << "\n";
	}

	return 0;
}