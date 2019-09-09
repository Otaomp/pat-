#include<iostream>
#include<map>
using namespace std;
//主要是怎么找到map中最大的value值不熟，有什么好办法吗?
int main(void) {
	int n;
	map<int, int>m;
	int num, grade;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num >> grade;
		if (m.find(num)!=m.end()) {
			m.find(num)->second += grade;
		}
		else {
			m.insert(make_pair(num, grade));
		}
		
	}
	int ret_num = m.begin()->first;
	int ret_grade = m.begin()->second;
	for (auto i : m) {
		if (i.second > ret_grade) {
			ret_grade = i.second;
			ret_num = i.first;
		}
	}
	cout << ret_num << ' ' << ret_grade << endl;
	return 0;
}