/* ���������Ǹ�ʮ��������A��B��<=2^30-1���Լ�D���������������A+B��D��1<=D<=10�������� 
   �����ʽ����һ�������θ�����������A��B����D����������
   �����ʽ��A��B��D������ 
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
