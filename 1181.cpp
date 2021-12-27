// 단어 정렬

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int N;
vector<string> alpha;
string word;

bool compare(string a, string b) {
	int i = 0;
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i]) {
				return a[i] < b[i];
			}
		}
	}

	return a.length() < b.length();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> word;
		alpha.push_back(word);
	}

	sort(alpha.begin(), alpha.end(), compare);

	cout << alpha[0] << "\n";

	for (int i = 1; i < N; i++) {
		if (alpha[i - 1] == alpha[i]) {
			continue;
		}

		cout << alpha[i] << "\n";
	}
}