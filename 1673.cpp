// 치킨 쿠폰

#include<iostream>
using namespace std;

int n;	// 치킨 쿠폰 갯수
int k;	// 도장의 수

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (cin >> n >> k) {
		int result = 0;	// 치킨 개수
		int coupon = n;	// 쿠폰
		int stamp = 0;	// 도장

		while (coupon) {
			result += coupon;	// 쿠폰을 모두 치킨으로 바꿈
			stamp += coupon;	// 사용한 쿠폰의 수 만큼 도장이 생김
			coupon = 0;	// 쿠폰을 모두 사용하였으므로 0개
			coupon += stamp / k;	// 모은 도장을 쿠폰으로 변경
			stamp %= k;	// 남은 도장의 수
		}

		cout << result << "\n";
	}
}