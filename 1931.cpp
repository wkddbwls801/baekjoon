// ȸ�ǽ� ����

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct meeting_time {
	int start_time;
	int end_time;
};

int N;	// ȸ���� ��
vector<meeting_time> t;
int s;
int e;
int output;

bool operator<(meeting_time a, meeting_time b) {
	if (a.end_time == b.end_time) {
		return a.start_time < b.start_time;
	}

	return a.end_time < b.end_time;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s >> e;
		t.push_back({ s, e });
	}

	sort(t.begin(), t.end());

	output = 1;	// �� ó�� ������ ȸ�Ǵ� ������ ����
	int k = 0;

	for (int i = 1; i < N; i++) {
		if (t[k].end_time <= t[i].start_time) {
			output++;
			k = i;
		}
	}

	cout << output << "\n";
}