// LCS

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string arr1;
string arr2;
int LCS[1001][1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> arr1 >> arr2;

	for (int i = 1; i <= arr1.size(); i++) {
		for (int j = 1; j <= arr2.size(); j++) {
			if (arr1[i - 1] == arr2[j - 1]) {
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			}

			else {
				LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
			}
		}
	}

	cout << LCS[arr1.size()][arr2.size()] << "\n";
}