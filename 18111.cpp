// ����ũ����Ʈ

#include<iostream>
#include<limits.h>
using namespace std;

int N;	// ������ ����
int M;	// ������ ����
int B;	// �κ��丮�� ����ִ� ����� ����
int land[501][501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M >> B;

	int min = INT_MAX;
	int max = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> land[i][j];

			if (land[i][j] < min) {
				min = land[i][j];
			}

			if (land[i][j] > max) {
				max = land[i][j];
			}
		}
	}

	int time = INT_MAX;
	int height = 0;
	bool check = false;

	for (int i = min; i <= max; i++) {
		int sum_build = 0;	// �״µ� �ʿ��� ����� ��
		int sum_remove = 0;	// �����ϴµ� �ʿ��� ����� ��

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				int temp = i - land[j][k];	// ���ϴ� ���̿� �ش� ��ġ�� ���� ��

				if (temp < 0) {	// �ش� ��ġ�� ���̰� �� ���� ��� -> ����
					sum_remove += temp * -1;
				}

				else {
					sum_build += temp;
				}
			}
		}

		// ������ ��ϰ� ������ ������� �ϼ��� �� �ִ� ���
		if (sum_build <= sum_remove + B) {
			int temp = sum_build + sum_remove * 2;
			
			if (time > temp) {
				time = temp;
				height = i;
			}

			// ������ �ð��̸� ���̰� �� ���� ���� ���
			if (temp == time) {
				if (height < i) {
					height = i;
				}
			}
		}
	}

	cout << time << " " << height << "\n";
}