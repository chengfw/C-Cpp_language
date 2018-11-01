#include<stdio.h>

#define NUM 20

typedef struct{
    char name[NUM];
    char number[NUM];
    int grade;  
}Stu;

int main()
{   
    Stu mem;
    Stu max,min;
    max.grade = 0;
    min.grade = 100;
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%s %s %d",mem.name,mem.number,&mem.grade);
        if(mem.grade >= max.grade)
            max = mem;
        if(mem.grade <= min.grade)
            min = mem;
    }
    printf("%s %s\n%s %s",max.name,max.number,min.name,min.number);         
    return 0;
} 
