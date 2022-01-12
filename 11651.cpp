// 좌표 정렬하기2

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct point {
	int x;
	int y;
};

bool operator<(point a, point b) {
	if (a.y == b.y) {
		return a.x < b.x;
	}

	return a.y < b.y;
}

int N;
vector<point> p;
int p_x;
int p_y;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p_x >> p_y;

		p.push_back({ p_x, p_y });
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++) {
		cout << p[i].x << " " << p[i].y << "\n";
	}
}
