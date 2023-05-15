#include<stdio.h>
int main() {
int n;
unsigned long long fac=1LL;
scanf("%d",&n);
while(n>1)
{
    fac*=n;
    n--;
}
printf("%llu",fac);
return 0;
}