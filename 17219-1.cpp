// 비밀번호 찾기

#include<iostream>
#include<map>
using namespace std;

int N;	// 저장된 사이트 주소의 수
int M;	// 비밀번호를 찾으려는 사이트 주소의 수
map<string, string> pass;
string site;
string pw;
string find_site;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> site >> pw;

		pass.insert({ site, pw });
	}

	for (int i = 0; i < M; i++) {
		cin >> find_site;

		cout << pass.find(find_site)->second << "\n";
	}
}