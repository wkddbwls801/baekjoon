// 덩치

#include<iostream>
using namespace std;

struct person {
	int weight = 0;
	int height = 0;
	int rank = 1;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	person p[50];
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p[i].weight >> p[i].height;
	}

	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			if (p[j].weight > p[k].weight && p[j].height > p[k].height) {
				p[k].rank++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << p[i].rank << " ";
	}

}
