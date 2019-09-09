#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;//若没有导入string，会产生>>提示没有与这些操作数匹配的运算符提示错误
	int i = 0, j = 0;
	char res[2];
	int pos;//保存解码结果
	while (i < a.length() && i < b.length())
	{
		if (a[i] == b[i] && a[i] >= 'A'&&a[i] <= 'G') {
			res[0] = a[i];
			i++;
			break;
		}
		i++;
	}//对a and b循环找到第一对相同字母
	while (i < a.length() && i < b.length())
	{
		if (a[i] == b[i] && ((a[i] >= 'A'&&a[i] <= 'N') || isdigit(a[i]))) {//逻辑语句书写
			res[1] = a[i];
			break;
		}
		i++;
	}//对a and b循环找到第二对相同字母
	while (j<c.length() && j < d.length())
	{
		if (c[j] == d[j] && isalpha(c[j])) {
			pos = j;
			break;
		}
		j++;
	}//对c and d循环找到第三对相同字母的位置

	 //以下是对res[2],pos的内容解读
	string week[7] = { "MON ","TUE ","WED ","THU ","FRI ","SAT ","SUN " };
	cout << week[res[0] - 'A'];
	int h = isdigit(res[1]) ? res[1] - '0' : res[1] - 'A' + 10;
	printf("%02d:%02d", h, pos);

	return 0;
}

/*
isalnum()  如果参数是字母数字，即字母或者数字，函数返回true
isalpha()  如果参数是字母，函数返回true
iscntrl()  如果参数是控制字符，函数返回true
isdigit()  如果参数是数字（0－9），函数返回true
isgraph()  如果参数是除空格之外的打印字符，函数返回true
islower()  如果参数是小写字母，函数返回true
isprint()  如果参数是打印字符（包括空格），函数返回true
ispunct()  如果参数是标点符号，函数返回true
isspace()  如果参数是标准空白字符，如空格、换行符、水平或垂直制表符，函数返回true
isupper()  如果参数是大写字母，函数返回true
isxdigit() 如果参数是十六进制数字，即0－9、a－f、A－F，函数返回true

tolower()  如果参数是大写字符，返回其小写，否则返回该参数
toupper()  如果参数是小写字符，返回其大写，否则返回该参数
 */
