/******************************************************************************
Merge sort
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len 6

int merge(int *left, int left_len,int *right,int right_len,int *IArray_input)
{
    int i=0;
    int j=0;
    int k=0;
    
    while(i<left_len && j<right_len)
    {
        if (left[i]<right[j])
        {
            IArray_input[k]=left[i];
            i++;
            k++;
        }
        
        else
        {
        IArray_input[k]=right[j];
        k++;
        j++;
        }
    }
    while(i<left_len)
    {
        IArray_input[k]=left[i];
            i++;
            k++;
    }
    while(j<right_len)
    {
        IArray_input[k]=right[j];
            j++;
            k++;
    }
    
}

int mergesort(int* IArray_input, int length)
{
    int mid = length/2;
    if(length<2)
        return 0;
    else
    {
        int left[mid];
        int right[length-mid];
        for (int i=0; i<mid;i++)
            left[i]=IArray_input[i];
            
        for(int i = mid;i<length;i++) 
            right[i-mid] = IArray_input[i]; 
        
        int left_len = sizeof(left)/sizeof(int);
        int right_len=sizeof(right)/sizeof(int);
        mergesort(left,left_len);
        mergesort(right,right_len);

        merge(left,left_len,right,right_len,IArray_input);
    }
    
}

int main()
{
    int IArray_input[len]={2,5,1,7,3,8};
    mergesort(IArray_input, len);
    printf("FINAL RESULTS\n");
    for(int i=0; i<len;i++)
    {
        printf("%d\n",IArray_input[i]);
    }
}


