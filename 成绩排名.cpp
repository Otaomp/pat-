#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int max_grd = -1, min_grd = 101;//预输入
	string max_grd_name, max_grd_num;//存分值最大的学生信息
	string min_grd_name, min_grd_num;//存分值最小的学社信息
	string grd_name, grd_num;//存每次输入的学生的信息
	int n,grade;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> grd_name >> grd_num >> grade;
		//每次一个选择过程
		if (grade > max_grd)
		{
			max_grd = grade;
			max_grd_name = grd_name;
			max_grd_num = grd_num;
		}
		if (grade <min_grd)
		{
			min_grd = grade;
			min_grd_name = grd_name;
			min_grd_num = grd_num;
		}
	}
	cout << max_grd_name<< ' '<< max_grd_num << endl;
	cout << min_grd_name<< ' '<< min_grd_num << endl;
	return 0;
}