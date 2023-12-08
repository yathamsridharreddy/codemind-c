#include<stdio.h>
int mult(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=mult(a,b);
    printf("%d",res);
}
int mult(int a,int b)
{
    int mult;
    mult=(a*b);
    return mult;
}