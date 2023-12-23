#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20],b;
    scanf("%s%s",&str,&str1);
    b=strcmp(str,str1);
    if(b==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}