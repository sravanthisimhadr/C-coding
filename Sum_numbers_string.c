/******************************************************************************

Given input - xyzonexyztwothreeeabrminusseven as a string, return an integer as the sum of all numbers found in the string 

******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char * str_in ="xyzonexyzminustwominusthreeeabrseven";
char* str_nums[10] ={"one","two","three","four","five","six","seven","eight","nine","ten"};


int main()
{
    int discovered_nums[20];
    int num_cnt = 0;
    int num_sum=0;
    
    int discovered_pos[20];
    const char *tmp = str_in;
    int minus_pos [20];
    int minus_count = 0;
    
    //find all "minus"
    
    while(tmp = strstr(tmp, "minus"))
    {
       minus_pos[minus_count] = tmp - str_in;    
       minus_count++;
       tmp++;
       
    }
    // find all occurrences of all words. Save the numbers and the positions
    for (int i=0; i<10;i++)
    {
       
        const char *tmp_nums = str_in;
        
        while(tmp_nums = strstr(tmp_nums, str_nums[i]))
        { 
            discovered_nums[num_cnt]=i+1;
            discovered_pos[num_cnt] = tmp_nums - str_in;
            num_cnt++;
            tmp_nums++;
            
        }
    }
    
    // find which ones are negative.  use length of "minus" = 5
    for (int i= 0; i<num_cnt; i++)
    {
        for (int j = 0; j<minus_count; j++)
        {
            if (discovered_pos[i]-minus_pos[j] ==  5)
            {
                discovered_nums[i] = -1*discovered_nums[i];
            }
        }
        
    }
    //add them up
    for (int i= 0; i<num_cnt; i++)
    {
        num_sum = num_sum+discovered_nums[i];
    }
    printf ("SUM = %d\n", num_sum);
    return 0;
}
