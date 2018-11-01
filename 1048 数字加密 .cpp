/*1048 ���ּ��� 
����Ҫ��ʵ��һ�����ּ��ܷ��������ȹ̶�һ�������������� A������һ������ B������ÿ 1 λ������ A �Ķ�Ӧλ���ϵ����ֽ����������㣺
������λ����Ӧλ��������Ӻ�� 13 ȡ�ࡪ�������� J ���� 10��Q ���� 11��K ���� 12��
��ż��λ���� B �����ּ�ȥ A �����֣������Ϊ���������ټ� 10���������λΪ�� 1 λ��
�����ʽ��
������һ�������θ��� A �� B����Ϊ������ 100 λ��������������Կո�ָ���
�����ʽ��
��һ����������ܺ�Ľ����
*/ 
#include<stdio.h>
#include<string.h>

char a[110], b[110], end[110];

void reverse(char s[]) {
	int len = strlen(s);
	for(int i=0; i<len/2; i++) {  //�ַ����±�� 0 ��ʼ�� i ����С�ڵ��� len/2 ��ֻ����С�� len/2 
		char temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
}

int main() {
	scanf("%s %s", a, b);
	reverse(a);
	reverse(b);
	int lenA = strlen(a);
	int lenB = strlen(b);
	int len = lenA > lenB ? lenA : lenB;
	for(int i=0; i<len; i++) {    //a ���� b λ������Ҫ�� 0 
		int numA = i<lenA ? a[i]-'0': 0;
		int numB = i<lenB ? b[i]-'0': 0;
		if(i % 2 == 0) {
			int t = (numA + numB) % 13;	
			if(t == 10) {
				end[i] = 'J';
			} else if(t == 11) {
				end[i] = 'Q';
			} else if(t == 12) {
				end[i] = 'K';
			} else {
				end[i] = t + '0';
			}
		} else {
			int t = numB - numA;
			if(t < 0) {
				t = t + 10;
			}
			end[i] = t + '0';
			}
		}
	reverse(end);
	int lent = strlen(end);
	for(int m=0; m<=lent-1; m++) {
		printf("%c", end[m]);
	}
	return 0;
} 
