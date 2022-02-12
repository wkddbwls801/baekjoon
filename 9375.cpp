// ÆÐ¼Ç¿Õ ½ÅÇØºó

#include<iostream>
#include<map>
using namespace std;

int T;
int n;
string catage;
string name;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		map<string, int> clothes;
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> name >> catage;

			if (clothes.find(catage) == clothes.end()) {
				clothes.insert({ catage, 1 });
			}

			else {
				clothes[catage]++;
			}
		}

		int answer = 1;
		map<string, int>::iterator iter;

		for (iter = clothes.begin(); iter != clothes.end(); iter++) {
			answer *= (iter->second + 1);
		}

		answer--;

		cout << answer << "\n";
	}
}