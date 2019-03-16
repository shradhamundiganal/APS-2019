#include <stdio.h>
#include <stdlib.h>
#define MAX 500

void unin(int, int, int*,int);
void fnd(int, int, int*);

int main()
{
    int n,i,a,b;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ch;
    do
    {
        printf("1-UNION\n2-FIND\n3-EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the index numbers to find union of them:\n");
                   scanf("%d\t%d",&a,&b);
                   unin(a,b,arr,n);
                   break;
            case 2:printf("Enter the index numbers to find the find:\n");
                   scanf("%d\t%d",&a,&b);
                   fnd(a,b,arr);
                   break;
            case 3:break;
        }

    }while(ch!=3);
    return 0;
}

void unin(int a,int b,int *arr,int n)
{
    int i;
    int s=arr[b];
    int t=arr[a];
    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            arr[i]=s;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return;
}
void fnd (int l, int m,int *arr)
{
    if(arr[l]==arr[m])
    {
        printf("(%d,%d) connected\n",arr[l],arr[m]);
    }
    else{
        printf("(%d,%d) Not Connected\n",arr[l],arr[m]);
    }
    return;
}
