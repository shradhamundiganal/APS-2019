#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Return the number of subsets whose value is greater than or equal to the given value*/
int subset_sum(int* ,int,int);
int main()
{
    int set_size=3;
    int set[]={3,4,5};
    int value=5;
    int count;
    count=subset_sum(set,set_size,value);
    printf("%d",count);
    return 0;
}

int subset_sum(int *set,int set_size,int value)
{
    int cnt=0;
    int x,k;
    for(x=0;x<pow(2,set_size);x++)//generate all the numbers 000-001-010-011-100-101-110-111
    {
        int sum=0;
        for(k=0;k<set_size;k++)//all the elements in the loop
        {
            if(x&(1<<k))//check whether kth bit is set in x(i.e calculate the sum of all the subsets)
            {
                sum=sum+set[k];
            }
        }
        if(sum>=value)
        {
            cnt++;
        }
    }
    return cnt;
}
