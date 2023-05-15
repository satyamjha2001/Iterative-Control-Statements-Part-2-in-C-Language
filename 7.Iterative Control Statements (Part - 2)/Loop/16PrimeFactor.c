#include<stdio.h>
void primeFact(int n)
{   if(n<=1)
    return;
    while(n%2==0)
    { printf("2 ");
       n=n/2;
    }
    while(n%3==0)
    {
        printf("3 ");
        n=n/3;
    }
    for(int i=5;i*i<n;i+=6)
    {
        while (n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        while (n%(i+2)==0)
        {
            printf("%d ",(i+2));
            n=n/(i+2);
        }
    }
    if(n>3)
    printf("%d",n);
}
int main() {
int n;
scanf("%d",&n);
primeFact(n);
return 0;
}