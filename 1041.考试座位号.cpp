/*1041 ������λ��
�����ʽ�������һ�и���һ�������� N����1000������� N �У�ÿ�и���һ����������Ϣ��׼��֤�� �Ի���λ�� ������λ�š�
����׼��֤���� 14 λ������ɣ���λ�� 1 �� N ��š�
���뱣֤ÿ���˵�׼��֤�Ŷ���ͬ�������κ�ʱ�򶼲���������˷��䵽ͬһ����λ�ϡ�
������Ϣ֮�󣬸���һ�������� M����N�������һ���и��� M ������ѯ���Ի���λ���룬�Կո�ָ���
�����ʽ����Ӧÿ����Ҫ��ѯ���Ի���λ���룬��һ���������Ӧ������׼��֤�źͿ�����λ���룬�м��� 1 ���ո�ָ���
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
