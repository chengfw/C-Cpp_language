/* ����һ����n(1<=n<=200),Ȼ������n����ֵ������ͬ������
������һ��ֵx��������ֵ����������е��±�
(��0��ʼ�������������������-1) 
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
