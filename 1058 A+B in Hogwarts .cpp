/*1058 A+B in Hogwarts 
"Seventeen silver Sickles to a Galleon and twenty-nine Knuts to a Sickle, it's easy enough."
Galleon is an integer in [0,10^7], Sickle is an integer in [0, 17), and Knut is an integer in [0, 29))
Input Specification:
Each input file contains one test case which occupies a line with A and B in the standard form, separated by one space.
Output Specification:
For each test case you should output the sum of A and B in one line, with the same format as the input.
*/
#include<stdio.h>
 
 int main() {
 	//注意：计算过程中和值最大值是2*(2*107*17*29+16*29+28)=1.972e+010，此值超出了int的范围，因此数据类型定义为long long.
 	long long g1, s1, k1, g2, s2, k2;  
 	long long a, b, sum;
 	scanf("%lld.%lld.%lld %lld.%lld.%lld", &g1, &s1, &k1, &g2, &s2, &k2);
 	a = g1*17*29 + s1*29 + k1;
 	b = g2*17*29 + s2*29 + k2;
 	sum = a + b;
 	printf("%lld.%lld.%lld\n", sum/(29*17), sum%(29*17)/29, sum%29);
 	return 0;
 }
