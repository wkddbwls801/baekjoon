// �����̴� �ö󰡰� �ʹ�

#include<iostream>
using namespace std;

int V;
int A;
int B;
int result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Ϸ� ���� �ö󰡴� ���� = A - B;

	cin >> A >> B >> V;

	if (A>=V) {
		cout << 1 << "\n";
	}

	else {
		if ((V - B) % (A - B) == 0) {
			cout << (V - B) / (A - B) << "\n";
		}

		else {
			cout << (V - B) / (A - B) + 1 << "\n";
		}
	}
}