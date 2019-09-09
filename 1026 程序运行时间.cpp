#include<iostream>
using namespace std;
//终于有一道简单题目了
int main(void) {
	int c1, c2;
	int second;
	cin >> c1 >> c2;
	second = (int)((c2 - c1) / 100.0 + 0.5);
	int hour = second / 3600;
	int min = (second - hour * 3600) / 60;
	int sec = (second - hour * 3600 - min * 60);
	printf("%02d:%02d:%02d", hour, min, sec);
	return 0;
}