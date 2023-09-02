#include<stdio.h>
#include<string.h>

int main(){

char str[20];
char str1[20];

printf("Enter two string\n");
gets(str);
gets(str1);

if(strcmp(str,str1)==0)

    printf("string are same");

    else
    printf("string are not same");





return 0;

}
