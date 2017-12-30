#include<stdio.h>

int function(char m[100])
{
	int i;
	int dst_1=0,dst_2=0,dst_3=0;
	
	for (i=0;m[i]!='\0';i++)
	 {
	 	if(m[i]=='P'||m[i]=='T'||m[i]=='A')
		 {
		   if(m[i]=='P')
		    dst_1=i;
		    
	       if(m[i]=='T')
	  	    dst_2=i-dst_1-1;
	     }
	     else return 0;
	   dst_3=i-dst_1-dst_2-1;
     }
     
    if(dst_2==0||dst_1*dst_2!=dst_3)
      return 0;
    else 
      return 1;
}

int main()
{
	int i,j,n;
	char a[100];
	char b[10];
	scanf("%d",&n);  /*表示需要检测的字符串个数*/
	
	for(i=0;i<n;i++) 
	 {
	   scanf("%s",a);
	   b[i]=function(a);
	  } 
	 for(i=0;i<n;i++)
	 {
	   if(b[i]==1) printf("YES\n");
	   else printf("NO\n");
     }
     
	return 0;
}


