/******************************************************************************
invert ith row and jth column of binary matrix
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap(int* num1,int* num2)
{

    *num2 = *num1^*num2;
    *num1 = *num1^*num2;
    *num2=*num1^*num2;

     return 0;
}

int main()
{
    int inpMatrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0;i<3;i++){
    printf("\n");
    for (int j=0;j<3;j++)
        printf("%d\t",inpMatrix[i][j]);
    }

    for (int i=0;i<3/2;i++)
    for (int j=0;j<3;j++)
         swap(&(inpMatrix[i][j]), &(inpMatrix[(3-i-1)%3][j]));
         
         printf("\n after conversion:\n");
     for (int i=0;i<3;i++){
    printf("\n");
    for (int j=0;j<3;j++)
        printf("%d\t",inpMatrix[i][j]);
    }
    
    for (int i=0;i<3;i++)
    for (int j=i+1;j<3;j++)
        swap(&(inpMatrix[i][j]), &(inpMatrix[j][i]));
    
    
    
    printf("\n after conversion:\n");
     for (int i=0;i<3;i++){
    printf("\n");
    for (int j=0;j<3;j++)
        printf("%d\t",inpMatrix[i][j]);
    }
    
}
