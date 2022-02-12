// ´ëÄª Â÷ÁıÇÕ

#include<iostream>
#include<map>
using namespace std;

int num_A;
int num_B;
int num;
map<int, int> A;
map<int, int> B;
int count_A;
int count_B;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> num_A >> num_B;

	for (int i = 0; i < num_A; i++) {
		cin >> num;
		A.insert({num, i });
	}

	for (int i = 0; i < num_B; i++) {
		cin >> num;
		B.insert({ num, i });
	}

	//A-B
	map<int, int>::iterator iter;
	for (iter = A.begin(); iter != A.end(); iter++) {
		if (B.find(iter->first) == B.end()) {
			count_A++;
		}
	}

	//B-A
	for (iter = B.begin(); iter != B.end(); iter++) {
		if (A.find(iter->first) == A.end()) {
			count_B++;
		}
	}

	cout << count_A + count_B << "\n";
}