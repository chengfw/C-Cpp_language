/*本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“* ”，要求按下列格式打印
*****
 ***
  *
 ***
*****
所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；
符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
输入格式:输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。
输出格式:首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。
*/
#include<stdio.h>
int main() {
	int n, i=1, sum=1;
	char sign;
	scanf("%d %c", &n, &sign);
	while(sum <= n) {   
		i += 2;
		sum += i*2;
	} //在满足条件时，sum再多加一个2*i，方便作判断和找出条件值 
	sum = sum - 2*i;
	i = i - 2;
	for(int j=i; j>1; j=j-2) {
		for(int m=0; m<(i-j)/2; m++) {  //左侧需要输出的空格数 
			printf(" ");
		}
		for(int m=0; m<j; m++){
			printf("%c", sign);
		}
		printf("\n");
   }
   for(int j=1; j<=i; j=j+2) {
   		for(int m=0; m<(i-j)/2; m++) {
   			printf(" ");
		   }
		for(int m=0; m<j; m++) {
		   	printf("%c", sign);
		}
		   printf("\n");
   }
   	 printf("%d\n", n-sum);
  
   return 0;
}

