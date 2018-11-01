/*1082 Read Number in Chinese
Given an integer with no more than 9 digits, you are supposed to read it in the traditional Chinese way.
Output Fu first if it is negative. For example, -123456789 is read as Fu yi Yi er Qian san Bai si Shi
wu Wan liu Qian qi Bai ba Shi jiu. Note: zero (ling) must be handled correctly according to the Chinese tradition.
For example, 100800 is yi Shi Wan ling ba Bai.
Input Specification:
Each input file contains one test case, which gives an integer with no more than 9 digits.
Output Specification:
For each test case, print in a line the Chinese way of reading the number. 
The characters are separated by a space and there must be no extra space at the end of the line.
*/
#include<stdio.h>
#include<string.h>

int main() {
	char read[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char unit[5][5]={"Shi","Bai","Qian","Wan","Yi"};
	char str[15];
	gets(str);
	int len = strlen(str);
	int left=0, right=len-1;
	if(str[0] == '-') {
		printf("Fu");
		left++;
	}
	while(left+4 <= right) {
		right -= 4; //��rightÿ������4λ��ֱ��left��right��ͬһ�� 
	}
	while(left < len) {
		int flag = 0; //��ʾû���ۻ� 0 
		int isPrint = 0;  //��ʾ�ý�û�����������λ(800000008 ��һ����û�����λ) 
		while(left<=right) {
			if(left>0 && str[left]=='0') {  //��ʾ��ǰλΪ 0 
				flag = 1;
			} else {  //�����ǰλ��Ϊ 0  
				if(flag) {
					printf(" ling");
					flag = 0; 
				}
				if(left>0) printf(" ");
				printf("%s", read[str[left]-'0']);
				isPrint = 1;
				if(left != right) {
					printf(" %s", unit[right-left-1]);
				}
			}
			left++;
		}
		if(isPrint==1 && right != len-1) { //ֻҪ���Ǹ�λ������������ 
			printf(" %s", unit[(len-1-right)/4 + 2]); 
		}
		right += 4;
	}
	return 0;
}
