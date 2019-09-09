#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
bool cmp(int a, int b) {
	return a < b;
}
//第一种遍历,超时
//第二种，将原数组排序后与原数组作比较，相同的位置即为主元
//但第二种出现了段错误，说原因是访问了错误的内存，或者不要用cin。
//就有了第三种
using namespace std;
//int main(void) {
//	int n;
//	cin >> n;
//	vector<int>input(n);
//	for (int i = 0; i < n; i++) {
//		cin >> input[i];
//	}
//	int k,j;
//	vector<int>output;
//	for (int i = 0; i < n; i++) {
//		int pivot = input[i];
//		for (j = i + 1; j < n; j++) {
//			if (input[j] < pivot) {
//				break;
//			}
//		}
//		for (k = i; k > 0; k--) {
//			if (input[k] > pivot)
//				break;
//		}
//		if (k == 0 && j == n) {
//			output.push_back(input[i]);
//		}
//	}
//	sort(output.begin(), output.end(), cmp);
//	cout << output.size() << endl;
//	cout << output[0];
//	for (int i = 1; i < output.size();i++) {
//		cout << ' ' <<output[i] ;
//	}
//	return 0;
//}
int main(void) {
	int n, max = 0;
	scanf_s("%d", &n);;
	vector<int>input(n), compare(n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &input[i]);
		compare[i] = input[i];
	}
	sort(compare.begin(), compare.end(), cmp);
	vector<int>output(n);
	int ret=0;
	for (int i = 0; i < n; i++) {
		if (input[i] == compare[i] && input[i] > max) {
			output.push_back(input[i]);
			ret++;
		}

		if (input[i] > max)
			max = input[i];
	}
	sort(output.begin(), output.end(), cmp);
	cout << ret << endl;
	cout << output[0];
	for (int i = 1; i < output.size(); i++) {
		cout << ' ' << output[i];

	}
	return 0;
}

/*//正确的解法
int v[100000];
using namespace std;
int main() {
	int n, max = 0, cnt = 0;
	scanf("%d", &n);
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i] && b[i] > max)
			v[cnt++] = b[i];
		if (b[i] > max)
			max = b[i];
	}
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++) {
		if (i != 0) printf(" ");
		printf("%d", v[i]);
	}
	printf("\n");
	return 0;
}
 */