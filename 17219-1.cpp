// ��й�ȣ ã��

#include<iostream>
#include<map>
using namespace std;

int N;	// ����� ����Ʈ �ּ��� ��
int M;	// ��й�ȣ�� ã������ ����Ʈ �ּ��� ��
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