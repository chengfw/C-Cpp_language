/* �ڵ�һ�и���������10^5��������N�����������������N�У�
ÿ�и���һλ�����ߵ���Ϣ�ͳɼ����������������ѧУ��� 
(��1��ʼ�������)��������ɼ�(�ٷ���) 
*/
#include<stdio.h>

const int maxn = 100010;
int main() {
	int school[maxn] = {0};
	int n, score, schoolID;
	scanf("%d", &n);  //����������� 
	for(int i=0; i<n; i++) {
		scanf("%d%d", &schoolID, &score);
		school[schoolID] += score;
	}
	int k=1, max = -1;
	for(int i=1; i<=n; i++) {
		if(school[i] > max) {
			max = school[i];
			k = i;
		}
	}
	printf("%d %d\n", k, max);
	return 0;
}
