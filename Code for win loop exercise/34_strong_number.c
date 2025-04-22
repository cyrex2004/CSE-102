// Strong number is a special number whose sum of factorial of digits is equal to the original number.
// For example: 145 is strong number. Since, 1! + 4! + 5! = 145

#include <stdio.h>

int main()
{
    int n, l, sum = 0;
    int fact;
    scanf("%d", &n);

    int tmp = n;

    // Special handling for 0
    if (n == 0) {
        sum = 1;  // Since 0! = 1
    } else {
        while (n != 0)
        {
            l = n % 10;
            fact = 1;
            for (int j = 1; j <= l; j++)
            {
                fact *= j;
            }
            sum += fact;
            n /= 10;
        }
    }

    if (tmp == sum)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }

    return 0;
}

