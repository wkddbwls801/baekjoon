// �ܾ��� ����
// �� ������ ����Ʈ "getline" ���!
// std::getline(string)
// getline(istream& is, string& str);
// getline(istream& is, string& str, char delim);
// is : �Է½�Ʈ�� ������Ʈ ex) cin
// str : �Է¹��� ���ڿ��� ������ string ��ü
// delim : �����ڷ� �� ���ڿ� ���� �� ������ �ߴܵ�. �� �� �� ���ڴ� str�� ��ϵ��� ������ ��Ʈ������ ������� ��.

#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;

	getline(cin, str);

	int count = 0;

	if (str.empty()) {
		cout << 0 << endl;
		return 0;
	}

	else {
		count = 1;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				count++;
			}
		}

		if (str[0] == ' ') {
			count--;
		}

		if (str[str.length() - 1] == ' ') {
			count--;
		}

		cout << count << endl;

		return 0;
	}
}