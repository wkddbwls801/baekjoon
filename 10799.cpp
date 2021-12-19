// 쇠막대기

#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<char> stick;	// 괄호를 stack에 저장
string bracket;	// 괄호 입력
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
			// 레이저인 경우
			if (bracket[i - 1] == '(') {
				stick.pop();
				sum += stick.size();
			}
			
			// 막대기인 경우
			else {
				sum++;
				stick.pop();
			}
		}
	}

	cout << sum << "\n";

}