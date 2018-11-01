/*1031 Hello World for U
That is, the characters must be printed in the original order, starting top-down from the left vertical line with n1 characters,
then left to right along the bottom line with n2 characters, and finally bottom-up along the vertical line with n3 characters.
And more, we would like U to be as squared as possible -- that is, it must be satisfied n1 = n3 = max {max|k<=n2 for all 3<=n2<=N}
with n1 + n2 + n3 -2 = N; 
Input Specification:
Each input file contains one test case. Each case contains one string with no less than 5 and no more than 80 characters in a line. 
The string contains no white space.
Output Specification:
For each test case, print the input string in the shape of U as specified in the description.
*/ 
#include<stdio.h>
#include<string.h>

int main() {
	char str[85];
	int temp=0;
	scanf("%s", &str);
	int length = strlen(str);
	int bottom = length;
	while(bottom >= (temp/2+1)) {  //保证 n2 总是大于等于 n1 
		bottom = bottom - 2;
		temp = temp + 2;
	}
	//上述循环多循环一次，作为不符合条件判断而跳出，所以之后要减去这次循环 
	bottom = bottom + 2;
	temp = temp - 2;
	
	for(int i=0; i<temp/2; i++) {
		printf("%c", str[i]);
		for(int i=0; i<bottom-2; i++) {
			printf(" ");
		}
		printf("%c\n", str[length-i-1]);
	}
	for(int i=temp/2; i<length-temp/2; i++) {
		printf("%c", str[i]);
	}
	return 0;
}
