// ������ ��ġ

#include<iostream>
#include<algorithm>
using namespace std;

int home[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// ���� ����
	int C;	// �������� ����

	cin >> N >> C;

	for (int i = 0; i < N; i++) {
		cin >> home[i];
	}

	sort(home, home + N);	// �Է� ���� ������ ���Ľ�Ŵ.

	int min = 1;
	int max = home[N - 1];
	int mid = 0;	// ������ ���� �Ÿ�
	int count = 0;	// �������� ���� Ȯ��
	int pos;	// ������ ��ġ index ������ ǥ��
	int answer = 0;

	while (min <= max) {
		mid = (min + max) / 2;

		pos = 0;	// arr[0]���� ù��°�� ��ġ
		count = 1;

		for (int i = 1; i < N; i++) {
			if (home[i] - home[pos] >= mid) {
				pos = i;	// pos ��ġ�� ��ġ�� ��, �� ��ġ���� �ٽ� �Ÿ� ���
				count++;
			}
		}

		if (count >= C) {
			answer = mid;
			min = mid + 1;	// ������ ���� ���̱�
		}

		else {
			max = mid - 1;	// ������ ���� �Ÿ� ���̱�
		}
		
	}

	cout << answer << "\n";
}