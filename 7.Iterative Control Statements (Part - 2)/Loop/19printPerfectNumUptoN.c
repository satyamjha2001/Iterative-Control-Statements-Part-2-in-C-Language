#include<stdio.h>
int perfectNum(int n)
{ int sum=0;
for(int i=1;i<n;i++)
if(n%i==0)
sum+=i;
if(sum==n)
return 1;
return 0;
}
int main() {
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(perfectNum(i))
{
   printf("%d ",i);
}
}
return 0;
}