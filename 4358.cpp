// ปýลยวะ

#include<iostream>
#include<string>
#include<map>
#include<cmath>
using namespace std;

map<string, float> tree;
string name;
int cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (getline(cin, name)) {
		cnt++;
		if (tree.find(name) == tree.end()) {
			tree.insert({ name, 1 });
		}

		else {
			tree[name]++;
		}
	}

//vector<pair<string, int>> v(tree.begin(), tree.end());
//sort(v.begin(), v.end(), cmp);
	map<string, float>::iterator iter;

	cout << fixed;
	cout.precision(4);
	for (iter = tree.begin(); iter != tree.end(); iter++) {
		float val = (iter->second / cnt) * 100;

		cout << iter->first << " " << val << "\n";
	}
}