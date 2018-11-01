/*Input Specification:
The first line of the input gives the positive number of test cases, T (≤10). Then T test cases follow, 
each consists of a single line containing three integers A, B and C, separated by single spaces.
Output Specification:
For each test case, output in one line Case #X: true if A+B>C, or Case #X: false otherwise, 
where X is the case number (starting from 1).
long long的范围[-2^63,2^63), A+B的值可能会溢出，而两个正数之和等于负数或者或是两个负数之和等于正数，那么就是溢出。 
*/ 
#include<cstdio>

int main() {
	int t;
	bool flag, m[15];
	long long a, b, c, temp;
	scanf("%d", &t);
	for(int i=1; i<=t; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		temp = a+b;
		if(a>0 && b>0 && temp<0) {  //正溢出为true 
			flag = true;
		} else if(a<0 && b<0 && temp>=0) {  //负溢出为false 
			flag = false;
		} else if(temp > c) {  //无溢出时 a+b>c 为true 
			flag = true;
		} else {  //无溢出时 a+b<=c 为false 
			flag = false;
		}
		if(flag) {
			m[i] = true;
		} else {
			m[i] = false;
		}
	}
	for(int i=1; i<=t; i++) {
		if(m[i]) {
			printf("Case #%d: true\n", i);	
		} else {
			printf("Case #%d: false\n", i);
		}
	}
	return 0;
} 
