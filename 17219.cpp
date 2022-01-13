// 비밀번호 찾기

#include<iostream>
#include<unordered_map>
using namespace std;

int N;
int M;
string addr;
string pw;
string find_addr;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_map<string, string> notepad;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> addr >> pw;

		// 해시 테이블에 삽입
		notepad.insert(make_pair(addr, pw));
	}

	for (int i = 0; i < M; i++) {
		cin >> find_addr;

		cout << notepad[find_addr] << "\n";
	}
	
}