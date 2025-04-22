// An Armstrong number is a n-digit number that is equal to the sum of the nth power of its digits. For example –

// 371 = 3^3 + 7^3 + 1^3 = 371

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d;
    int tmp=n;
    d=(int)log10(n)+1;
    int sum = 0;
    while (n!=0)
    {
        int ld=n%10;
        sum =sum+pow(ld,d);
        n/=10;
    }
    if(sum==tmp)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    
    return 0;
}
