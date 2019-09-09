#include<iostream>
#include<map>
#include<string>
using namespace std;

/*
用map统计即可，都不用排序的，方便的一笔。
 */
int main(void) {
	string num;
	cin >> num;//输入的不超过1000位的整数
	map<char, int> count_num;
	for (int i = 0; i < num.length(); i++) {
		count_num[num[i]]++;
	}
	for (map<char, int>::iterator it = count_num.begin(); it != count_num.end(); it++) {
		printf("%c:%d\n", it->first, it->second);
	}
	return 0;
}