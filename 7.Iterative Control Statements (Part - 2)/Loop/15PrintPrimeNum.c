#include<stdio.h>
int isprime(int n)
{   if(n<=1)
    return 0;
    else if(n==2)
    return 1;
    else if(n==3)
    return 1;
    else if((n%2==0) || (n%3==0))
    return 0;
    else
    {
        for(int i=5;(i*i)<n;i+=6)
        {
            if((n%i==0) ||(n%(i+2)==0))
            return 0;
        }
    }
    return 1;
}
int main() {
int n,m,i,sum=0;
scanf("%d%d",&n,&m);
for(i=n;i<=m;i++)
{
    if(isprime(i))
    printf("%d ",i);
}
printf("\nSum Of All Prime Numbers Are :");
for(i=n;i<=m;i++)
{
    if(isprime(i))
    sum+=i;
}
printf("%d",sum);
return 0;
}