/*1005 Spell It Right 
Given a non-negative integer N, your task is to compute the sum of all the digits of N, 
and output every digit of the sum in English.
Input Specification:
Each input file contains one test case. Each case occupies one line which contains an N (¡Ü10^100).
Output Specification:
For each test case, output in one line the digits of the sum in English words. 
There must be one space between two consecutive words, but no extra space at the end of a line.
*/ 
#include<stdio.h>
#include<string.h>

int main() {
	char num[10][10] = {"zero","one","two","three","four","five","six",
					"seven","eight","nine"};
	char n[110], temp[10][10];
	int sum = 0, m=0;
	scanf("%s", n);
	int len = strlen(n);
	for(int i=0; i<len; i++) {
		sum += (n[i]-'0');
	}
	if(sum==0) {
		printf("%s", num[0]);
	} else {
		while(sum) {
			for(int i=0; i<10; i++) {
				temp[m][i] = num[sum%10][i];
			}
			m++;
			sum /= 10;
		} 
		for(int i=m-1; i>=0; i--) {
			printf("%s", temp[i]);
			if(i) {
				printf(" ");
			}
		}
	}
	return 0;
}
