#include<stdio.h>
int main(){
    // 1 2 3 4 .......n
    int n , i;
    printf("Enter any Number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++);{
        printf("%d",i);
    }
    return 0;
}