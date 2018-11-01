#include<stdio.h>
int main()
{
	int i=0,j=0,m=0,n=0;
	int A,B,num;
	char a[11]={0},b[11]={0};
	scanf("%s %d %s %d",a,&A,b,&B);
	
    while(a[i])
     {
     	if(A==(a[i]-'0'))
     	 m=m*10+1;
     	 i++;
	 }
	 
	while(b[j])
	 {
	 	if(B==(b[j]-'0'))
	 	 n=n*10+1;
	 	 j++;
	 }
	 
	num=A*m+B*n;
	printf("%d",num); 
	
	return 0;
 } 
