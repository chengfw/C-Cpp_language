/*题目描述：给定一句英语，要求编写程序，将句中所有的单词按颠倒顺序输出
  输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词
  和若干空格组成，其中单词是由英文字母（大小写区分）组成的字符串，单词之间用1个空格分开，输入
  保证句子末尾没有多余的空格。
  输出格式：每个测试用例的输出占一行，输出倒序后的句子 
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
