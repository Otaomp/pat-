#include<iostream>
#include<stack>//�������
#include<sstream>//����ת�ַ���
using namespace std;
int main(void)
{
//���ǵ� ֻ����λ������˲���дѭ��
//�Ը���λ�ϲ�������
//���Կ϶����и�λ����һ����ʮλ�Ͱ�λ
	int n;
	cin >> n;
	stack<string> sta;
	for (int i = n % 10; i > 0; i--)
	{//��ȡ��λ�ϵ����֣����浽sta��
		stringstream ss;
		string  s;
		ss << i;
		s = ss.str();//���������ת�ַ������÷�
		sta.push(s);
	}
	n = n / 10;
	if (n != 0)
	{//��ȡʮλ�ϵ�����
		for (int i = n % 10; i > 0; i--)
			sta.push("S");
	}
	n = n / 10;
	if (n != 0)
	{//��ȡ��λ�ϵ�����
		for (int i = n % 10; i > 0; i--)
			sta.push("B");
	}
	while (!sta.empty())
	{//��ջ�����ݽ������
		cout << sta.top();
		sta.pop();
	}
	return 0;
}