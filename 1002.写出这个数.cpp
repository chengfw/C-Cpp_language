#include<stdio.h>
#include<string.h>
int main()
{
   char a[101];
   int i,j=0;
   int sum=0;
   char pinyin[10][5]={"ling","yi","er","san","si","wu","liu",
                "qi","ba","jiu"}; 
   gets(a);
   
   for(i=0;i<strlen(a);i++)
    {
   	   sum=sum+(a[i]-'0');
    }
   if(sum>99) 
   printf("%s %s %s",pinyin[sum/100],pinyin[sum/10%10],pinyin[sum%10]);
    
   else if(sum>9)
   printf("%s %s",pinyin[sum/10],pinyin[sum%10]);
   else
   printf("%s",pinyin[sum]);
   
   return 0;
 }
 
  #include<stdio.h>
#include<string.h>
int main()
{
   char a[101];
   int i,j=0;
   int sum=0;
   char pinyin[10][5]={"ling","yi","er","san","si","wu","liu",
                "qi","ba","jiu"}; 
   gets(a);
   
   for(i=0;i<strlen(a);i++)
    {
   	   sum=sum+(a[i]-'0');
    }
   if(sum>99) 
   printf("%s %s %s",pinyin[sum/100],pinyin[sum/10%10],pinyin[sum%10]);
    
   else if(sum>9)
   printf("%s %s",pinyin[sum/10],pinyin[sum%10]);
   else
   printf("%s",pinyin[sum]);
   
   return 0;
 }
 
  
