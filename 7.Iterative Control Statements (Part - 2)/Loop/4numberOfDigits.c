#include<stdio.h>
#include<math.h>
int main() {
int n;
scanf("%d",&n);
int digits=floor(log10(n))+1;
printf("%d",digits);
return 0;
}