#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node {
	int num;
	int morals;
	int ability;
};

int cmp(struct node a, struct node b)
{
	if ((a.morals + a.ability) != (b.morals + b.ability))
		return (a.morals + a.ability) > (b.morals + b.ability);//优先总分
	else if (a.morals != b.morals)
		return a.morals > b.morals;//优先德分
	else
		return a.num < b.num;//总分，德分均相同，
}//受用的比较函数

int main(void)
{
	int N,L,H;
	cin >> N >> L >> H;
	vector<node> v[4];
	node temp;
	int total = N;
	for (int i = 0; i < N; i++)
	{//对输入的学生进行分类
		cin >> temp.num >> temp.morals >> temp.ability;
		if (temp.morals < L || temp.ability < L)
			total--;
		else if (temp.morals >= H&&temp.ability >= H)
			v[0].push_back(temp);//德才兼备
		else if (temp.morals >= H&&temp.ability < H)
			v[1].push_back(temp);//德胜才，德>80,才小于80
		else if (temp.morals < H&&temp.ability < H&&temp.morals>=temp.ability)
			v[2].push_back(temp);//德胜才，德才均小于80
		else 
			v[3].push_back(temp);
	}
	cout << total << endl;
	for (int i = 0; i < 4; i++)
	{//对每一类学生进行排序
		sort(v[i].begin(), v[i].end(),cmp);
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j].num << ' ' << v[i][j].morals << ' ' << v[i][j].ability << endl;
	}
	return 0;
}

/*1.使用 struct node来保存学生信息

2.将每一类的学生保存在 vector<node> 中,一共四类学生

3.使用 sort(a.begin(), a.end(), cmp) 来对每一类的学生排序，其中 cmp 为自己编写的比较函数

4.使用 scanf() 和 printf() 函数来输入输出以防超时，在pat里
*/