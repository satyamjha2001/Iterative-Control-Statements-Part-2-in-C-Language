#include<stdio.h>
int main() {
int n,k;
for(int n=2;n<100;n++)
{    k=0;
    for(int i=2;i<n;i++)
    {   
        if(n%i==0)
        {   k=1;
            break;
        }
    }
    if(k==0)
    printf("%d ",n);
}
return 0;
}   