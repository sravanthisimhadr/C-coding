/******************************************************************************

O(n) way of solving - find two numbers in array creating product

*******************************************************************************/
#include <stdio.h>
bool prodTwoNums(int* inpArr, int numSize, int target)
{
    bool resArr[1000]={0};
    for(int i=0;i<numSize;i++)
    {
        int val = target/inpArr[i];
        if(resArr[val]==1)
            printf("nums are %d\t%d\n",val,inpArr[i]);
        resArr[inpArr[i]]=1;
    }
}
int main()
{
    int arrin[5]={2,4,6,3,7};
    int target=12;
    bool aa = 1;
    prodTwoNums(arrin,5,target);

    return 0;
}
