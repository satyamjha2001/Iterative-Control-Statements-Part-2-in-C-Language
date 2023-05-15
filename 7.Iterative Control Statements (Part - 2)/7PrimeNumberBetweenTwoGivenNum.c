#include <stdio.h>
int main()
{
    int a, b, k;
    printf("Enter the two numbers in which you see prime numbers: ");
    scanf("%d%d", &a, &b);
    for (int n = a; n <= b; n++)
    {
        k = 0;
        if (n <= 1)
        {
            k = 1;
        }
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    k = 1;
                    break;
                }
            }
        }
        if (k == 0)
            printf("%d ", n);
    }
    return 0;
}