#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	int n, m,flag=0;
	cin >> n >> m;
	m = m%n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//������ﵽ��ѭ�����
	//���ȴ�ͷ��β��ת�������ٴδ�ͷ��ͷ+m��ת��ͷ+m��β��ת
	// reverse�������ڷ�ת��[first,last)��Χ�ڵ�˳�򣨰���firstָ���Ԫ�أ�
	//lastָ���Ԫ�أ���reverse����û�з���ֵ
	reverse(a.begin(),a.end());
	reverse(a.begin(), a.begin()+m);
	reverse(a.begin() + m,a.end());
	for (int i : a)
	{
		if (flag == 0)
			cout << i, flag = 1;
		else
			cout << " " << i;

	}
	return 0;
}