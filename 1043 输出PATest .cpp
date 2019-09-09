#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
//删除map里面一个元素用erase
//统计输出即可
int main(void) {
	map<char, int>m = { {'P',0},{ 'A',0} ,{'T',0} ,{'e',0},{'s',0},{'t',0 } };
	string s;
	cin >> s;
	for(auto i:s){
		if (m.find(i) != m.end()) {
			m[i]++;
		}
	}
	while (m.size())
	{
		if (m['P']) {
			cout << 'P';
			m['P']--;
		}
		else{
			m.erase('P');
		}
		if (m['A']) {
			cout << 'A';
			m['A']--;
		}
		else {
			m.erase('A');
		}
		if (m['T']) {
			cout << 'T';
			m['T']--;
		}
		else {
			m.erase('T');
		}
		if (m['e']) {
			cout << 'e';
			m['e']--;
		}
		else {
			m.erase('e');
		}
		if (m['s']) {
			cout << 's';
			m['s']--;
		}
		else {
			m.erase('s');
		}
		if (m['t']) {
			cout << 't';
			m['t']--;
		}
		else {
			m.erase('t');
		}
	}
	//for (auto i : m) {
	//	cout << i.first << ' ' << i.second << endl;
	//}
	return 0;
}