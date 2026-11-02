#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three number:");
    scanf("%d%d%d", &a, &b, &c);
    int *p, *q, *r;
    int temp;
    p = &a;
    q = &b;
    r = &c;
    temp = *p;
    *p = *q;
    *q = *r;
    *r = temp;
    printf("the value of a=%d b=%d c=%d", *p, *q, *r);
    return 0;
}