#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a, char b) {
	return a > b;
}
int main(void)
{
	string s;
	cin >> s;
	s.insert(0, 4 - s.length(), '0');//考虑到输入的数没有4位数，补0
	do
	{
		string a = s, b = s;
		sort(a.begin(), a.end(), cmp);
		sort(b.begin(), b.end());
		int result = stoi(a) - stoi(b);//字符串转数字函数
		s = to_string(result);//因为结果可能只有三位数，需要在前面插入0；数字转字符串函数
		s.insert(0, 4 - s.length(), '0');
		cout << a << " - " << b << " = " << s << endl;
	} while (s != "6174"&&s != "0000");
	return 0;
}