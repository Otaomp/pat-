#include<iostream>
#include<string>
using namespace std;
//遇到的坑，ret怎么追加字符，sring.find()返回值
int main(void) {
	string broken_board;
	string input;
    getline(cin, broken_board);//只要换了cin,样例三就能够通过qin
	cin >> input;
	string ret;
	for (int i = 0; i < input.length();i++) {
		char up_i = toupper(input[i]);
		if (broken_board.find(up_i)!=string::npos) {//！=string::npos这个代表找到了
			continue;
		}
		if (broken_board.find('+') != string::npos&&isupper(input[i])){//
			continue;
		}
		else {
			ret = ret+input[i];
		}
	}
    if(ret.length()==0){
        cout<<endl;;
    }
    else{
         cout << ret;
    }
	   
	return 0;
}