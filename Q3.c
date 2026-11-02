#include<stdio.h>
int main()
{
int n;
printf("enter the n:");
scanf("%d",&n);
int*p;
p=&n;
*p=*p+10;
printf("the value of n=%d",*p);
    return 0;
}