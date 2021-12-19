// 사각형에서 탈출

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;
	int width = 0;
	int height = 0;
	int shortest = 0;

	cin >> x >> y >> w >> h;

	width = (w - x) < x ? (w - x) : x;
	height = (h - y) < y ? (h - y) : y;

	shortest = width < height ? width : height;

	cout << shortest << "\n";

	return 0;
}