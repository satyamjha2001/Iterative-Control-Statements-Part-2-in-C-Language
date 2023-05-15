#include<stdio.h>
int main() {
int a,b,i;
scanf("%d%d",&a,&b);
int max=(a>b)?a:b;
i=max;
// printf("%d",max);
while(1)
{
    if((i%a==0)&&(i%b==0))
    { max=i;
      break;
    }
    else
    i+=max;
}
printf("%d",max);
return 0;
}