#include<stdio.h>
#include<math.h>
int main() {
int n,lastd,octal=0,dec=0,i=0;
scanf("%d",&n);
while(n>0)
{ lastd = n%10;
  dec+=(pow(2,i)*lastd);
  n=n/10;
  i++;
}
printf("%d\n",dec);
i=0;
while(dec>0)
{
    lastd=dec%8;
    octal=octal+(lastd*pow(10,i));
    dec/=10;
    i++;
}
printf("%d",octal);
return 0;
}