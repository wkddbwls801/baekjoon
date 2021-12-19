// 음계

#include<iostream>
using namespace std;

int main() {
	int note[8];
	int ascending = 0;
	int descending = 0;

	// 숫자 입력
	for (int i = 0; i < 8; i++) {
		cin >> note[i];
	}

	for (int j = 0; j < 7; j++) {
		if (note[j] < note[j + 1]) {
			ascending++;
		}

		else if (note[j] > note[j + 1]) {
			descending++;
		}
	}

	if (ascending == 7) {
		cout << "ascending" << endl;
	}

	else if (descending == 7) {
		cout << "descending" << endl;
	}

	else {
		cout << "mixed" << endl;
	}
}