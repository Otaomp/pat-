#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>

//分析每一个加入的数字到底是多少个，直接找出规律，而不是用两遍for循环
// 每个数字加了这么多遍(N−i)*(i+1)
// 在数据量特别大的时候，(N−i)*(i+1)这个数很大，超过了int，用long long int
using namespace std;
int main()
{
	int N;
	scanf_s("%d", &N);
	vector<double> a(N);
	double sum = 0;
	for (int i = 0; i<N; i++) {
		scanf_s("%lf", &a[i]);
		sum += (long long int)(N - i) * (i + 1) * a[i];
	}
	printf("%.2f\n", sum);
	return 0;
}