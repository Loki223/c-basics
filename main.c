/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    
    int times,i,j;
    scanf("%d",&times);
    for (i=1;i<=times;i++)
    {
        for (j=1;j<=i;j++)
        {
        printf("* " );
        }
    printf("\n");
    }
    
    
}

