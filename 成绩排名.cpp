#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int max_grd = -1, min_grd = 101;//Ԥ����
	string max_grd_name, max_grd_num;//���ֵ����ѧ����Ϣ
	string min_grd_name, min_grd_num;//���ֵ��С��ѧ����Ϣ
	string grd_name, grd_num;//��ÿ�������ѧ������Ϣ
	int n,grade;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> grd_name >> grd_num >> grade;
		//ÿ��һ��ѡ�����
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