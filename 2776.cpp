// 암기왕

#include<iostream>
#include<map>
using namespace std;

int T;	// 테스트 케이스
int N;	// 수첩 1에 적어놓은 정수의 개수
int M;	// 수첩 2에 적어놓은 정수의 개수
int num_1;	// 수첩 1에 적혀 있는 정수
int num_2;	// 수첩 2에 적혀 있는 정수

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		map<int, int> note;

		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> num_1;

			note.insert({ num_1, 1 });
		}
		

		cin >> M;

		for (int i = 0; i < M; i++) {
			cin >> num_2;

			// 없는 경우
			if (note.find(num_2) == note.end()) {
				cout << 0 << "\n";
			}

			else {
				cout << 1 << "\n";
			}
		}
	}
}