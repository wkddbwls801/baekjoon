// Ä«µå

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

long long N;
map<long long, long long> card;
long long num;

bool cmp(const pair<long long, long long>& a, const pair<long long, long long>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}

	return a.second > b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (card.find(num) == card.end()) {
			card.insert({ num, 1 });
		}

		else {
			card[num]++;
		}
	}

	vector<pair<long long, long long>> v(card.begin(), card.end());

	sort(v.begin(), v.end(), cmp);

	cout << v.front().first << "\n";
	
}