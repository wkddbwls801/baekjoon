// º£½ºÆ®¼¿·¯

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int n;
string book;
map<string, int> best_seller;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}

	return a.second > b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> book;

		if (best_seller.find(book) == best_seller.end()) {
			best_seller.insert({ book, 1 });
		}

		else {
			best_seller[book]++;
		}
	}

	vector<pair<string, int>> v(best_seller.begin(), best_seller.end());
	sort(v.begin(), v.end(), cmp);

	cout << v.front().first << "\n";

}