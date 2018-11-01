/*1019 General Palindromic Number 
Consider a number N>0 in base b¡İ2, where it is written in standard notation with k+1 digits ai as (aib^i)(i=0,k).
Here,as usual, 0<=ai<b for all i and ak is non-zero.Then N is palindromic if and only if ai=ak-i for all i. 
Zero is written 0 in any base and is also palindromic by definition.
Input Specification:
Each input file contains one test case. Each case consists of two positive numbers N and b, where 0<N¡Ü10^9
is the decimal number and 2¡Üb¡Ü10^9 is the base. The numbers are separated by a space.
Output Specification:
For each test case, first print in one line Yes if N is a palindromic number in base b, or No if not. Then in the next line, 
print N as the number in base b in the form "ak ak-1 ... a0". Notice that there must be no extra space at the end of output.
*/ 
#include<stdio.h>

int main() {
	int num, b;
	int i=0, flag=1;
	int p[40]={0};
	scanf("%d %d", &num, &b);
	 do {
		p[i++] = num % b;
		num /= b;
	} while(num != 0);
	i = i - 1; 
	for(int j=0; j<=i; j++) { 
		if(p[j] != p[i-j]) {
			flag = 0;
		}
	}
	if(flag) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	for(int j=i; j>=0; j--) {
		printf("%d", p[j]);
		if(j>0) {
			printf(" ");
		}
	}
	return 0;
}
