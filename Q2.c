#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two number:");
    scanf("%d %d", &a, &b);
    int *p, *q;
    p = &a;
    q = &b;
    if (*p > *q)
    {
        printf("%d is greater than ", *p);
    }
    else
    {
        printf("%d is greater than", *q);
    }

    return 0;
}