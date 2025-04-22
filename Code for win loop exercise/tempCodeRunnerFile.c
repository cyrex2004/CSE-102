#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++)
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
            printf("%d ", i);
    }

    return 0;
}
