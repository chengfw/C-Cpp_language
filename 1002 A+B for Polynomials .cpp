/*1002 A+B for Polynomials 
This time, you are supposed to find A+B where A and B are two polynomials.
Input Specification:
Each input file contains one test case. Each case occupies 2 lines, 
and each line contains the information of a polynomial:K N1 aN1 N2 aN2...Nk aNk 
where K is the number of nonzero terms in the polynomial, Ni and aNi(i=1,2,...,k)
are the exponents and coefficients,respectively.It is given that 1<=K<=10, 0<=Nk<...<N2<N1<=1000
Output Specification:
For each test case you should output the sum of A and B in one line, with the same format as the input.
 Notice that there must be NO extra space at the end of each line. 
 Please be accurate to 1 decimal place.
*/ 
#include<stdio.h>
const int maxn = 1010;
int main() {
	int k, n, m, max;
	double an, bm;
	double a[maxn]={0}, b[maxn]={0}, c[maxn]={0};
	int count=0, nmax=0, mmax=0;
	
	scanf("%d", &k);
	for(int i=0; i<k; i++) {
		scanf("%d %lf", &n, &an);
		a[n] = an;	
		if(n>nmax) {
			nmax = n;
		}
	}
	scanf("%d", &k);
	for(int i=0; i<k; i++) {
		scanf("%d %lf", &m, &bm);
		b[m] = bm;
		if(m>mmax) {
			mmax = m;
		}	
	}
	max = nmax>mmax ? nmax:mmax;
	for(int i=0; i<=max; i++) {
		if(a[i]!=0 || b[i]!=0) {
			c[i] = a[i] + b[i];
			if(c[i] != 0) {
				count++;
			}
		}
	}
	printf("%d", count);
	for(int i=max; i>=0; i--) {
		if(c[i] != 0){
			printf(" %d %.1f", i, c[i]);
		}
	}
	return 0;
}
