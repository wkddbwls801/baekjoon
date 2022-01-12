// 팰린드롬수

#include<iostream>
#include<string>
using namespace std;

string num;
bool check;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {

		cin >> num;

		if (stoi(num) == 0) {
			return 0;
		}

		check = false;
		for (int i = 0; i < num.size() / 2; i++) {
			if (num[i] != num[num.size() - 1 - i]) {
				cout << "no" << "\n";
				check = true;
				break;
			}
		}

		if (check == false) {
			cout << "yes" << "\n";
		}
	}
}
