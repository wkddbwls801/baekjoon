// OX ����

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
				
				//'X'�� �� point�� 0���� �ʱ�ȭ�ϴ� ���� ����Ʈ!!
				point = 0;
				sum += point;
			}
		}

		cout << sum << endl;
		
	}

	return 0;
}