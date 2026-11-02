#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the a,b,c:");
    scanf("%d%d%d", &a, &b, &c);
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    int temp;
    if (*p > *q)
    {
        temp = *p;
        *p = *q;
        *q = temp;
    }
    if (*p > *r)
    {
        temp = *p;
        *p = *r;
        *r = temp;
    }
    if (*q > *r)
    {
        temp = *q;
        *q = *r;
        *r = temp;
    }

    printf("%d%d%d", *p, *q, *r);

    return 0;
}