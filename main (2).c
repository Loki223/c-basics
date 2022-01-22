#include <stdio.h>

int main()

{
    int a,b,i,largest=0,res,n;
    scanf("%d%d",&a,&b);//3
    for(i=a;i<=b;i++)//2,3
    {
        n=i;
        int c=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;//num=1
            }
            else
            {
                n=3*n+1;//num=10
            }
            c++;
            
            
            
        }
    if(c>largest)
    {
        largest =c;
        res=i;
    }
    
    }
    
    printf ("%d",res);
}