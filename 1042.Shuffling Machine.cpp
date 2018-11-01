/*1042 Shuffling Machine
S1, S2, ..., S13, H1, H2, ..., H13, C1, C2, ..., C13, D1, D2, ..., D13, J1, J2
A given order is a permutation of distinct integers in [1, 54]. If the number at the i-th position is j, 
it means to move the card from position i to position j. 
Input Specification:Each input file contains one test case.
 For each case, the first line contains a positive integer K (≤20) which is the number of repeat times. 
Then the next line contains the given order.All the numbers in a line are separated by a space.
Output Specification:For each test case, print the shuffling results in one line. 
All the cards are separated by a space, and there must be no extra space at the end of the line.
解题关键：用char型数组 map[5] = {'S','H','C','D','J'}来建立编号与花色的关系。例如，假设当前牌号为 x，那么map[(x-1)/13]即为
这张牌对应的花色，而(x-1)%13+1即为它在所属花色下的编号 
*/
#include<stdio.h>
int main() {
	char map[5] = {'S','H','C','D','J'};
	int start[55], next[55], end[55];
	int K;
	scanf("%d", &K);  //执行K次
	for(int i=1; i<55; i++) {
		start[i] = i; //初始化牌的编号 
	} 
	for(int i=1; i<55; i++) {
		scanf("%d", &next[i]);  //输入每个位置上的牌在操作后的位置 
	} 
	
	for(int step=0; step<K; step++) {  //执行 K次操作 
		for(int i=1; i<55; i++) {
			end[next[i]] = start[i];
		}
		
		for(int i=1; i<55; i++) {
			start[i] = end[i];
		}
	}
	
	for(int i=1; i<55; i++) {
		char p = map[(start[i]-1) / 13];
		int q = (start[i]-1) % 13 + 1;
		printf("%c%d", p, q);
		if(i != 54) {
			printf(" ");
		}
	}
	return 0;
}
