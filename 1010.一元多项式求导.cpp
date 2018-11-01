/*输入格式:以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过 1000 的整数）。数字间以空格分隔。
输出格式:以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。
注意“零多项式”的指数和系数都是 0，但是表示为 0 0。
*/ 
#include<stdio.h>
int main() {
	int a[1010][2];
	int i=0, count = 0;
	int coe, index;
	while(scanf("%d %d", &coe, &index) != EOF) {
		if(index) {
			count++;
			a[i][0] = coe * index;
			a[i][1] = index-1;
			i++;
	 }
	}
	if(count == 0) {
		printf("0 0");
	}
	for(int j=0; j<count; j++) {
		printf("%d ", a[j][0]);
		printf("%d", a[j][1]);
		if(j != count-1) {
			printf(" ");
		}
	}
	return 0;
} 
