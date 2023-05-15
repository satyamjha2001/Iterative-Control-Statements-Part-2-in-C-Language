#include<stdio.h>
int main() {
long long int base,i,n,temp;
scanf("%lld",&base);
scanf("%lld",&n);
long long int a[base];
for(i=0;i<base;i++)
{
    a[i]=0;
}
temp=n;
while(n>0)
{ temp=n%10;
  a[temp]++;
  n=n/10;
}
for(i=0;i<base;i++)
{
    printf("%lld ",a[i]);
}
return 0;
}