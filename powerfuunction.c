/******************************************************************************
pow x,n
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double myPow(double x, int n) {
    double x1 = x;
    if (n<0)
    {
        for (int i=abs(n); i>0;i--)
       {
           x=x/x1;
       }
    }
    else
    {
   for (int i=0; i<(n-1);i++)
   {
       x=x*x1;
   }
    }
    return x;
}

int main()
{
    double inx = 2;
    int inn = -3;
   double res = myPow(inx,inn);
   printf("%f\n",res);
}
