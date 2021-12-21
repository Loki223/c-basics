#include<stdio.h>
int main()
{
    int d,n ,l,a,s;
    scanf("%d%d",&a,&l);
    d=a;
    n=l/a;
    l=a+(n-1)*d;
    float x=(float)n/2;
    s=x*(a+l);
    
    printf("%d",s);
    
    
    
    
}