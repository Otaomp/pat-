#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void)
{//将每次读入的单词保存到栈中，在出栈即可
	string s;
	stack<string> sta;
	while (cin >>s) {//这里需要ctrl+z结束循环
		sta.push(s);
	}
	cout << sta.top();
	sta.pop();
	while (!sta.empty())
	{
		cout << " "<<sta.top();
		sta.pop();
	}
	return 0;
}