/*��Ŀ��������������[-2^31,2^31]�ڵ���������A��B��C�����ж�A��B�Ƿ����C
  �����ʽ����һ�и���������T��<=10���������������ĸ�����������T�����������ÿ��ռһ�У�
  ˳�����A��B��C���������Կո�ָ�
  �����ʽ����ÿ��������������A+B>C����һ���������Case #X:true��;������� ��Case #X:false��,
  ����X�ǲ��������ı�ţ���1��ʼ�� 
*/
#include<stdio.h>
int main() {
	int T;
	char str[15][30];
	
	scanf("%d", &T);  
	for(int i=1; i<=T; i++) {
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a + b > c) {
			sprintf(str[i],"Case #%d:true \n", i);
		} else {
			sprintf(str[i],"Case #%d:false \n", i);
		}
	}
	for(int i=1; i<=T; i++) {
		printf("%s", str[i]);
	}
	return 0;
}
