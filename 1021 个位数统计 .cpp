/*1021 ��λ��ͳ�� 
�����ʽ��
ÿ��������� 1 ��������������һ�������� 1000 λ�������� N��
�����ʽ��
�� N ��ÿһ�ֲ�ͬ�ĸ�λ���֣��� D:M �ĸ�ʽ��һ���������λ���� D ������ N �г��ֵĴ��� M��Ҫ�� D �����������
*/ 
#include<stdio.h>
#include<string.h>

int main() {
	int a[10] = {0};
	char num[1010];
	gets(num);
	int len = strlen(num);   //strlen()һ�㲻��ֱ�ӷ���forѭ���У���Ϊstrlen�ķ���ֵ��һ��unsigned���ͣ����������ѭ����Ӧ�ý�strlen(a)ǿ��ת��Ϊint���� 
	for(int i=0; i<len; i++) {
		a[num[i]-'0']++;
	}
	for(int i=0; i<10; i++) {
		if(a[i] != 0) {
			printf("%d:%d\n", i, a[i]);
		}
	}
	return 0;
 } 
