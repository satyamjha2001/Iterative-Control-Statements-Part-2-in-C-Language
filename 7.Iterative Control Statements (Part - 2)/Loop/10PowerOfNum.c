#include<stdio.h>
int main() {
int n,p,i,res=1;
scanf("%d%d",&n,&p);
for(i=0;i<p;i++)
{
   res*=n;
}
printf("%d",res);
return 0;
}