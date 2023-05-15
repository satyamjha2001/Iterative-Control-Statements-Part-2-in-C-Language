#include<stdio.h>
int main() {
int n,temp,rem=0,fact,sum;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{ temp=i;
sum=0;
while(temp>0)
{ rem=temp%10;
   fact=1;
  for(int j=rem;j>1;j--)
  {
    fact*=j;
  }
  sum+=fact;
  temp/=10;
}
if(i==sum)
printf("%d ",i);
}
return 0;
}