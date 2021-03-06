/*题目描述：给定区间[-2^31,2^31]内的三个整数A、B和C，请判断A和B是否大于C
  输入格式：第一行给出正整数T（<=10），即测试用例的个数。随后给出T组测试用例，每组占一行，
  顺序给出A、B和C。整数间以空格分隔
  输出格式：对每组测试用例，如果A+B>C，在一行中输出“Case #X:true”;否则输出 “Case #X:false”,
  其中X是测试用例的编号（从1开始） 
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
