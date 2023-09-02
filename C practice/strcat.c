#include<stdio.h>
#include<string.h>

int main(){

char str[20];
char str1[20];

printf("Enter two string\n");

gets(str);
gets(str1);

strcat(str,str1);
printf("Firts string %s \n second string %s\n",str,str1);


return 0;

}
