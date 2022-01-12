// 달팽이는 올라가고 싶다

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

	// 하루 동안 올라가는 높이 = A - B;

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