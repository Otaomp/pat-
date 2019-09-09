#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	char ch;
	cin >> n >> ch;
	for (int i = 0; i < n; i++) {
		cout << ch;
	}
	cout << endl;
	int row = (int)(n / 2.0+0.5) - 2;//四舍五入
	for (int i = 0; i < row; i++) {
		printf("%c", ch);
		cout << setiosflags(ios::right) << setw(n-1) << ch << endl;//这是重点
	}
	for (int i = 0; i < n; i++) {
		cout << ch;
	}
	cout << endl;

	return 0;
}