// ���¾� ���ϸ� ������ �̴ټ�

#include<iostream>
#include<string>
#include<map>
using namespace std;

int N;	// ���ϸ��� ����
int M;	// ����� �ϴ� ������ ����
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
		
		// ���ڰ� �ԷµǾ��� ���
		if (f[0] >= '0' && f[0] <= '9') {
			cout << n[stoi(f)] << "\n";
		}

		else {
			auto iter = poketmon.find(f);
			cout << iter->second << "\n";
		}
	}
}