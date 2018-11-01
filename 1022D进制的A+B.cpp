/* 输入两个非负十进制整数A和B（<=2^30-1）以及D（进制数），输出A+B的D（1<=D<=10）进制数 
   输入格式：在一行中依次给出三个整数A、B、和D（进制数）
   输出格式：A和B的D进制数 
*/
#include<stdio.h> 
int main() {
	int a, b, d, num=0;
	int ary[31];
	scanf("%d %d %d", &a, &b, &d);
	int ab = a + b;
	do {
		ary[num++] = ab % d;
		ab = ab / d;
	} while(ab != 0);
	for(int i=num-1; i>=0; i--) {
		printf("%d", ary[i]);
	}
	return 0;
} 
