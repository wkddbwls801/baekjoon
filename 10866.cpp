// µ¦

#include<iostream>
#include<string>
#include<deque>
using namespace std;

string command;
int X;
deque<int> dq;
int N;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push_front") {
			cin >> X;
			dq.push_front(X);
		}

		else if (command == "push_back") {
			cin >> X;
			dq.push_back(X);
		}

		else if (command == "pop_front") {
			if (dq.size() == 0) {
				cout << "-1" << "\n";
			}

			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}

		else if (command == "pop_back") {
			if (dq.size() == 0) {
				cout << "-1" << "\n";
			}

			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}

		else if (command == "size") {
			cout << dq.size() << "\n";
		}

		else if (command == "empty") {
			if (dq.empty()) {
				cout << "1" << "\n";
			}

			else {
				cout << "0" << "\n";
			}
		}

		else if (command == "front") {
			if(dq.size() == 0) {
				cout << "-1" << "\n";
			}

			else {
				cout << dq.front() << "\n";
			}
		}

		else if (command == "back") {
			if (dq.size() == 0) {
				cout << "-1" << "\n";
			}

			else {
				cout << dq.back() << "\n";
			}
		}
	}
}