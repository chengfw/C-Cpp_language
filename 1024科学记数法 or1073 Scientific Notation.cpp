/*1024科学记数法 or1073 Scientific Notation  
Scientific notation is the way that scientists easily handle very large numbers or very small numbers. 
The notation matches the regular expression [+-][1-9].[0-9]+E[+-][0-9]+ which means that the integer portion has exactly one digit, 
there is at least one digit in the fractional portion, and the number and its exponent's signs are always provided even when they are positive.
Now given a real number A in scientific notation, you are supposed to print A in the conventional notation 
while keeping all the significant figures.
Input Specification:
Each input contains one test case. For each case, there is one line containing the real number A in scientific notation. 
The number is no more than 9999 bytes in length and the exponent's absolute value is no more than 9999
Output Specification:
For each test case, print in one line the input number A in the conventional notation, with all the significant figures kept,
 including trailing zeros.
*/ 
#include<cstdio>
#include<cstring>

int main() {
	char str[10010];
	scanf("%s", str);
	int len = strlen(str);
	if(str[0] == '-') printf("-");
	
	int pos = 0;  //找出 E的位置 
	while(str[pos] != 'E') {
		pos++;
	}
	int exp = 0;  //exp是指数的绝对值 
	for(int i=pos+2; i<len; i++) {
		exp = exp * 10 + (str[i]-'0');
	} 
	if(str[pos+1] == '-') {
		printf("0.");
		for(int i=0; i<exp-1; i++) {
			printf("0");
		}
		for(int i=1; i<pos; i++) {
			if(str[i] == '.') 
				continue;
			printf("%c", str[i]);
		}
	} else {
			for(int i=1; i<pos; i++) {
				if(str[i] == '.')
					continue;
				printf("%c", str[i]);
				if(i==exp+2 && pos-3 != exp) {
					printf(".");
				} 
			}
			for(int i=0; i<exp-(pos-3); i++) {
						printf("0");
				}
		}
		return 0;
	}


