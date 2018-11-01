/*1025 PAT Ranking 
Input Specification:
Each input file contains one test case. For each case, the first line contains a positive number N (≤100), 
the number of test locations. Then N ranklists follow, each starts with a line containing
a positive integer K (≤300), the number of testees, and then K lines containing 
the registration number (a 13-digit number) and the total score of each testee. 
All the numbers in a line are separated by a space.
Output Specification:
For each test case, first print in one line the total number of testees. 
Then print the final ranklist in the following format:
registration_number final_rank location_number local_rank
The locations are numbered from 1 to N. The output must be sorted in nondecreasing order of the final ranks.
 The testees with the same score must have the same rank, and the output must be sorted in nondecreasing order of 
 their registration numbers.
*/
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Student {
	char id[15];
	int score;
	int location_number;
	int local_rank;
} stu[30010];

bool cmp(Student a, Student b) {
	if(a.score != b.score) {  //先按分数从高到低排序 
		return a.score > b.score;
	} else {   
		return strcmp(a.id,b.id) < 0; //分数相同按准考证号从小到大排序 
	}
}

int main() {
	int n, k, num=0;  //num为总考生人数 
	scanf("%d", &n);  //n为考场数 
	for(int j=1; j<=n; j++) {
		scanf("%d", &k);
		for(int i=0; i<k; i++) {
			scanf("%s %d", stu[num].id, &stu[num].score);
			stu[num].location_number = j; 
			num++;  //总考生数加 1 
		}
		sort(stu+num-k, stu+num, cmp);  //将该考场的考生排序 
		stu[num-k].local_rank = 1;  //将该考场的第一名 local_rank记为 1 
		for(int i=num-k+1; i<num; i++) {  //对该考场剩余的考生 
			if(stu[i].score == stu[i-1].score) {
				stu[i].local_rank = stu[i-1].local_rank;
			} else {  //local_rank为该考生前的人数 
				stu[i].local_rank = i + 1 - (num - k);
			}
		}	
	}
	printf("%d\n", num);
	sort(stu, stu+num, cmp);
	int r = 1;
	for(int i=0; i<num; i++) {
		if(i>0 && stu[i].score != stu[i-1].score) {
			r = i + 1;   //当前考生与上一个考生分数不同时，让 r更新为人数加 1 
		}
		printf("%s %d %d %d\n", stu[i].id, r, stu[i].location_number, stu[i].local_rank);
	}
	return 0;
}
