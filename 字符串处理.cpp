/*读入一串字符，判断是否是“回文串”。“回文串”是一个正读和反读都一样的字符串，
比如说“level”或者“noon”就是回文串 
输入格式：一行字符串，长度不超过255
输出格式：如果是“回文串”,输出“YES”，否者输出“NO” 
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
