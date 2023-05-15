#include<stdio.h>
int main() {
int a,b,rem;
scanf("%d%d",&a,&b);
while(b>0)
{
    rem=a%b;
    if(rem==0)
    {printf("%d",b);
    break;}
    else
    {
        a=b;
        b=rem;
    }
}
return 0;
}