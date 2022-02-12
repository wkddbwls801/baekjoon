// 나는야 포켓몬 마스터 이다솜

#include<iostream>
#include<string>
#include<map>
using namespace std;

int N;	// 포켓몬의 개수
int M;	// 맞춰야 하는 문제의 개수
string name;
string f;
map<string, int> poketmon;
string n[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> name;
		n[i + 1] = name;
		poketmon.insert({ name, i + 1 });
	}

	for (int i = 0; i < M; i++) {
		cin >> f;
		
		// 숫자가 입력되엇을 경우
		if (f[0] >= '0' && f[0] <= '9') {
			cout << n[stoi(f)] << "\n";
		}

		else {
			auto iter = poketmon.find(f);
			cout << iter->second << "\n";
		}
	}
}