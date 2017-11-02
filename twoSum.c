#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

 */
int count = 0;
int* twoSum(int* nums, int numsSize, int target) {
    
    int* result;
    for (int i=0; i<=target;i++)
    {
        for (int j=0; j<i;j++)
        {
            if (nums[i]+nums[j]==target)
            {
                if (count==0)
                {
                    result = (int*)malloc(sizeof(int)*2);
                    *(result+count)=i;
                    count++;
                    *(result+count)=j;
                    count++;
                }
                else
                {
                    int * temp = result;
                    result = (int*)malloc(sizeof(int)*(count+2));
                    result = temp;
                    *(result+count)=i;
                    count++;
                    *(result+count)=j; 
                    count++;
                }
            }
        }
        
    }
     return result;                                     
}
int main ()
{
    int numsSize= 10;
    int* inp = (int*)malloc(sizeof(int)*numsSize);
    //assume array is sorted. 
    //if not perform sort
    for (int i=0; i<numsSize; i++)
    {
        inp[i]=i;
    }
    int target=7;
    int* result = twoSum(inp, numsSize,target);
    free(inp);
    for (int j=0; j<count;j++)
    {
       printf("%d\t", result[j]);
    }
    free(res);
    return 0;
}
