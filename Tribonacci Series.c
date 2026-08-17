#include<stdio.h>
int main()
{
    // 0 ,1, 2, 3, 6, 11, 20, 37....N
    int n,i, a=0, b=1, c=2, d;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    return 0;
}