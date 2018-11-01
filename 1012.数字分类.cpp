/*1012数字分类
 给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
A1 = 能被 5 整除的数字中所有偶数的和；
A2 = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1-n2+n3-n4...;
A3 = 被 5 除后余 2 的数字的个数；
A4 = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A5 = 被 5 除后余 4 的数字中最大数字。
输入格式：每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，
随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
输出格式：对给定的 N 个正整数，按题目要求计算 A1~A5 并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
若其中某一类数字不存在，则在相应位置输出 N。 
*/
#include<stdio.h>
int main() {
	int N, temp;
	int A1=0, A2=0, A3=0, A5=0;
	int flag=1, a2=1, count=0;
	double A4=0;
	scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d", &temp);  //输入N个正整数 
		if(temp%5 == 0 && temp%2 == 0) {
			A1 += temp;
			continue;
		} else if(temp%5 == 1) {
			a2 = 0;
			if(flag) {
				A2 += temp;
				flag = 0;
			} else {
				A2 -= temp;
				flag = 1;
			}
			continue;
		} else if(temp%5 == 2) {
			A3++;
			continue;
		} else if(temp%5 == 3) {
			A4 += temp;
			count++;
			continue;
		} else if(temp%5 == 4) {
			if(A5 < temp) {
				A5 = temp;
			}
			continue;
		}
	}
		if(A1 == 0) {
			printf("N ");
		} else {
			printf("%d ", A1);
		}
		if(A2 == 0 && a2) {
			printf("N ");
		} else {
			printf("%d ", A2);
		}
		if(A3 == 0) {
			printf("N ");
		} else {
			printf("%d ", A3);
		}
		if(A4 == 0) {
			printf("N ");
		} else {
			printf("%.1f ", A4/count);
		}
		if(A5 == 0) {
			printf("N");
		} else {
			printf("%d", A5);
		}	
	return 0;
}
