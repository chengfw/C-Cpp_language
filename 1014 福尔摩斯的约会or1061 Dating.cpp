/*1014 ����Ħ˹��Լ�� / 1061 Dating
����̽����Ħ˹�ӵ�һ����ֵ�����������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm��
����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�������� 14:04��           
��Ϊǰ�����ַ����е� 1 ����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ� 4 ����ĸ D�����������ģ�
�� 2 ����ͬ���ַ��� E �����ǵ� 5 ��Ӣ����ĸ������һ����ĵ� 14 ����ͷ������һ��� 0�㵽 23�������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ����
�������ַ����� 1 ����ͬ��Ӣ����ĸ s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������ 4 ���ӡ��ָ��������ַ�����
���������Ħ˹����õ�Լ���ʱ�䡣
�����ʽ��
������ 4 ���зֱ���� 4 ���ǿա��������ո��ҳ��Ȳ����� 60 ���ַ�����
�����ʽ��
��һ�������Լ���ʱ�䣬��ʽΪ DAY HH:MM������ DAY ��ĳ���ڵ� 3 �ַ���д���� MON ��ʾ����һ��
TUE ��ʾ���ڶ���WED ��ʾ��������THU ��ʾ�����ģ�FRI ��ʾ�����壬SAT ��ʾ��������SUN ��ʾ�����ա�
��Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣
*/
#include<cstdio>
#include<cstring>

int main() { 
	char week[7][5] = {"MON","TUE","WED","THU","FRI","SAT","SUN"}; 
	char str1[65], str2[65], str3[65], str4[65];
	scanf("%s %s %s %s", str1, str2, str3, str4);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);
	int len4 = strlen(str4);
	int i;
	//Ѱ��str1��str2�е�һ����ͬλ�õ� A~Z �Ĵ�д��ĸ 
	for(i=0; i<len1 && i<len2; i++) {
		if(str1[i] == str2[i]) {
			if(str1[i]>='A' && str1[i]<='G') {
				printf("%s ", week[str1[i]-'A']);
				break;
			}
		}
	}
	i = i + 1;
	//������Ļ����ϣ�����Ѱ����ͬλ�õ� 0~9 �� A~Z 
	for( ; i<len1 && i<len2; i++) {
		if(str1[i] == str2[i]) {
			if(str1[i]>='0'&&str1[i]<='9') {
				printf("%02d:", str1[i]-'0');
				break;
			} else if(str1[i]>='A'&&str1[i]<='N') {
				printf("%02d:", str1[i]-'A'+10);
				break;
			}
		}
	}
	//Ѱ��str3��str4�е�һ����ͬλ�õ� A~Z�� a~z ��Ӣ����ĸ 
	for(int j=0; j<len3 && j<len4; j++) {
		if(str3[j] == str4[j]) {
			if(str3[j]>='A'&&str3[j]<='Z'
				|| str3[j]>='a'&&str3[i]<='z') {
				printf("%02d\n", j);
				break;
			}
		}
	}
	return 0;
}




