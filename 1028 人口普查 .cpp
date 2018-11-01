/*1028 人口普查
输入格式：输入在第一行给出正整数 N，取值在(0,10^5]；
随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、
以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。
输出格式：在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
*/ 
#include<stdio.h>

struct info {
	char name[6];
	int year, month, day;
};

int main() {
	int n, count = 0;
	info p;
	info max, min;
	max.year = 1813;
	min.year = 2015; 
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		getchar();
		scanf("%s %d/%d/%d", p.name, &p.year, &p.month, &p.day);
		if(p.year==1814 && p.month>9
		|| p.year==1814 && p.month==9 && p.day>=6
		|| p.year>1814 && p.year<2014 
		|| p.year==2014 && p.month<9 
		|| p.year==2014 && p.month==9 && p.day<=6) {
			if(p.year > max.year) {
				max = p;
			} else if(p.year == max.year) {
				if(p.month > max.month) {
					max = p;
				} else if(p.month == max.month) {
					if(p.day > max.day) {
						max = p;
					}
				}	
			}
			if(p.year < min.year) {
				min = p;
			} else if(p.year == min.year) {
				if(p.month < min.month) {
					min = p;
				} else if(p.month == min.month) {
					if(p.day < min.day) {
						min = p;
					}
				}	
			}
			count++;
		}
	} 
		if(count == 0) {
			printf("0\n");
		} else {
				printf("%d %s %s\n", count, min.name, max.name);
		} 
		return 0;
}
