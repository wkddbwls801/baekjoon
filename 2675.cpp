// 문자열 반복

#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;	//테스트 케이스
	int R;	// 반복 횟수
	string s;	// 문자열

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> R >> s;

		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << s[j];
			}
		}

		cout << endl;
	}

	
}