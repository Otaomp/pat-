#include<iostream>
#include<string>
using namespace std;

//输出结果为0的时候，没有人名输出哦
int main(void) {
	int n;
	int ret = 0;
	cin >> n;
	string name, birth, maxName, minName, maxBirth = "1814/09/06", minBirth = "2014/09/06";
	for (int i = 0; i < n; i++) {
		cin >> name >> birth;
		if (birth >= "1814/09/06"&&birth <= "2014/09/06") {
			ret++;
			if (birth >= maxBirth) {
				maxBirth = birth;
				maxName = name;
			}
			if (birth <= minBirth) {
				minBirth = birth;
				minName = name;
			}
		}
	}
    cout<<ret;
    if(ret!=0)
	    cout <<' '<< minName<< ' '<< maxName;
	return 0;
}