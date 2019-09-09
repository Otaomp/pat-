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
	//这三句达到了循环结果
	//首先从头到尾反转过来，再次从头到头+m反转，头+m到尾反转
	// reverse函数用于反转在[first,last)范围内的顺序（包括first指向的元素，
	//last指向的元素），reverse函数没有返回值
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