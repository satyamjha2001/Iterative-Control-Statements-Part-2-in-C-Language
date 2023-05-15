#include<stdio.h>
int main() {
int n,temp,res=0;
scanf("%d",&n);
temp=n;
while(temp>0)
{
//  temp=temp%10;
 res=(res*10)+(temp%10);
 temp=temp/10;
}
if(res==n)
{
    printf("palindrome number");
}
else
{
    printf("number is not palindrome");
}
return 0;
}