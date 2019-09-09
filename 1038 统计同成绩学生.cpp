#include <iostream>
#include<vector>
#include<map>
using namespace std;
//常规的统计。以及输出
int main() {
	map<int, int>m;
	int n, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (m.find(temp) == m.end()) {
			m.insert(make_pair(temp, 1));
		}
		else {
			m[temp]++;
		}
	}
	int k;
	cin >> k;
	vector<int> v;
	for (int i = 0; i < k; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	int flag = 1;
	for (auto i : v) {
		if(flag==1){
			cout << m[i];
			flag = 0;
		}
		else {
			cout <<' '<< m[i];
		}
		
	}
	
}