// OX 퀴즈

#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;
	string str = "";

	cin >> T;

	for (int i = 0; i < T; i++) {
		int point = 0;
		int sum = 0;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				point++;
				sum += point;
			}

			else if (str[j] == 'X') {
				
				//'X'일 때 point를 0으로 초기화하는 것이 포인트!!
				point = 0;
				sum += point;
			}
		}

		cout << sum << endl;
		
	}

	return 0;
}