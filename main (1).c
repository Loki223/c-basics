/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n, largest;
  scanf ("%d", &n);
  int i, arr[n];

  for (i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (i = 0; i < n - 1; i++)	//0 1 2 3 4
    {
      if (arr[i] > arr[i + 1])
	{
	  largest = arr[i];
	}
      else
	{
	  largest = arr[i + 1];
	}
    }
  printf ("%d", largest);
}
