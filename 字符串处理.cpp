/*����һ���ַ����ж��Ƿ��ǡ����Ĵ����������Ĵ�����һ�������ͷ�����һ�����ַ�����
����˵��level�����ߡ�noon�����ǻ��Ĵ� 
�����ʽ��һ���ַ��������Ȳ�����255
�����ʽ������ǡ����Ĵ���,�����YES�������������NO�� 
*/
#include<stdio.h>
#include<string.h>
int main() {
	char ch1[256], ch2[256];
	scanf("%s", ch1);
	int length = strlen(ch1);
	int flag = 1;
	
	for(int i=0, j=length-1; i < j; i++, j--) {
		if(ch1[i] != ch1[j]) {
				flag = 0;
		}
	   }
	if(flag) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
} 
