#include <stdio.h>
#include <stdlib.h>
#define MAX 500

void unin(int, int, int*,int);
void fnd(int, int, int*);
int root(int,int *);

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

int root(int i,int *arr)
{
    while(arr[i] != i)
        i = arr[i];
    return i;
}

void fnd(int a, int b,int *arr)
{
    if(root(a,arr) == root(b,arr))
        printf("Connected");
    else
        printf("Not Connected");
    return;
}

void unin(int a ,int b,int* arr,int n)
{
    int s,i;
    int t;
    s=root(a,arr);
    t=root(b,arr);
    arr[s]=t;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return;
}
