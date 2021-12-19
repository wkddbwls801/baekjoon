// 문자열 분석

#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;

	while (getline(cin, str)) {

		int big = 0;
		int small = 0;
		int num = 0;
		int blank = 0;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				big++;
			}

			else if (str[i] >= 'a' && str[i] <= 'z') {
				small++;
			}

			else if (str[i] >= '0' && str[i] <= '9') {
				num++;
			}

			else if (str[i] == ' ') {
				blank++;
			}
		}

		cout << small << " " << big << " " << num << " " << blank << "\n";
	}
}
	