#include<iostream>
#include<string>
#include<set>
using namespace std;
//toupper函数返回修改后的字符，并不修改原有字符
int main(void) {
	string input;
	string actual_input;
	cin >> input;
	cin >> actual_input;
	set<char> s;
	for (int i = 0,j=0; i < input.length(); i++) {
		if (input[i] != actual_input[j]){
			if (s.count(toupper(input[i])) == 0) {
			char t = toupper(input[i]);
			s.insert(t);
			cout << t;
		}
		}
		else
		{
			j++;
		}
	}
	return 0;
}