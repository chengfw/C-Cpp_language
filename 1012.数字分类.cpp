/*1012���ַ���
 ����һϵ�����������밴Ҫ������ֽ��з��࣬��������� 5 �����֣�
A1 = �ܱ� 5 ����������������ż���ĺͣ�
A2 = ���� 5 ������ 1 �����ְ�����˳����н�����ͣ������� n1-n2+n3-n4...;
A3 = �� 5 ������ 2 �����ֵĸ�����
A4 = �� 5 ������ 3 �����ֵ�ƽ��������ȷ��С����� 1 λ��
A5 = �� 5 ������ 4 ��������������֡�
�����ʽ��ÿ��������� 1 ������������ÿ�����������ȸ���һ�������� 1000 �������� N��
������ N �������� 1000 �Ĵ�����������������ּ��Կո�ָ���
�����ʽ���Ը����� N ��������������ĿҪ����� A1~A5 ����һ����˳����������ּ��Կո�ָ�������ĩ�����ж���ո�
������ĳһ�����ֲ����ڣ�������Ӧλ����� N�� 
*/
#include<stdio.h>
int main() {
	int N, temp;
	int A1=0, A2=0, A3=0, A5=0;
	int flag=1, a2=1, count=0;
	double A4=0;
	scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d", &temp);  //����N�������� 
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
