/*1028 �˿��ղ�
�����ʽ�������ڵ�һ�и��������� N��ȡֵ��(0,10^5]��
��� N �У�ÿ�и��� 1 ���˵��������ɲ����� 5 ��Ӣ����ĸ��ɵ��ַ�������
�Լ��� yyyy/mm/dd������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�
�����ʽ����һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���
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
