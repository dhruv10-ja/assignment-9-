# assignment-9-
#include<stdio.h>
int main()
{
int num;
int i=1;
int fact=1;

printf("enter number:");
scanf("%d",&num);
for(i=1;i<5;i++)
{
    fact=fact*i;
    
}
printf("%d",fact);
return 0;      
}
