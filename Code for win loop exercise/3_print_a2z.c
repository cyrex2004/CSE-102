#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    for(int i=c;i<='z';i++)
    {
        printf("%c\n",i);
    }
    return 0;
}