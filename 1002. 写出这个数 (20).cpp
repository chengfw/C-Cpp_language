#include<stdio.h>
#define N 101
int main()
{
  char a[N];
  scanf("%s",a);
  char *b[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int i,sum=0;
  for(i=0;i<N;i++)
  {
    sum+=(a[i]-'0');
  }
  if(sum/100) printf("%c ",b[sum/100]);
  if(sum/10)  printf("%c ",b[sum/10%10]);
  printf("%c ",b[sum%10]);
  
  return 0;
}
