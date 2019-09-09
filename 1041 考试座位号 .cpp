#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//设置好数据结构，开始遍历
struct Student
{
	string code;
	int machine_sit_Num;
	int test_Sit_Num;
};
int main(void) {
	int n;
	cin >> n;
	vector<struct Student> v_Student(n);
	for (int i = 0; i < n; i++) {
		cin >> v_Student[i].code >> v_Student[i].machine_sit_Num >> v_Student[i].test_Sit_Num;
	}
	int m;
	cin >> m;
	vector<int> v_search_sit(m);
	for (int i = 0; i < m; i++) {
		cin >> v_search_sit[i];
	}
	for (auto i : v_search_sit) {
		for (auto j : v_Student) {
			if (i == j.machine_sit_Num) {
				cout << j.code <<' '<<j.test_Sit_Num<<endl;
			}
		}
	}
	return 0;
}