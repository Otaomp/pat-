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
			m[s[j]]++;//建立一个p，a，t键对
			if (s[j] == 'P') p = j;
			if (s[j] == 'T') t = j;
		}
		if (m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && m.size() == 3 && t - p != 1 && p*(t - p - 1) == s.length() - t - 1)
			vec.push_back(1);

//这句话该怎么解释呢？
//分析题目，首先PAT正确，条件3是在条件1，2成立后才成立，
//首先P这个字母只出现一次，T这个字母出现一次，A这个字母至少出现一次，P和T之间至少有一个A这个结果是根据条件2推得的
//我们在统计输入的字符串的键对情况后，只要判断其size是否等于3就可以判断是否只包含PAT这三种字母
//字母P的索引为p，字母T的索引为t，那么P之前的A的数目则为p，P和T之间的A的数目为t-p-1，T之后的A的数目为s.length()-t-1
		else
			vec.push_back(0);
	}
	for (int c:vec)//迭代输出vec内容
	{
		if (c == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;

}