#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//��һ���˼·Ϊ��������ÿһ�������n������3n+1�Ĳ�����̣�ģ��ÿ�������ı仯���n��������arr
//���¼�仯���n����Щû�б仯��n����������ʼ�ձ���0��
//������������֣���vector��ã���������ã�������arr�в�ѯ��arr[n]�ǲ���0����0��Ϊ�����ҵ�������
//

bool cmp(int a, int b)
{
	return (a > b);
}//�˺�������vector��������
int main(void)
{
	int k,n,flag=0;
	int arr[10000] = { 0 };
	vector<int> vec;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		vec.push_back(n);//��ÿһ�������n���浽vec��
		while (n != 1)
		{
			if (n % 2 != 0)
				n = n * 3 + 1;
			n = n / 2;
			if (arr[n] == 1)
				break;
			else
				arr[n] = 1;
		}
	}
	sort(vec.begin(), vec.end(),cmp);
	for (int i : vec)//���ѭ��������������
	{
		if (arr[i] == 0 && flag == 0) {
			cout << i;
			flag = 1;
		}
		else if (arr[i] == 0)
			cout << ' ' << i;
	}
	return 0;
}