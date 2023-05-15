#include <stdio.h>
#include <math.h>
int main()
{
    int digit, arm, rem, temp;
    for (int i = 1; i <= 1000; i++)
    {
        arm = 0;
        rem = 0;
        digit = floor(log10(i)) + 1;
        temp = i;
        while (temp > 0)
        {
            rem = temp % 10;
            arm += round(pow(rem, digit));
            temp = temp / 10;
        }
        if (arm == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}