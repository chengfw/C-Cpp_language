/*1009 Product of Polynomials 
This time, you are supposed to find A¡ÁB where A and B are two polynomials.
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
	int k, n, m, nmax=-1, mmax=-1, count=0;
	double a, b;
	double an[maxn]={0}, bm[maxn]={0}, c[2010]={0};
	scanf("%d", &k);
	for(int i=0; i<k; i++) {
		scanf("%d %lf", &n, &a);
		an[n] = a;
		if(n > nmax) {
			nmax = n;
		}
	}
	
	scanf("%d", &k);
	for(int i=0; i<k; i++) {
		scanf("%d %lf", &m, &b);
		bm[m] = b;
		if(m > mmax) {
			mmax = m;
		}
	}
	for(int i=0; i<=nmax; i++) {
		if(an[i] != 0) {
			for(int j=0; j<=mmax; j++) {
				if(bm[j] != 0) {
					c[i+j] += an[i] * bm[j];
				}
			}
		}
	}
	for(int i=0; i<=nmax+mmax; i++) {
		if(c[i] != 0) {
			count++;
		}
	} 
	printf("%d", count);
	for(int i=nmax+mmax; i>=0; i--) {
		if(c[i] != 0) {
			printf(" %d %.1f", i, c[i]);
		}
	}
	return 0;	
}
