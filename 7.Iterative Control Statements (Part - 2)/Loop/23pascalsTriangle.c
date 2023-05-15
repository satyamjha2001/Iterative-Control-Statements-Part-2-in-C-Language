#include<stdio.h>
int fact(int n) {
   int i;
   for(i = 1; n > 1; n--)
      i*= n;
      
   return i;
}

int ncr(int n,int r) {
   return fact(n) / ( fact(n-r) * fact(r) );
}
int main() {
int n;
scanf("%d",&n);
for(int i=0;i<=n;i++)
{   
    for(int s=0;s<=n-i;s++)
    printf("  ");
    for(int j=0;j<=i;j++)
    {
        printf("%4d",ncr(i,j));
    }
    printf("\n");
}
return 0;
}