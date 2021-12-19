// 단어의 개수
// 이 문제의 포인트 "getline" 사용!
// std::getline(string)
// getline(istream& is, string& str);
// getline(istream& is, string& str, char delim);
// is : 입력스트림 오브젝트 ex) cin
// str : 입력받은 문자열을 저장할 string 객체
// delim : 제한자로 이 문자에 도달 시 추출이 중단됨. 이 때 이 문자는 str에 기록되지 않지만 스트림에서 사라지게 됨.

#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;

	getline(cin, str);

	int count = 0;

	if (str.empty()) {
		cout << 0 << endl;
		return 0;
	}

	else {
		count = 1;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				count++;
			}
		}

		if (str[0] == ' ') {
			count--;
		}

		if (str[str.length() - 1] == ' ') {
			count--;
		}

		cout << count << endl;

		return 0;
	}
}