// LCS3

#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

string s1;
string s2;
string s3;
string temp;
int LCS[101][101][101];
stack<char> s;

int find_max(int x, int y, int z) {
	if (x > y) {
		if (x > z) {
			return x;
		}

		else {
			return z;
		}
	}

	else {
		if (y > z) {
			return y;
		}

		else {
			return z;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s1 >> s2 >> s3;

	for (int i = 1; i <= s1.size(); i++) {
		for (int j = 1; j <= s2.size(); j++) {
			for (int k = 1; k <= s3.size(); k++) {
				if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) {
					LCS[i][j][k] = LCS[i - 1][j - 1][k - 1] + 1;
				}

				else if (s1[i - 1] == s2[j - 1] && s2[j - 1] != s3[k - 1]) {
					LCS[i][j][k] = max(LCS[i][j][k - 1], LCS[i - 1][j - 1][k]);
				}


				else if (s1[i - 1] == s3[k - 1] && s2[j - 1] != s3[k - 1]) {
					LCS[i][j][k] = max(LCS[i][j - 1][k], LCS[i - 1][j][k - 1]);
				}

				else if (s2[j - 1] == s3[k - 1] && s1[i - 1] != s2[j - 1]) {
					LCS[i][j][k] = max(LCS[i - 1][j][k], LCS[i][j - 1][k - 1]);
				}

				else {
					LCS[i][j][k] = find_max(LCS[i - 1][j - 1][k], LCS[i - 1][j][k - 1], LCS[i][j - 1][k - 1]);
				}
			}
		}
	}

	cout << LCS[s1.size()][s2.size()][s3.size()] << "\n";
}