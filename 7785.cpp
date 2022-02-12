// 회사에 있는 사람

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int n;
map<string, string> company;
string name;
string status;

bool cmp(const pair<string, string>& a, const pair<string, string>& b) {
	return a.first > b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name >> status;

		if (status == "enter") {
			company.insert({ name, status });
		}

		else if (status == "leave") {
			company.erase(name);
		}
	}

	vector<pair<string, string>> v(company.begin(), company.end());

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << "\n";
	}
}