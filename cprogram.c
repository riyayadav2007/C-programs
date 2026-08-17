#include<stdio.h>
int main()
{
    int a, b,*p,*q,temp;
    p=&a;     q=&b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("befour swapping:%d%d",a,b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swapping:%d%d",*p,*q);

    return 0;
}