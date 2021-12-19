// 알파벳 찾기
// fill_n(초기화하려는 배열 이름, 배열의 자리수, 초기화 하려는 값)
// memset(채우고자 하는 메모리의 시작 주소, 채우고자 하는 값, 채우고자 하는 메모리의 크기)
// 처음 등장하는 위치를 확인해야 하므로
// 이미 접근을 했는지 확인해주는 변수가 필요함

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int alpha[26];
	memset(alpha, -1, sizeof(alpha));
	//fill_n(alpha, 26, -1);	//배열 모두 -1로 초기화
	string S = "";
	bool check[26] = { false };

	cin >> S;


	for (int i = 0; i < S.length(); i++) {
		if (check[S[i] - 'a'] == false) {
			alpha[S[i] - 'a'] = i;
			check[S[i] - 'a'] = true;
		}
	}

	for (int j = 0; j < 26; j++) {
		cout << alpha[j] << " ";
	}
}