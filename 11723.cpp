//// 집합
//
//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//
//int M;
//string command;
//int num;
//set<int> S;
//set<int>::iterator it;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> M;
//
//	for (int i = 0; i < M; i++) {
//		cin >> command;
//
//		if (command == "add") {
//			cin >> num;
//			S.insert(num);
//		}
//
//		else if (command == "remove") {
//			cin >> num;
//			S.erase(num);
//		}
//
//		else if (command == "check") {
//			cin >> num;
//
//			it = S.find(num);	// s.find()는 iterator를 반환
//
//			if (it == S.end()) {
//				cout << "0" << "\n";
//			}
//
//			else {
//				cout << "1" << "\n";
//			}
//		}
//
//		else if (command == "toggle") {
//			cin >> num;
//
//			it = S.find(num);
//
//			if (it == S.end()) {
//				S.insert(num);
//			}
//
//			else {
//				S.erase(num);
//			}
//		}
//
//		else if (command == "all") {
//			S.clear();
//
//			for (int i = 1; i <= 20; i++) {
//				S.insert(i);
//			}
//		}
//
//		else if (command == "empty") {
//			S.clear();
//		}
//	}
//}