/*1046 Shortest Distance 
Input Specification:
Each input file contains one test case. For each case, the first line contains an integer N (in [3,10^5]), 
followed by N integer distances D1 D2……DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN
is between the N-th and the 1st exits. All the numbers in a line are separated by a space. 
The second line gives a positive integer M (≤10^4), with M lines follow, each contains a pair of exit numbers,
provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 10^7.
Output Specification:
For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits
*/
#include<stdio.h>

const int maxn = 100010;

int main() {
	int a[maxn], dis[maxn]; 
	int sum=0, query, n, left, right, temp;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
		dis[i] = sum;  //dis[i]代表1号节点到i节点顺时针方向下一个节点的距离 
	}
	scanf("%d", &query);
	for(int i=0; i<query; i++) {
		scanf("%d %d", &left, &right);
		if(left > right) {
			temp = left;
			left = right;
			right = temp;
		}
		int cop = dis[right-1] - dis[left-1];
		if(sum-cop < cop) {
			printf("%d\n", sum-cop);
		} else {
			printf("%d\n", cop);
		}
	}
	return 0;
}
