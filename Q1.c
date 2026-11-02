#include <stdio.h>
int main()
{
    int a, b;
    int *p, *q, sum;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    p = &a;
    q = &b;
    sum = *p + *q;

    printf("sum=%d", sum);

    return 0;
}