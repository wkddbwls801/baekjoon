// �踷���

#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<char> stick;	// ��ȣ�� stack�� ����
string bracket;	// ��ȣ �Է�
int f;
int sum;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> bracket;
	
	for (int i = 0; i < bracket.size(); i++) {
		
		if (bracket[i] == '(') {
			stick.push(bracket[i]);
		}

		else if (bracket[i] == ')') {
			// �������� ���
			if (bracket[i - 1] == '(') {
				stick.pop();
				sum += stick.size();
			}
			
			// ������� ���
			else {
				sum++;
				stick.pop();
			}
		}
	}

	cout << sum << "\n";

}