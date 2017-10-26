/******************************************************************************/

//Bus reservation system

/******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define ROW 10
#define COL 2

int seats [ROW][COL] = {0};
int reserve (int *row,int *col, int k);
int main()
{
    int* current_row;
    int* current_col;
    int row = 0;
    int col=0;
    current_row = &row;
    current_col = &col;
    
    int ret_val  = reserve(current_row, current_col,5);
    if (ret_val)
    {
        
    *current_col=0;
    printf("\nreserved" );
        ret_val = reserve(current_row, current_col,8);
    }
    if(ret_val)
    {
        printf("\nSeat map\n");
        for(int i=0; i<ROW;i++)
        {
            for (int j=0; j<COL;j++)
            {
            printf("%d\t ",seats[i][j]);
            }
            printf("\n");
        }
    }
}

int reserve (int *row,int *col, int k)
{ 
 
    if (k>(ROW*COL - (*row * *col)))
    {
    printf("\nExceeds bus capacity" );
    return -1;
    }
    else 
    {
        int count = 0;
        int i,j=0;
        for ( i = *row; i<ROW;i++)
        {
            /*reserved required number of seats. Break execution and return row 
            number.*/
            if (count==k)
            {
                *row = i;
                break; 
            }
            for ( j= *col;j<COL;j++)
            {
                /*reserved required number of seats. Break execution and return 
                row number.*/
                if (count==k)
            {
                *row = i;
                break; 
            }
            
                seats[i][j]=1;
                count++;
            }
        }

    }

    return 1;
    
}
