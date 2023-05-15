#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (1)
    {
        if (c == n)
        {
            printf("value %d is in fibonacci series", n);
            break;
        }
        else if (c > n)
        {
            printf("value %d is not in fibonacci series", n);
            break;
        }
        else
        {
            a = b;
            b = c;
            c = a + b;
        }
    }
    return 0;
}