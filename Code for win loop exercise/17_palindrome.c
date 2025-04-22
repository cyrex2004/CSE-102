#include<stdio.h>
int main()
{
    int n,d,r=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if(t==r)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}