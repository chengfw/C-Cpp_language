/* 输入格式：在一行中给出正方形边长N(3<=N<=20)和组成正方形边的某种字符C，间隔一个空格 
   输出格式：由给定字符C画出的正方形。但是注意到行间距比列间距大，
   所以为了让结果看上去更像正方形，所输出的行数实际上是列数的50%(四舍五入取整) 
*/

#include<stdio.h>
int main() {
	int row, col;
	char c;
	scanf("%d %c", &col, &c);
	if(col%2 == 0) {
		row = col/2;
	} else {
		row = col/2 + 1;
	}
	
	for(int i=0; i<col; i++) {
		printf("%c", c);
	}
	printf("\n");
	
	for(int i=2; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(j==0 || j==col-1) {
				printf("%c", c);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(int i=0; i<col; i++) {
		printf("%c", c);
	}
	return 0;
}
