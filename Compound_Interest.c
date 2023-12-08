#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,R;
    scanf("%d%d%d",&p,&R,&t);
    float r=R/100.0;
    float ci=p*(pow(1+r,t))-p;
    printf("%.2f",ci);
}