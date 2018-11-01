/*1048 数字加密 
本题要求实现一种数字加密方法。首先固定一个加密用正整数 A，对任一正整数 B，将其每 1 位数字与 A 的对应位置上的数字进行以下运算：
对奇数位，对应位的数字相加后对 13 取余——这里用 J 代表 10、Q 代表 11、K 代表 12；
对偶数位，用 B 的数字减去 A 的数字，若结果为负数，则再加 10。这里令个位为第 1 位。
输入格式：
输入在一行中依次给出 A 和 B，均为不超过 100 位的正整数，其间以空格分隔。
输出格式：
在一行中输出加密后的结果。
*/ 
#include<stdio.h>
#include<string.h>

char a[110], b[110], end[110];

void reverse(char s[]) {
	int len = strlen(s);
	for(int i=0; i<len/2; i++) {  //字符串下标从 0 开始， i 不能小于等于 len/2 ，只能是小于 len/2 
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
	for(int i=0; i<len; i++) {    //a 或者 b 位数不足要补 0 
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
