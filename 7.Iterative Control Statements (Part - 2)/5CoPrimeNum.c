#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    for(;;)
    {
        if (a%b==0)
        {
            break;
        }
        else
        {
            temp = a % b;
            a = b;
            b = temp;
        }
    }
    if(b==1)
    printf("Numbers are Co Prime");
    else
    printf("Numbers are not Co Prime");
    return 0;
}