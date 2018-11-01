/*1036 Boys vs Girls 
Input Specification:Each input file contains one test case. Each case contains a positive integer N,
 followed by N lines of student information. Each line contains a student's name, gender, ID and grade, separated by a space, 
 where name and ID are strings of no more than 10 characters with no space, g
 ender is either  (female) or M (male), and grade is an integer between 0 and 100. 
 It is guaranteed that all the grades are distinct.
 Output Specification:For each test case, output in 3 lines. 
 The first line gives the name and ID of the female student with the highest grade, 
 and the second line gives that of the male student with the lowest grade. 
 The third line gives the difference gradeF-gradeM.If one such kind of student is missing,
  output Absent in the corresponding line, and output NA in the third line instead.
*/
#include<cstdio>

struct Student {
	char name[15], id[15];
	char gender;
	int grade;
} max, min, stu;

int main() {
	max.grade = -1;
	min.grade = 101;
	int n;
	bool flag1=false, flag2=false;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%s %c %s %d", stu.name, &stu.gender, stu.id, &stu.grade);
		if(stu.gender == 'F') {
			if(stu.grade > max.grade) {
				max = stu;
				flag1 = true;
			}
		} else if(stu.gender == 'M') {
			if(stu.grade < min.grade) {
				min = stu;
				flag2 = true;
			}
		}
	}
	if(flag1 && !flag2) {
		printf("%s %s\n", max.name, max.id);
		printf("Absent\n");
		printf("NA\n");
	} else if(!flag1 && flag2) {
		printf("Absent\n");
		printf("%s %s\n", min.name, min.id);
		printf("NA\n");
	} else if(flag1 && flag2) {
		printf("%s %s\n", max.name, max.id);
		printf("%s %s\n", min.name, min.id);
		printf("%d\n", max.grade-min.grade);
	} 
	return 0;
}
	
