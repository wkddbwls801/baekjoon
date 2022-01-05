// 나이순 정렬

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct info {
	int number;
	int age;
	string name;
};

bool operator<(info a, info b) {
	if (a.age == b.age) {
		return a.number < b.number;
	}
	
	return a.age < b.age;
}

int N;
int people_age;
string people_name;
vector<info> people;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> people_age >> people_name;
		people.push_back({ i, people_age, people_name });
	}

	sort(people.begin(), people.end());

	for (int i = 0; i < N; i++) {
		cout << people[i].age << " " << people[i].name << "\n";
	}
}