#include<iostream>
using namespace std;
bool isprime(int n)
{//�ж�һ�����Ƿ�Ϊ����
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int main(void)
{//����˼·���ڸ���������2-n�ж����е���������p1Ϊ��һ��������p2Ϊ�ڶ�������
//���ҵ���һ��p2���ж�������
//�ڵڶ�����p1��p2��p1��Ϊԭ����p2��p2Ϊдһ������
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

