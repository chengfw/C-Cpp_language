/*�����ʽ:��ָ���ݽ���ʽ�������ʽ������ϵ����ָ��������ֵ��Ϊ������ 1000 �������������ּ��Կո�ָ���
�����ʽ:����������ͬ�ĸ�ʽ�����������ʽ�������ϵ����ָ�������ּ��Կո�ָ�������β�����ж���ո�
ע�⡰�����ʽ����ָ����ϵ������ 0�����Ǳ�ʾΪ 0 0��
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
