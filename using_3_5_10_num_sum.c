#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;
    printf("Enter the sum :");
    scanf("%d",&n);
    int a[n+1];
    a[0]=1;
    for(i=1;i<n+1;i++)
    {
        a[i]=0;
    }
    for(i=3;i<(n+1);i++)
    {
        a[i]=a[i]+a[i-3];
    }
    for(i=5;i<(n+1);i++)
    {
        a[i]=a[i]+a[i-5];
    }
    for(i=10;i<(n+1);i++)
    {
        a[i]=a[i]+a[i-10];
    }
    printf("%d",a[n]);
    return 0;
}
