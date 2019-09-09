#include<iostream>
#include<vector>
using namespace std;
//printf()的%输出用%转义
int main(void) {
	int N,D;
	double e;//阈值
	cin >> N>>e>>D;
	int K;
	double temp;
	vector<vector<double>>v(N);
	for (int i = 0; i < N; i++) {
		cin >> K;
		for (int j = 0; j < K; j++) {
			cin >> temp;
			v[i].push_back(temp);
		}
	}
	double pos_empty=0, rea_empty=0;
	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0; j < v[i].size(); j++) {
			if (v[i][j] < e)
				count++;
		}
		if (2 * count > v[i].size())
			pos_empty++;
		if (2 * count > v[i].size() &&v[i].size() > D)
			rea_empty++;
	}
	printf("%.1f%% %.1f%%", 100*(pos_empty-rea_empty) / N,100 * rea_empty / N);
	return 0;
}