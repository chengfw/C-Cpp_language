/* 在第一行给出不超过10^5的正整数N，即参赛人数。随后N行，
每行给出一位参赛者的信息和成绩，包括其所代表的学校编号 
(从1开始连续编号)及其比赛成绩(百分制) 
*/
#include<stdio.h>

const int maxn = 100010;
int main() {
	int school[maxn] = {0};
	int n, score, schoolID;
	scanf("%d", &n);  //输入参赛人数 
	for(int i=0; i<n; i++) {
		scanf("%d%d", &schoolID, &score);
		school[schoolID] += score;
	}
	int k=1, max = -1;
	for(int i=1; i<=n; i++) {
		if(school[i] > max) {
			max = school[i];
			k = i;
		}
	}
	printf("%d %d\n", k, max);
	return 0;
}
