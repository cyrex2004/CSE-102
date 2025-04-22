#include<stdio.h>
int main()
{
    int b,p;
    printf("Base: ");
    scanf("%d",&b);
    printf("Power: ");
    scanf("%d",&p);
    int tmp=b;
    for(int i=1;i<p;i++)
    {
        b=tmp*b;
    }
    printf("%d",b);
    return 0;
}