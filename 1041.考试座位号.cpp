/*1041 考试座位号
输入格式：输入第一行给出一个正整数 N（≤1000），随后 N 行，每行给出一个考生的信息：准考证号 试机座位号 考试座位号。
其中准考证号由 14 位数字组成，座位从 1 到 N 编号。
输入保证每个人的准考证号都不同，并且任何时候都不会把两个人分配到同一个座位上。
考生信息之后，给出一个正整数 M（≤N），随后一行中给出 M 个待查询的试机座位号码，以空格分隔。
输出格式：对应每个需要查询的试机座位号码，在一行中输出对应考生的准考证号和考试座位号码，中间用 1 个空格分隔。
*/
#include<stdio.h>
struct student{
	char eNum[15];
	int pno;
	int qno;
};
 
int main() {
	int N, M;
	scanf("%d", &N);
	student end[N+1];
	for(int i=1; i<=N; i++) {
		student stu;
		scanf("%s %d %d", stu.eNum, &stu.pno, &stu.qno);
		end[stu.pno] = stu;
	}
	scanf("%d", &M);
	int n[M];
	for(int i=0; i<M; i++) {
		scanf("%d", &n[i]);
	}
	for(int i=0; i<M; i++) {
		printf("%s %d\n", end[n[i]].eNum, end[n[i]].qno);
	}
	return 0;	
}
