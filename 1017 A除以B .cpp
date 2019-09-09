#include<iostream>
#include<string>
using namespace std;
int main(void)
{//主要是这个长数的第一位处理
 //当只有一位数的情况
//当是大于1位数的情况又分为首位数字是否大于被除数或小于被除数，大于被除数时，要输出余数，小于被除数时，留给后面
	string a;
	int b,t=0;
	cin >> a>>b;
	if ((a[0] - '0') / b != 0 && a.length() > 1 || a.length() == 1)
		cout << (a[0] - '0') / b;
	t = (a[0] - '0') % b;
	for (int i = 1; i < a.length(); i++) {
			t = t*10+(a[i] - '0');
			cout << t/b;
			t = t%b;
	}
	cout << ' ' << t%b;
	return 0;
}