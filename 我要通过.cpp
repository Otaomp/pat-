#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main(void)
{
	string s;
	int p = 0, t = 0;
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		map<char, int> m;
		for (int j = 0; j < s.length(); j++)
		{
			m[s[j]]++;//����һ��p��a��t����
			if (s[j] == 'P') p = j;
			if (s[j] == 'T') t = j;
		}
		if (m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && m.size() == 3 && t - p != 1 && p*(t - p - 1) == s.length() - t - 1)
			vec.push_back(1);

//��仰����ô�����أ�
//������Ŀ������PAT��ȷ������3��������1��2������ų�����
//����P�����ĸֻ����һ�Σ�T�����ĸ����һ�Σ�A�����ĸ���ٳ���һ�Σ�P��T֮��������һ��A�������Ǹ�������2�Ƶõ�
//������ͳ��������ַ����ļ��������ֻҪ�ж���size�Ƿ����3�Ϳ����ж��Ƿ�ֻ����PAT��������ĸ
//��ĸP������Ϊp����ĸT������Ϊt����ôP֮ǰ��A����Ŀ��Ϊp��P��T֮���A����ĿΪt-p-1��T֮���A����ĿΪs.length()-t-1
		else
			vec.push_back(0);
	}
	for (int c:vec)//�������vec����
	{
		if (c == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;

}