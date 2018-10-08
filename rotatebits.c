/******************************************************************************

program to rotate bits in a number

*******************************************************************************/

#include <stdio.h>

int main()
{

    int rotation_base =2;
    int input = 8;
    
    // extract right most bits to be rotated
    
    int rotted_bits =0;
    int temp = input;
    int index = 1;
    for(int i=0; i<rotation_base; i++)
    {
        if (index = 1)
        {
            index=0;
            if (temp & 1)
                rotted_bits = 1;
            else
                rotted_bits = 0;
        }
        else
        {
            if (temp & 1)
                rotted_bits = rotted_bits<<1 +1;
            else
                rotted_bits = rotted_bits<<1;
        }
        temp=temp/2;
    }
    
int unrotated_orig = temp;    
int digits = 0;        
// count the number of remaining bits
while(temp)
{
    if(temp == 0)
        break;
    else
    {
        digits++;
        temp=temp/2;
    }
}

//shift rotated bits and add;

int res = (rotted_bits<<digits) + unrotated_orig;

printf("res=%d\t", res);

    

    return 0;
}
