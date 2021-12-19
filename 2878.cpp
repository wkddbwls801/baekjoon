// ĵ��ĵ��

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

long long M;	// ������ ��
int N;	// ģ���� ��
vector <long long> candy;	// ģ������ �ް�;��ϴ� ������ ��
int c;
long long sum;
long long temp;
long long result;
long long answer;
long long mod = pow(2, 64);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		cin >> c;
		candy.push_back(c);
		sum += c;
	}

	sort(candy.begin(), candy.end());

	temp = sum - M;	// ģ������ �� �޴� ������ ��

	for (int i = 0; i < N; i++) {
		result = min(candy[i], temp / (N - i));
		answer += (result * result);
		temp -= result;
	}

	cout << answer << "\n";
}