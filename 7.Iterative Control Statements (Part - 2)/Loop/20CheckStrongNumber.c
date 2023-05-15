#include<stdio.h>
int main() {
int n,temp,rem=0,fact,sum=0;
scanf("%d",&n);
temp=n;
while(temp>0)
{ rem=temp%10;
   fact=1;
  for(int i=rem;i>1;i--)
  {
    fact*=i;
  }
  sum+=fact;
  temp/=10;
}
if(n==sum)
printf("%d is STRONG NUMBER",n);
else
printf("%d is not STRONG NUMBER",n);
return 0;
}