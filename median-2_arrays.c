/******************************************************************************

program to find longest common prefix in set of strings

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int arr1[4] = { 1, 2, 5, 7 };
  int arr2[4] = { 1, 4, 8, 9 };

  int arr3[8] = { 0 };
  int ptr1 = 0;
  int ptr2 = 0;
  int total = 0;
  for (int i = 0; i < 8; i++)
    {
      if ((ptr1 == 4) && (ptr2 == 4))
	{
	  printf ("nn%d\n", i + 1);
	  total = i + 1;
	  break;
	}
      if (ptr1 > 3)
	{
	  for (int j = i; j < 8; j++)
	    {
	      arr3[j] = arr2[ptr2++];
	      if (ptr2 == 4)
		{
		  printf ("bb%d\n", j + 1);
		  total = j + 1;
		  break;
		}
	    }
	  break;
	}
      if (ptr2 > 3)
	{
	  for (int j = i; j < 8; j++)
	    arr3[j] = arr1[ptr1++];

	  break;
	}
      if (arr1[ptr1] < arr2[ptr2])
	{
	  arr3[i] = arr1[ptr1];
	  ptr1++;
	  continue;
	}
      if (arr1[ptr1] == arr2[ptr2])
	{
	  arr3[i] = arr1[ptr1];
	  ptr1++;
	  ptr2++;
	  continue;
	}
      if (arr1[ptr1] > arr2[ptr2])
	{
	  arr3[i] = arr2[ptr2];
	  ptr2++;
	  continue;
	}
    }
  int median=0;

      if ((total%2) != 0)
        median = arr3[total/2];
      else
       median = (arr3[total/2] + arr3[(total+1)/2])/2;
      printf ("%d\n", median);
    
}
