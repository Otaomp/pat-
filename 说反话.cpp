#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void)
{//��ÿ�ζ���ĵ��ʱ��浽ջ�У��ڳ�ջ����
	string s;
	stack<string> sta;
	while (cin >>s) {//������Ҫctrl+z����ѭ��
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