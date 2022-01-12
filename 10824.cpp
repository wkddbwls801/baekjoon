// 네 수

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	string arr[4];
	unsigned long long output1;
	unsigned long long output2;

	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	output1 = stoi(arr[0]) * pow(10, arr[1].size()) + stoi(arr[1]);
	output2 = stoi(arr[2]) * pow(10, arr[3].size()) + stoi(arr[3]);

	cout << output1 + output2 << "\n";
}
