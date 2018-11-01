/* 输入一个数n(1<=n<=200),然后输入n个数值各不相同的数，
再输入一个值x，输出这个值在这个数组中的下标
(从0开始，若不在数组中则输出-1) 
*/
#include<stdio.h>
int main() {
	int n, x;
	int a[210];	
	while(scanf("%d", &n) != EOF) {
		int flag = 1;
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &x);
		for(int j=0; j<n; j++) {
			if(a[j] == x) {
				printf("%d\n", j);
				flag = 0;
				break;
			}
		}	
		if(flag) {
			printf("-1\n");
		}
	}
	return 0;
} 
