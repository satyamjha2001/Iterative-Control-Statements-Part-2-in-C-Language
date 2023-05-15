#include<stdio.h>
int main() {
int n,a=0,b=1,c=0;
printf("Enter number of terms: ");
scanf("%d",&n);
if(n==1)
printf("value %d is in %d term",a,n);
else{
for(int i=2;i<=n;i++)
{
    a=b;
    b=c;
    c=a+b;
}
printf("value %d is in %d term",c,n);
}
return 0;
}