/* �����ʽ����һ���и��������α߳�N(3<=N<=20)����������αߵ�ĳ���ַ�C�����һ���ո� 
   �����ʽ���ɸ����ַ�C�����������Ρ�����ע�⵽�м����м���
   ����Ϊ���ý������ȥ���������Σ������������ʵ������������50%(��������ȡ��) 
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
