#include<iostream>
#include<stack>//逆序输出
#include<sstream>//数字转字符串
using namespace std;
int main(void)
{
//考虑到 只有三位数，因此不必写循环
//对各个位上操作即可
//可以肯定，有个位，不一定有十位和百位
	int n;
	cin >> n;
	stack<string> sta;
	for (int i = n % 10; i > 0; i--)
	{//提取个位上的数字，保存到sta中
		stringstream ss;
		string  s;
		ss << i;
		s = ss.str();//这个是数字转字符串的用法
		sta.push(s);
	}
	n = n / 10;
	if (n != 0)
	{//提取十位上的数字
		for (int i = n % 10; i > 0; i--)
			sta.push("S");
	}
	n = n / 10;
	if (n != 0)
	{//提取百位上的数字
		for (int i = n % 10; i > 0; i--)
			sta.push("B");
	}
	while (!sta.empty())
	{//对栈的内容进行输出
		cout << sta.top();
		sta.pop();
	}
	return 0;
}