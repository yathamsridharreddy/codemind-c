#include<stdio.h>
int main()
{
    float PF,SALARY,HRA,DA,GROSS;
    scanf("%f%f%f",&SALARY,&HRA,&DA);
    PF=SALARY*12/100;
    GROSS=SALARY+HRA+DA+PF;
    printf("%.2f
%.2f",PF,GROSS);
}