// 좌표 정렬하기

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct point {
	int x;
	int y;
};

bool operator<(point a, point b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}

	return a.x < b.x;
}

int N;
int x;
int y;
vector<point> p;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		p.push_back({ x, y });
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++) {
		cout << p[i].x << " " << p[i].y << "\n";
	}
}