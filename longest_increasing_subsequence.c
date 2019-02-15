#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main()
{
    int n,i,j,max=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int ar[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++)
    {
        a[i]=1;
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(ar[j]<ar[i]&&a[i]<a[j]+1)
            {
                a[i]=a[j]+1;
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
        }
    }

    printf("%d",max);
    return 0;
}
