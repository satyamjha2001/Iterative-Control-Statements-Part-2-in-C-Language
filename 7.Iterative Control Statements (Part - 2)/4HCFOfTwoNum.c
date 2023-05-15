#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    for(;;)
    {
        if (a % b == 0)
        {
            printf("%d is the HCF", b);
            break;
        }
        else
        {
            temp = a % b;
            a = b;
            b = temp;
        }
    }
    return 0;
}