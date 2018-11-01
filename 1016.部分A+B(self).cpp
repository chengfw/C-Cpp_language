#include<stdio.h>

int Count(int n, int Dn) {
	int count = 0;
	while(n) {
		int num = n % 10;
		if(num == Dn) {
			count = count*10 + Dn;
		}
		n /= 10;
	}
	return count;
}

int main() {
	int a, b;
	int Da, Db;
	scanf("%d %d %d %d", &a, &Da, &b, &Db);
	int A = Count(a, Da);
	int B = Count(b, Db);
	printf("%d", A+B);
	return 0;
}
