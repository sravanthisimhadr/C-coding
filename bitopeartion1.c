/******************************************************************************
Reset the first rightmost set bit

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World");
    
    int y=2;
    int temp = y;
    int index = 0;
    while(1)
    
    {
        if(temp == 0)
        {
            return 0;
        }
        else
        {
            int temp1 = temp%2;
            if (temp1 ==1)
               break;
            else
            {
                temp=temp/2;
                index++;
            }
                
        }
    }
    
    
    int res = y ^ (1<<index);
    printf("res %d\n", res);
    return 0;
}
