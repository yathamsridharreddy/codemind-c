#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=199)
    {
        printf("%.2f",n*1.20+100);
    }
    else if(n>=200 && n<400 )
    {
        printf("%.2f",n*1.50+100);
    }
    else if(n>=400 && n<600)
    {
        printf("%.2f",n*1.80+(n*1.80*15)/100.0);
    }
    else if(n>=600)
    {
        printf("%.2f",n*2.00+(n*2.00*15)/100.0);
    }
}