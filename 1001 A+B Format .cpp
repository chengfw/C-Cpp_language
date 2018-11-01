/*1001 A+B Format 
Calculate a+b and output the sum in standard format -- that is,
the digits must be separated into groups of three by commas (unless there are less than four digits).
Input Specification:
Each input file contains one test case. Each case contains a pair of integers a and b where -10^6 ¡Üa,b¡Ü10^6.
The numbers are separated by a space.
Output Specification:
For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.
*/
#include<stdio.h>

int main() {
	int a, b, temp, i=0, count=0;
	char pot[10];
	scanf("%d %d", &a, &b);
	temp = a + b;
	if(temp < 0) {
		printf("-");
		temp = -temp;
	}
	if(temp<1000) {
		printf("%d", temp);
	} else {
		while(temp>0) {
			pot[i++] = temp % 10 +'0';
			temp /= 10;
			count++;
			if(count%3 == 0 && temp>0) {
				pot[i++] = ',';
				count = 0;
			}
		}
		for(int j=i-1; j>=0; j--) {
			printf("%c", pot[j]);
		}
	}
	return 0;
}
