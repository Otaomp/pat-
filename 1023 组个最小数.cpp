#include<iostream>
#include<map>
using namespace std;
/*
在组成最小的数时，要判断输入的数的不为0且他的 个数也不为0；
在输入的所有的数全为0的情况下，应该输出0
 */
int main(void) {
	map<int, int>m;
	int input;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		m[i] = input;
	}
	int flag = 0;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		if (it->first != 0 && it->second !=0 && flag == 0) {
			flag = 1;
			cout << it->first;
			it->second--;
			break;
		}
		flag = 0;
	}
	if (flag == 0) {
		cout << 0;
		return 0;
	}

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		for (int i = 0; i<it->second; i++) {
			cout << it->first;
		}
	}
	return 0;
}