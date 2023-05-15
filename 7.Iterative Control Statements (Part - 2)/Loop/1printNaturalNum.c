#include<stdio.h>
int main() {
int n,i=1;
scanf("%d",&n);
while(i<=n)
{
    printf("%d ",i);
    i++;
}
printf("\n");
while(n>=1)
{
    printf("%d ",n);
    n--;
}
return 0;
}