/*��Ŀ����������һ��Ӣ�Ҫ���д���򣬽��������еĵ��ʰ��ߵ�˳�����
  �����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ���
  �����ɿո���ɣ����е�������Ӣ����ĸ����Сд���֣���ɵ��ַ���������֮����1���ո�ֿ�������
  ��֤����ĩβû�ж���Ŀո�
  �����ʽ��ÿ���������������ռһ�У���������ľ��� 
*/
#include<stdio.h>
#include<string.h>
int main() {
	char str[90];
	gets(str);
	int length = strlen(str);
	int right = length-1;
	int m =0;
	for(int i=right; i>=0; i--) {	
		if(str[i]== ' ') {
			for(int j=i+1; j<=right; j++){
				printf("%c", str[j]);
			}
			right = i - 1;
			printf(" ");
		} 
		if(i==0) {
			for(int j=i; j<=right; j++){
				printf("%c", str[j]);
			}
		}
	}
	return 0;
} 
