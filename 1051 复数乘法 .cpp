#include<iostream>
#include<cmath>
using namespace std;
//首先是复数的计算公式
//其次是输出格式，有四舍五入，还有虚部的正负性输出
int main(void) {
	double  R1, P1, R2, P2;
	
	cin >> R1 >> P1 >> R2 >> P2;
	double ret_R = R1*R2*cos(P1)*cos(P2)- R1*R2 *sin(P1)*sin(P2);
	double ret_P = R1*R2*cos(P1)*sin(P2)+R1*R2*sin(P1)*cos(P2);
	if (ret_R + 0.005 > 0 && ret_R < 0)
		printf("0.00");
	else
		printf("%.2f", ret_R);
	if (ret_P + 0.005 > 0 && ret_P < 0)
		printf("+0.00i");
	else if (ret_P >= 0)
		printf("+%.2fi", ret_P);
	else
		printf("%.2fi", ret_P);
	return 0;
}