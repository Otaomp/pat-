#include<iostream>
using namespace std;
bool isprime(int n)
{//判断一个数是否为素数
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int main(void)
{//写的贼鸡儿凌乱
//不过又有要点，输出第几个至第几个素数，每找到一个素数，素数指示器加一
	int m, n;
	cin >> m >> n;
	int num = 0;//指示一行输出了多少个数
	int start = 2;//从第一个素数开始
	int j = 0;//素数指示器
	while (j < n )
	{
		while (isprime(start))
		{
			j++;
			if (j < m)
				break;
			num++;
			if (num == 1)
				cout << start;
			else if (num < 10)
				cout << ' ' << start;
			else
			{
				num = 0;
				cout << ' ' << start << endl;
			}
			break;
		}
		start++;
	}

	return 0;
}