// �ܾ� ����
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str; // �Է��� ���ڿ�
	cin >> str;

	int num[26] = { 0, };	// ���ĺ� count�� �迭
	int max = 0;
	int cnt = 0;
	int output;

	// str�� �Է��� ���ڵ� �� �ҹ��ڴ� �� �빮�ڷ� ����!
	// transfom(InputIt first1,	InputIt last1, OutputIt d_first, UnaryOperation unary_op)
	// [first1, last1) ������ �� ��Ҹ��� �Լ��� ȣ���ϰ� �� ����� d_first ��ġ�� �߰��Ѵ�.
	// unary_op�� ���� ���� �Լ��̴�.
	// toupper�ɼ��� ����Ͽ� �ҹ��ڸ� �빮�ڷ� ������
	// tolower�ɼ��� �빮�ڸ� �ҹ��ڷ� �����ϰ� ��.
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))toupper);

	// num�迭�� ���ĺ� �� ������ ����
	for (int i = 0; i < str.length(); i++) {
		
		num[str[i] - 'A']++;
	}

	// num �迭���� �ִ밪 ����
	for (int i = 0; i < 26; i++) {
		if (max < num[i]) {
			max = num[i];
			cnt = 0;
			output = i;
		}

		// �ִ밪�� 2�� �̻��� ���
		if (max == num[i]) {
			cnt++;
		}
	}

	if (cnt > 1) {
		cout << "?" << endl;
	}

	else {
		cout << (char)(output + 'A') << endl;
	}

	return 0;
}