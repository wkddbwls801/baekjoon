// Hello World!

#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

int result;
string word = "helowrd";
int nums[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int check;
unordered_map<char, int> m;

int main() { 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> result;

	do {
		for (int i = 0; i < word.size(); i++) {
			m[word[i]] = nums[i];	// map의 value 값 설정
		}

		// 숫자의 시작이 0이 아니도록 설정
		if (m['h'] == 0 || m['w'] == 0) {
			continue;
		}

		int hello = m['h'] * 10000 + m['e'] * 1000 + m['l'] * 100 + m['l'] * 10 + m['o'];
		int world = m['w'] * 10000 + m['o'] * 1000 + m['r'] * 100 + m['l'] * 10 + m['d'];

		if(hello + world == result){
			cout << "  " << hello << "\n";
			cout << "+ " << world << "\n";
			cout << "-------" << "\n";
			
			for (int i = 0; i < 7 - to_string(result).size(); i++) {
				cout << " ";
			}

			cout << result << "\n";

			check = 1;
			
			break;
		}
	}

	// 초반에는 1 2 3 4 5 6 7 8 9였지만
	// 두번째 호출에서는 1 2 3 4 5 6 7 9 8이 됨.
	while (next_permutation(nums, nums + 10));

	if (!check) {
		cout << "No Answer" << "\n";
	}
}