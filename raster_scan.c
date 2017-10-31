/******************************************************************************

Print Matrix in raster form:
for eg: 
1 2 3 
4 5 6 
7 8 9 

should return 1 2 3 6 5 4 7 8 9
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define ROW 4
#define COL 3
int inp_matrix[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int main()
{
    for (int i=0; i<ROW; i++)
    {
        for (int j=0; j<COL;j++)
        {
            if((i%2)==0)
            printf("%d\t",inp_matrix[i][j]);
            else
            printf("%d\t",inp_matrix[i][COL-j-1]);
        }
        
    }
    return 0;
}
