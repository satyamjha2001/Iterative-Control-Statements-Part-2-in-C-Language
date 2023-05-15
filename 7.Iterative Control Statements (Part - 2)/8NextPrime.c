#include <stdio.h>
int main()
{
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    n++;
    while (n)
    {   k=0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            printf("%d ", n);
            break;
        }
        n++;
    }
    return 0;
}