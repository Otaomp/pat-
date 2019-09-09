#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
将每个值输入好，整理好，排序好，从大到小。然后比较最贵的库存量与需求量的关系，
少就加，多就按单位价格出。

 */
struct mooncake
{
	float mount, price, unit;
};
bool mycompare(mooncake a, mooncake b) {
	return a.unit > b.unit;
}
int main(void) {
	int n;
	int need;
	cin >> n >> need;
	vector<mooncake> a(n);
	for (int i = 0; i < n; i++) {
		scanf_s("%f", &a[i].mount);
	}
	for (int i = 0; i < n; i++) {
		scanf_s("%f", &a[i].price);
	}
	
	for (int i = 0; i < n; i++) {
		a[i].unit = a[i].price / a[i].mount;
	}
	sort(a.begin(), a.end(),mycompare);
	float ret = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].mount < need) {
			ret = ret + a[i].price;
		}
		else {
			ret += a[i].unit*need;
			break;
		}
		need -= a[i].mount;
	}
	printf_s("%.2f", ret);

	return 0;
}