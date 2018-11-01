/*1011 World Cup Betting
For example, 3 games' odds are given as the following:
 W    T    L
1.1  2.5  1.7
1.2  3.1  1.6
4.1  1.2  1.1
To obtain the maximum profit, one must buy W for the 3rd game, T for the 2nd game, and T for the 1st game. 
If each bet takes 2 yuans, then the maximum profit would be (4.1×3.1×2.5×65%-1)×2=39.31 yuans 
(accurate up to 2 decimal places).
Input Specification:Each input file contains one test case. Each case contains the betting information of 3 games. 
Each game occupies a line with three distinct odds corresponding to W, T and L.
Output Specification:For each test case, print in one line the best bet of each game,
 and the maximum profit accurate up to 2 decimal places. The characters and the number must be separated by one space.
 本题可以用一个char S[] = {'W', 'T', 'L'}数组来 表示比赛结果，比ifelse输出更简便  
*/ 
#include<stdio.h>
int main() {
	double w, t, l, sum=1;
	char res[3];
	for(int i=0; i<3; i++) {
		scanf("%lf %lf %lf", &w, &t, &l);
		if(w>t) {
			if(w>l) {
				res[i] = 'W';
				sum *= w; 
			} else {
				res[i] = 'L';
				sum *= l;
			}
		} else {
			if(t>l) {
				res[i] = 'T';
				sum *= t;
			} else {
				res[i] = 'L';
				sum *= l;
			}
		}
	}
	
	for(int i=0; i<3; i++) {
		printf("%c ", res[i]);
	}
	printf("%.2f", (sum*0.65-1)*2);
	return 0;
}
