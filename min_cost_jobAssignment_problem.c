#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int min(int,int);
int cnt_set_bits(int);

int main()
{
    int arr[3][3]={{8,2,5},{3,2,7},{4,1,2}};//input matrix of N*N-N persons and N jobs content of matrix is cost
    int i,j,mask,set_bits,index,val;
    int set[8];//initialize a array with size N power 2
    set[0]=0;   //set first element to 0
    for(i=1;i<8;i++)
    {
        set[i]=INT_MAX;     //set every element to infinity other than 0th element
    }

    for(i=0;i<8;i++)//generate all the combinations 000-001-010-011-100-101-110-111
    {
       mask=i;
       set_bits=cnt_set_bits(mask);//count the number of set bits
       for(j=0;j<3;j++)//generate 3 combinations 000-001-010
       {
           if((mask&(1<<j))==0)//check whether the bit is set or not if the bit is unset returns zero
           {
               index=mask|(1<<j);//initialize the value which we get after or operation on mask and the left shifted j
               val=min(set[index],set[mask]+arr[set_bits][j]);//take the min
               set[index]=val;//replace the value in the set array with the minimum
           }
       }

    }
    for(i=0;i<8;i++)
    {
        printf("%d\n",set[i]);
    }
    return 0;
}

int cnt_set_bits(int mask)
{
    int count=0;
    while(mask){
        count=count+1;
        mask=(mask)&(mask-1);
    }
    return count;
}

int min(int s,int a)
{
    if(s<a)
    {
        return s;
    }
    else{
        return a;
    }
}
