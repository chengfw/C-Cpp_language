/*1021 个位数统计 
输入格式：
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。
输出格式：
对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。
*/ 
#include<stdio.h>
#include<string.h>

int main() {
	int a[10] = {0};
	char num[1010];
	gets(num);
	int len = strlen(num);   //strlen()一般不能直接放入for循环中，因为strlen的返回值是一个unsigned类型，容易造成死循环，应该将strlen(a)强制转换为int类型 
	for(int i=0; i<len; i++) {
		a[num[i]-'0']++;
	}
	for(int i=0; i<10; i++) {
		if(a[i] != 0) {
			printf("%d:%d\n", i, a[i]);
		}
	}
	return 0;
 } 
