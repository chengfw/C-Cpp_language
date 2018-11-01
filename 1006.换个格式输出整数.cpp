#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n>=1000)
	 printf("ERROR");
	if(n>99)
	 {
	 	for(i=1;i<=n/100;i++)
	 	 {
	 	 	printf("B");
		  }
		for(i=1;i<=n/10%10;i++)
	     {
	     	printf("S");
		  } 
		for(i=1;i<=n%10;i++)
		 {
		    printf("%d",i);	
		 }	  	
	 }
	 
	 else if(n>9)
	  {
	 		for(i=1;i<=n/10%10;i++)
	     {
	     	printf("S");
		  } 
		for(i=1;i<=n%10;i++)
		 {
		    printf("%d",i);	
		 }	
	  }
	  
	  else if(n>0)
	  {
	  	for(i=1;i<=n%10;i++)
		 {
		    printf("%d",i);	
		 }
	  }
	  
	  return 0;
 } 
