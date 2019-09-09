#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//对输入排好序后，最小的在最前面，最大的在最后面。
//部分序列最大与最小的中间那一部分长度可能大于最最小的那个结果
int main(void) {
	int n,ret=0;
	long long p;
	cin >> n >> p;
	vector<int> vArray(n);
	for (int i = 0; i < n; i++) {
		cin >>vArray[i];
	}
	sort(vArray.begin(), vArray.end());
	int t=0;
	for (int i = 0; i < n; i++) {
		for (int j = i+ret; j < n; j++) {
			if (vArray[i] * p >= vArray[j]) {
				t = j - i +1;
				if (ret <= t)
					ret = t;
			}
			else 
				break;
		}
	}
	cout << ret;
	return 0;
}