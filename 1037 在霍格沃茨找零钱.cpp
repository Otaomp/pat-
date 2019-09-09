
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {//处理两个字符串输入，得到三个数数值。
	string input;
	int  Galleon, Sickle, Knut;
	cin >> input;
	int i = 0;
	while (input[i] != '.')i++;
	Galleon = stoi(input.substr(0, i));
	int j = i + 1;
	while (input[j] != '.')j++;
	Sickle = stoi(input.substr(i + 1, j));
	Knut = stoi(input.substr(j + 1, input.length()));
	//cout << Galleon << Sickle << Knut << endl;

	string input_2;
	int  Galleon_2, Sickle_2, Knut_2;
	cin >> input_2;
	i = 0;
	while (input_2[i] != '.')i++;
	Galleon_2 = stoi(input_2.substr(0, i));
	j = i + 1;
	while (input_2[j] != '.')j++;
	Sickle_2 = stoi(input_2.substr(i + 1, j));
	Knut_2 = stoi(input_2.substr(j + 1, input_2.length()));
	//cout << Galleon_2 << Sickle_2 << Knut_2 << endl;
	int total_Knut = (Galleon_2 - Galleon) * 17 * 29 + (Sickle_2 - Sickle) * 29 + (Knut_2 - Knut);
	int a = total_Knut / (17 * 29);
	int b = (total_Knut - a * 17 * 29) / 29;
	int c = total_Knut - a * 17 * 29 - b * 29;

	cout << a << '.' << abs(b) << '.' << abs(c) << endl;
	return 0;
}