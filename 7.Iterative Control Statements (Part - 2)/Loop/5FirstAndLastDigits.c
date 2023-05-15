#include<stdio.h>
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int main() {
int n,temp=0,temp1=0;
scanf("%d",&n);
temp=n;temp1=n;
temp1=temp1%10;
while (temp>=10)
{ 
  temp=temp/10;
}
printf("%d is first digit and %d is last digit\n",temp,temp1);
printf("sum of first and last digit: %d\n",(temp+temp1));
swap(&temp,&temp1);
printf("first and last after swap %d and %d",temp,temp1);
return 0;
}