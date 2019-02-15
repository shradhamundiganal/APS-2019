#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char a[100],b[100];
    printf("Enter the 2 strings to be compared:\n");
    scanf("%s\n%s",&a,&b);
    int s=strlen(a);
    int t=strlen(b);
    int ar[100][100];
    for(j=0;j<=t;j++)
    {
        ar[0][j]=0;
    }
    for(i=0;i<=s;i++)
    {
        ar[i][0]=0;
    }
    for(i=0;i<=s;i++)
    {
        for(j=0;j<=t;j++)
        {
            if(a[i]==b[j])
            {
                ar[i+1][j+1]=ar[i][j]+1;
            }
            else{
                    if((ar[i][j+1])>=(ar[i+1][j]))
                    {
                        ar[i+1][j+1]=ar[i][j+1];
                    }
                    else{
                        ar[i+1][j+1]=ar[i+1][j];
                    }
            }
        }
    }
    for(i=0;i<=s;i++)
    {
        for(j=0;j<=t;j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    printf("%d",ar[s][t]);
    return 0;
}
