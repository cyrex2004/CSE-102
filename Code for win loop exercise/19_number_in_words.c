#include<stdio.h>
int main()
{
    int n,d,r=0,t;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    while (r!=0)
    {
        t=r%10;
        switch (t)
        {
        case 0:
            printf("Zero ");
            break;
        
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            break;
        }
        r/=10;

    }
}
    

