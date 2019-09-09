#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
//很简单的一题哦
struct input
{
	int a_Say;
	int a_Sign;
	int b_Say;
	int b_Sign;
};
int main(void) {
	int n;
	cin>>n;
	struct input s;
	int a_Drink = 0, b_Drink = 0;
	for (int i = 0; i < n; i++) {
		cin >> s.a_Say >> s.a_Sign >> s.b_Say >> s.b_Sign;
		if (s.a_Say + s.b_Say != s.a_Sign&&s.a_Say + s.b_Say != s.b_Sign)
			continue;
		else if (s.a_Say + s.b_Say == s.a_Sign&&s.a_Say + s.b_Say == s.b_Sign)
			continue;
		else if (s.a_Say + s.b_Say == s.a_Sign&&s.a_Say + s.b_Say != s.b_Sign)
			b_Drink++;
		else
			a_Drink++;
	}
	cout << a_Drink << ' ' << b_Drink << endl;

	return 0;
}