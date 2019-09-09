#include<iostream>
using namespace std;
int main(void)
{
	long int a, b, c;
	int t;
	cin >> t;
	for (int i = 0; i < t;i++)
	{
		cin >> a >> b >> c;
		if (a + b > c)			
			cout << "Case #" << i + 1 << ": true"<<endl;
		else
			cout << "Case #" << i + 1 << ": false"<<endl;
	}
	return 0;
}