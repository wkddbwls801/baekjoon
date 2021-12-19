// 단어 공부
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str; // 입력할 문자열
	cin >> str;

	int num[26] = { 0, };	// 알파벳 count할 배열
	int max = 0;
	int cnt = 0;
	int output;

	// str에 입력한 문자들 중 소문자는 다 대문자로 변경!
	// transfom(InputIt first1,	InputIt last1, OutputIt d_first, UnaryOperation unary_op)
	// [first1, last1) 범위의 각 요소마다 함수를 호출하고 그 결과를 d_first 위치에 추가한다.
	// unary_op은 단항 연산 함수이다.
	// toupper옵션을 사용하여 소문자를 대문자로 변경함
	// tolower옵션은 대문자를 소문자로 변경하게 함.
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))toupper);

	// num배열에 알파벳 별 개수를 저장
	for (int i = 0; i < str.length(); i++) {
		
		num[str[i] - 'A']++;
	}

	// num 배열에서 최대값 추출
	for (int i = 0; i < 26; i++) {
		if (max < num[i]) {
			max = num[i];
			cnt = 0;
			output = i;
		}

		// 최대값이 2개 이상인 경우
		if (max == num[i]) {
			cnt++;
		}
	}

	if (cnt > 1) {
		cout << "?" << endl;
	}

	else {
		cout << (char)(output + 'A') << endl;
	}

	return 0;
}