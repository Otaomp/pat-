#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//这一题的思路为这样：对每一个输入的n，按照3n+1的猜想过程，模拟每次遇到的变化后的n，在数组arr
//里记录变化后的n，那些没有变化的n，在数组中始终保持0。
//对于输入的数字，用vector存好，降序排序好，在数组arr中查询其arr[n]是不是0，是0即为我们找到的数字
//

bool cmp(int a, int b)
{
	return (a > b);
}//此函数用于vector降序排序
int main(void)
{
	int k,n,flag=0;
	int arr[10000] = { 0 };
	vector<int> vec;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		vec.push_back(n);//对每一个输入的n保存到vec中
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
	for (int i : vec)//这个循环是是输出结果的
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