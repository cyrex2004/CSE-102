#include<stdio.h>
int main()
{
    int n,f,l;
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {
        n/=10;
    }
    f=n;
    printf("%d\n",f);
    printf("%d",l);
    return 0;
}