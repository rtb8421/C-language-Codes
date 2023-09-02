#include<stdio.h>
int main()
{
        char ch;
        printf("Enter any character\n");
        scanf("%c",&ch);

        ch>='A' && ch<='Z' ?  printf("upper case") : ch>='a' && ch<='z' ? printf("lower case") : printf("invalid input");
        

    return 0;
}