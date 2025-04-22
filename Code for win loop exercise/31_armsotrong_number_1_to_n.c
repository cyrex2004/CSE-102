#include<stdio.h>
#include<math.h>

int main()
{
    int i, n;
    scanf("%d %d", &i, &n);
    
    for(int j = i; j <= n; j++)
    {
        int d = (int)log10(j) + 1;
        int k = j;
        int sum = 0;
        
        while (k != 0)
        {
            int ld = k % 10;
            sum += pow(ld, d);
            k /= 10;
        }
        
        if(sum == j)
        {
            printf("%d ", j);
        }
    }
    
    return 0;
}
