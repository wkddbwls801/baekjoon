// ���ڿ� �ݺ�

#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;	//�׽�Ʈ ���̽�
	int R;	// �ݺ� Ƚ��
	string s;	// ���ڿ�

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