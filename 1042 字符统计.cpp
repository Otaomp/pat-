#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
//主要是这里的getline(cin,s),可以检测输入的空格
//并且要判断isalpha(),检测是不是字母

int main(void) {
	string s;
	getline(cin,s);
	map<char, int>m;
	char t;
	for (int i = 0; i < s.length();i++) {
		t = tolower(s[i]);
		if (m.find(t)== m.end()) {
			m.insert(make_pair(t, 1));
		}
		else {
			m[t]++;
		}
	}
	int ret = 0;
	char ch;
	for (auto i : m) {
		if (isalpha(i.first)&&i.second > ret) {
			ret = i.second;
			ch = i.first;
		}
		//cout << i.first << ' ' << i.second << endl;
	}
	cout << ch << ' ' << ret << endl;
	return 0;
}