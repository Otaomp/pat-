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
{//大致思路，在给定的数从2-n判断其中的素数，记p1为第一个素数，p2为第二个素数
//在找到第一个p2后，判断素数对
//在第二遍找p1，p2，p1变为原来的p2，p2为写一个素数
	int n,count=0;
	int p1, p2;
	cin >> n;
	int i = 2,flag = 1;
	while (i <=n)
	{
		if (flag == 1 && isprime(i))
		{
			p1 = i;
			flag = 2;
			i++;
			continue;
		}
		else if (flag == 0)
		{
			p1 = p2;
			flag = 2;
		}
		if (isprime(i) && flag == 2)
		{
			p2 = i;
			flag = 0;
		}
		i++;
		if (flag == 0 && p2 - p1 == 2)
			count ++ ;
	}
	cout << count << endl;
	return 0;
}

