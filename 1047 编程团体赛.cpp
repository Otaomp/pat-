#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
//统计完事
using namespace std;
int main(void) {
	int n;
	cin >> n;
	map<int, int>m;
	string team;
	int score;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> team >> score;
		for (int j = 0; j < team.length(); j++) {
			if (team[j] == '-') {
				a = stoi(team.substr(0, j));
				break;
			}			
		}
		if (m.find(a) == m.end())
			m.insert(make_pair(a, score));
		else
			m[a] += score;
	}
	int max = 0,champion;
	for (auto i : m) {
		if (i.second > max) {
			max = i.second;
			champion = i.first;
		}
	}
	cout << champion << ' ' << max << endl;
	return 0;
}