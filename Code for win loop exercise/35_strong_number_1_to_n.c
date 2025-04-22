// Strong number is a special number whose sum of factorial of digits is equal to the original number.
// For example: 145 is strong number. Since, 1! + 4! + 5! = 145

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int tmp=i;
        int num=tmp;
        int sum=0;
        if(i==0)
        {
            int sum=1;
        }
        else
        {
            while(num!=0)
            {
                int ld=num%10;
                int fact=1;
                for(int j=1;j<=ld;j++)
                {
                    fact*=j;
                }
                sum+=fact;
                num/=10;
            }
        }
        if(sum==tmp)
        {
            printf("%d ",tmp);
        }

    }
    return 0;
}