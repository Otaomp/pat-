#include<vector>
#include <iostream>
#include <algorithm>

using namespace std;
//这一题与我的一开始做法不一样很难受啊
int main() {
	int n;
	cin >> n;
	vector<int> a(100);
	vector<int> b(100);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	int i, j;
	for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);
	//若是插入排序的话，前面几个会保持有序状态，后面几个和原来的序列一样
	for (j = i + 1; a[j] == b[j] && j < n; j++);
	//一直到末尾与原本的序列保持一致
	if (j == n) {
		cout << "Insertion Sort" << endl;
		sort(a.begin(), a.begin()+i+2);
	}
	//不满足上面的情乱就是归并排序
	else {
		cout << "Merge Sort" << endl;
		int k = 1, flag = 1;
		while (flag) {
			flag = 0;
			for (i = 0; i < n; i++) {//判断a与b相等，相等的话就可以对其再进行归并，
				if (a[i] != b[i])
					flag = 1;
			}
			k = k * 2;//二路归并，一开始每组只有两个元素，随后四个，然后八个
			for (i = 0; i < n / k; i++)//分成k份，对每一份排序
				sort(a.begin()+i * k, a.begin() + (i + 1) * k);
			sort(a.begin() + n / k * k, a.begin() + n);//对不能整除的部分排序
		}
	}
	for (j = 0; j < n; j++) {
		if (j != 0) printf(" ");
		printf("%d", a[j]);
	}
	return 0;
}