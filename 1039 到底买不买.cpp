#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(void) {
	map<char, int>input_ball;
	string s;
	cin >> s;
	for (auto i : s) {
		if (input_ball.find(i) == input_ball.end()) {
			input_ball.insert(make_pair(i, 1));
		}
		else {
			input_ball[i]++;
		}
	}
	string s_1;
	cin >> s_1;
	int flag = 0;
	int ret = 0;
	for (auto i : s_1) {
		if (input_ball.find(i) != input_ball.end()&&input_ball[i] > 0)
			input_ball[i]--;
		else {
			flag = 1;
			ret++;
		}
	}
	if (flag == 0) {
		cout << "Yes" << ' ' << s.length() - s_1.length() << endl;
	}
	else {
		cout << "No" << ' ' << ret<<endl;
	}
	return 0;
}