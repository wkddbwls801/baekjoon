// ���ĺ� ã��
// fill_n(�ʱ�ȭ�Ϸ��� �迭 �̸�, �迭�� �ڸ���, �ʱ�ȭ �Ϸ��� ��)
// memset(ä����� �ϴ� �޸��� ���� �ּ�, ä����� �ϴ� ��, ä����� �ϴ� �޸��� ũ��)
// ó�� �����ϴ� ��ġ�� Ȯ���ؾ� �ϹǷ�
// �̹� ������ �ߴ��� Ȯ�����ִ� ������ �ʿ���

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int alpha[26];
	memset(alpha, -1, sizeof(alpha));
	//fill_n(alpha, 26, -1);	//�迭 ��� -1�� �ʱ�ȭ
	string S = "";
	bool check[26] = { false };

	cin >> S;


	for (int i = 0; i < S.length(); i++) {
		if (check[S[i] - 'a'] == false) {
			alpha[S[i] - 'a'] = i;
			check[S[i] - 'a'] = true;
		}
	}

	for (int j = 0; j < 26; j++) {
		cout << alpha[j] << " ";
	}
}