#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{//思路，分类讨论
//注意A1其实是找能够被10整除的数，A2的结果可能是0，在初始化其值为0，结果不变，不能以A2的值没有做改变判断是否又这一类数字
//cout的格式化输出setiosflags(ios::fixed)<<setprecision(1)<<指保留一位小数
	int A1=0, A2=0, A3 = 0, A4=0, A5=0;
	int n, flag = 1, count_3 = 0, flag_1 = 0;
	cin >> n;
	int input_num;
	for (int i = 0; i < n; i++)
	{
		cin >> input_num;
		if (input_num % 10 == 0)
			A1 += input_num;
		else if (input_num % 5 == 1)
		{
			flag_1 = 1;
			if (flag == 1)
				A2 += input_num, flag = 0;
			else
				A2 -= input_num, flag = 1;
		}
		else if (input_num % 5 == 2)
			A3 += 1;
		else if (input_num % 5 == 3)
		{
			A4 += input_num;
			count_3++;
		}
		else if(input_num%5==4)
		{
			if (input_num > A5)
				A5 = input_num;
		}
	}
	if (A1 == 0)
		cout << 'N';
	else
		cout << A1;
	if (flag_1 == 0)
		cout << ' '<<'N';
	else
		cout << ' ' << A2;
	if (A3 == 0)
		cout << ' ' << 'N';
	else
		cout << ' ' << A3;
	if (A4 == 0)
		cout << ' ' << 'N';
	else
		cout<< ' ' << setiosflags(ios::fixed) << setprecision(1) << A4 / (1.0*count_3);
	if (A5 == 0)
		cout << ' ' << 'N';
	else
		cout << ' ' << A5;
	return 0;
}