/******************************************************************************

find sub array
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int big_array[10]={1,3,5,7,9,2,4,6,8,1,4};
    int sub_array[3]={5,7,9};
    int sub_array_size=3;
    for (int i=0;i<10;i++)
    {
    //fing first number in sub array
        if(big_array[i]==sub_array[0])
        {
        //if found loop through
            int count=0;
            for (int j=1;j<sub_array_size;j++)
            {
                if(big_array[i+j]!=sub_array[j])
                break;
                else
                count++;
            }
            if(count==sub_array_size-1)
            {
            printf("SUCCESS, found at %d\n",i);
            return 1;
            }
        }
    }
    
        
    printf("Not found");
    return 0;
}
