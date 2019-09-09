#include<iostream>
#include<stack>
using namespace std;

/*
进制转换问题，只不过那个pat上不给测试点，我都不知道哪里出错了，这次是在0处出错，
当和为0的时候直接返回0；
int是4个字节32bit，数值范围2^31-1
 */
int main(void) {
	int A, B, D,temp;
	cin >> A >> B>>D;
	temp= A + B;
	if (temp == 0) {
		cout << 0;
		return 0;
	}
	stack<int> s;
	while (temp)
	{
		s.push(temp%D);
		temp = temp / D;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}