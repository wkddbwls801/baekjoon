// ���б���2

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int CCW(pair<long, long> p1, pair<long, long> p2, pair<long, long>p3) {
	// �ﰢ�� ���� ���ϱ� �� ���� ���� Ȱ��
	long long temp = (p2.first - p1.first) * (p3.second - p1.second) - (p2.second - p1.second) * (p3.first - p1.first);

	if (temp > 0) {
		return 1;	// �ݽð�
	}

	else if (temp == 0) {
		return 0;	// ������
	}

	else if (temp < 0) {
		return -1;	// �ð����
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

	// ���������� ��
	if(abc * abd == 0 && cda * cdb == 0) {
		if (A > B) {
			swap(A, B);
		}

		if (C > D) {
			swap(C, D);
		}

		// �߰��� �������� ���
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