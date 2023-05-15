#include<stdio.h>
#include<math.h>
int main() {
int n,digit,arm=0,rem=0,temp;
scanf("%d",&n);
digit=floor(log10(n))+1;
temp=n;
while(temp>0)
{ rem=temp%10;
  arm+=(pow(rem,digit));
  temp=temp/10;
}
if(arm==n)
{
    printf("%d is armstrong number",n);
}
else
{
    printf("%d is not armstrong number",n);
}
return 0;
}