#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(void)
{//C++的std模板不会用
	int N;
	int a[3] = { 0 };
	int b[3] = { 0 };
	int c[3] = { 0 };//记录手势出现的次数0b。1c，2J
	int d[3] = { 0 };
	char A, B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		if (A == B)
			a[1]++,b[1]++;

		if (A == 'B'&&B == 'C')//甲赢的三种情况
			a[0]++, c[0]++;
		else if (A == 'C'&&B == 'J')
			a[0]++, c[1]++;
		else if (A == 'J'&&B == 'B')
			a[0]++,c[2]++;

		if (B == 'B'&&A == 'C')//乙赢的三种情况
			b[0]++, d[0]++;
		else if (B == 'C'&& A== 'J')
			b[0]++, d[1]++;
		else if (B == 'J'&&A == 'B')
			b[0]++, d[2]++;

		a[2] = N - a[0] - a[1];
		b[2] = N - b[0] - b[1];
	}
	cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
	cout << b[0] << ' ' << b[1] << ' ' << b[2] << endl;
	int max_A = c[0], index_A = 0;
	int max_B = d[0], index_B = 0;
	for (int i = 1; i < 3; i++)
	{
		if (c[i] > max_A)
		{
			max_A = c[i];
			index_A = i;
		}
		if (d[i] > max_B)
		{
			max_B = b[i];
			index_B = i;
		}
	}
	char s[4] = "BCJ";
	cout << s[index_A] << ' ' << s[index_B] << endl;
	return 0;
}