#include <stdio.h>

int main()
{
    int a,sum=0;
    scanf("%d", &a);

    for(int i = 1; i <= a; i++)
    {
        if(i < 2)
            continue;

        int isPrime = 1; // Assume i is prime

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0; // Not prime
                break;
            }
        }

        if(isPrime)
        {
            sum+=i;
        }
    }
    printf("%d",sum);

    return 0;
}
