// 괄호

#include<iostream>
#include<stack>
using namespace std;

int T;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		stack<char> c;
		string str;
		string answer = "YES";

		cin >> str;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				c.push(str[i]);
			}

			else {
				if (c.empty()) {
					c.push(str[i]);
					answer = "NO";
					break;
				}

				else {
					c.pop();
				}
			}
		}

		if (!c.empty()) {
			answer = "NO";
		}

		else {
			answer = "YES";
		}

		cout << answer << "\n";
		
	}
}
