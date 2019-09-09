#include<iostream>
#include<math.h>
using namespace std;

//只要把这里注释掉就可以通过了
int main(void) {
	int n;
	char ch;
	cin >> n >> ch;
	int row = (int)sqrt(((n + 1) / 2.0));
	for (int i = row; i > 0; i--) {
		for (int k = 0; k<row-i; k++) {
			printf(" ");
		}
		for (int j = 2 * i - 1; j > 0; j--) {

			printf("%c", ch);
		}
		/*for (int k = 0; k<row-i; k++) {
			printf(" ");
		}*/
		printf("\n");
	}

	for (int i = 1; i<row; i++) {
		for (int k = row-i-1; k>0; k--) {
			printf(" ");
		}
		for (int j =0;j<2*i+1 ; j++) {

			printf("%c", ch);
		}
		/*for (int k =row-i; k>0; k--) {
			printf(" ");
		}*/
		printf("\n");
	}
	cout << n - 2 * row*row + 1;
	return 0;
}