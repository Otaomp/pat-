#include<iostream>
using namespace std;
int main(void)
{//好像值需要注意输出格式问题，但是，这不是经常遇到的问题吗？
	int a, b,flag=0;//flag控制格式输出
	while (cin >> a >> b)
	{
		if (b != 0) {
			if (flag == 1)cout << ' ';
			cout << a*b << " " << b - 1;
			flag = 1;
		}
		if (flag == 0)
			cout << "0 0";
	}
	return 0;
}